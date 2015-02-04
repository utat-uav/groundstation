#include "targlistmainwindow.h"
#include "ui_targlistmainwindow.h"
#include "targetmaker.h"
#include "targetlist.h"
#include <QtAlgorithms>
#include <QDebug>
#include <QHeaderView>
#include <QTableWidget>

TargListMainWindow::TargListMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TargListMainWindow)
{
    colCount = 5;
    ui->setupUi(this);
    targetList = new TargetList(ui->targetListTable);
    connect(ui->targetListTable->horizontalHeader(), SIGNAL(sectionClicked(int)),
         this, SLOT(sort(int)));

    // Eventually make this thing resizeable somehow

    // Set row size
    ui->targetListTable->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Fixed);
    ui->targetListTable->horizontalHeader()->setDefaultSectionSize(150);
    ui->targetListTable->horizontalHeader()->setMinimumSectionSize(100);
    ui->targetListTable->verticalHeader()->setDefaultSectionSize(100);
    //ui->targetListTable->setStyleSheet("QTableWidget {selection-background-color: #00000000; selection-color: white}");
}

TargListMainWindow::~TargListMainWindow()
{
    delete ui;
}

void TargListMainWindow::on_newItem_clicked()
{
    targetMaker = new TargetMaker(this);
    targetMaker->setModal(true);
    targetMaker->setWindowTitle("Create New Target");
    targetMaker->exec();
    if (targetMaker->accepted) {
        targetList->addNewRow(targetMaker->getImageFilePath(), targetMaker->getName(), targetMaker->getCoord(), targetMaker->getDesc());
    }
}

void TargListMainWindow::on_deleteButton_clicked()
{
    QItemSelectionModel *select = ui->targetListTable->selectionModel();
    QModelIndexList selectedRows = select->selectedRows();
    QList<int> deletionOrder;

    if (select->hasSelection()) {
        // Makes sure everything is deleted in the correct order
        for (QList<QModelIndex>::iterator i = selectedRows.begin(); i != selectedRows.end(); i++) {
            deletionOrder.append(i->row());
        }
        qSort(deletionOrder.begin(), deletionOrder.end());

        for (int i = 0, decrement = 0; i < deletionOrder.length(); i++, decrement++) {
            targetList->deleteRow(deletionOrder[i] - decrement);
        }
        ui->targetListTable->selectionModel()->clearSelection(); // Deselects all rows
    }
}

void TargListMainWindow::on_edit_clicked()
{
    QItemSelectionModel *select = ui->targetListTable->selectionModel();
    QModelIndexList selectedRows = select->selectedRows();

    if (select->hasSelection() && selectedRows.length() == 1) { // only 1 item can be selected
        QList<QModelIndex>::iterator i = selectedRows.begin();
        int selectedRow = i->row(); // gets the selected row number

        // Creates edit window
        targetEditor = new TargetMaker(this);
        targetEditor->setModal(true);
        targetEditor->setWindowTitle("Edit Target");

        // Sets default values
        targetEditor->defaultFileInput = targetList->rows->at(selectedRow)->imageFilePath;
        targetEditor->defaultNameInput = targetList->rows->at(selectedRow)->name->text();
        targetEditor->defaultCoordInput = targetList->rows->at(selectedRow)->coord->text();
        targetEditor->defaultDescInput = targetList->rows->at(selectedRow)->desc->text();
        targetEditor->setDefaultInputs();

        // Opens edit window
        targetEditor->exec();

        if (targetEditor->accepted) {
            targetList->editRow(selectedRow, targetEditor->getImageFilePath(), targetEditor->getName(), targetEditor->getCoord(), targetEditor->getDesc());
        }
    }
}

void TargListMainWindow::on_upButton_clicked()
{
    QItemSelectionModel *select = ui->targetListTable->selectionModel();
    QModelIndexList selectedRows = select->selectedRows();
    QList<int> moveOrder;

    if (select->hasSelection()) {
        // Makes sure everything is moved in the correct order
        for (QList<QModelIndex>::iterator i = selectedRows.begin(); i != selectedRows.end(); i++) {
            moveOrder.append(i->row());
        }
        qSort(moveOrder.begin(), moveOrder.end());

        ui->targetListTable->selectionModel()->clearSelection(); // Deselects all rows
        QItemSelection selectedItems = ui->targetListTable->selectionModel()->selection();
        if (moveOrder[0] != 0) {
            for (int i = 0; i < moveOrder.length(); i++) {
                ui->targetListTable->selectRow(moveOrder[i]-1);
                selectedItems.merge(ui->targetListTable->selectionModel()->selection(), QItemSelectionModel::Select);

                targetList->moveUp(moveOrder[i]);
            }
            ui->targetListTable->selectionModel()->select(selectedItems, QItemSelectionModel::Select); // Reselects new rows
        }
    }
}

void TargListMainWindow::on_downButton_clicked()
{
    QItemSelectionModel *select = ui->targetListTable->selectionModel();
    QModelIndexList selectedRows = select->selectedRows();
    QList<int> moveOrder;

    if (select->hasSelection()) {
        // Makes sure everything is moved in the correct order
        for (QList<QModelIndex>::iterator i = selectedRows.begin(); i != selectedRows.end(); i++) {
            moveOrder.append(i->row());
        }
        qSort(moveOrder.begin(), moveOrder.end(), qGreater<int>());

        ui->targetListTable->selectionModel()->clearSelection(); // Deselects all rows
        QItemSelection selectedItems = ui->targetListTable->selectionModel()->selection();
        if (moveOrder[0] != targetList->rows->length()-1) {
            for (int i = 0; i < moveOrder.length(); i++) {
                ui->targetListTable->selectRow(moveOrder[i]+1);
                selectedItems.merge(ui->targetListTable->selectionModel()->selection(), QItemSelectionModel::Select);

                targetList->moveDown(moveOrder[i]);
            }
            ui->targetListTable->selectionModel()->select(selectedItems, QItemSelectionModel::Select); // Reselects new rows
        }
    }
}

void TargListMainWindow::sort(int col)
{
    if (col == 1) {
        targetList->sortName(0, targetList->rows->length()-1);
        targetList->refreshTable();
    }
}
