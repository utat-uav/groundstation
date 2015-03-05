#ifndef ITEMMAKER_H
#define ITEMMAKER_H

#include <QDialog>
#include <QFileDialog>

namespace Ui {
class ItemMaker;
}

class ItemMaker : public QDialog
{
    Q_OBJECT

public:
    explicit ItemMaker(QWidget *parent = 0);
    bool accepted;
    QString getTitle();
    QString getFilePath();
    ~ItemMaker();

private slots:
    void on_browseButton_clicked();

    void on_buttonBox_accepted();

private:
    Ui::ItemMaker *ui;
};

#endif // ITEMMAKER_H
