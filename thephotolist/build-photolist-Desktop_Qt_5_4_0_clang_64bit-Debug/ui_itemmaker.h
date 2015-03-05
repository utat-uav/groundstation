/********************************************************************************
** Form generated from reading UI file 'itemmaker.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMMAKER_H
#define UI_ITEMMAKER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ItemMaker
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *URLInput;
    QPushButton *browseButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *titleInput;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ItemMaker)
    {
        if (ItemMaker->objectName().isEmpty())
            ItemMaker->setObjectName(QStringLiteral("ItemMaker"));
        ItemMaker->resize(352, 132);
        verticalLayout_2 = new QVBoxLayout(ItemMaker);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(ItemMaker);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        URLInput = new QLineEdit(ItemMaker);
        URLInput->setObjectName(QStringLiteral("URLInput"));

        horizontalLayout_2->addWidget(URLInput);

        browseButton = new QPushButton(ItemMaker);
        browseButton->setObjectName(QStringLiteral("browseButton"));

        horizontalLayout_2->addWidget(browseButton);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(ItemMaker);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        titleInput = new QLineEdit(ItemMaker);
        titleInput->setObjectName(QStringLiteral("titleInput"));

        horizontalLayout_3->addWidget(titleInput);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        buttonBox = new QDialogButtonBox(ItemMaker);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(ItemMaker);
        QObject::connect(buttonBox, SIGNAL(accepted()), ItemMaker, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ItemMaker, SLOT(reject()));

        QMetaObject::connectSlotsByName(ItemMaker);
    } // setupUi

    void retranslateUi(QDialog *ItemMaker)
    {
        ItemMaker->setWindowTitle(QApplication::translate("ItemMaker", "Dialog", 0));
        label->setText(QApplication::translate("ItemMaker", "Picture", 0));
        browseButton->setText(QApplication::translate("ItemMaker", "Browse", 0));
        label_2->setText(QApplication::translate("ItemMaker", "Title", 0));
    } // retranslateUi

};

namespace Ui {
    class ItemMaker: public Ui_ItemMaker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMMAKER_H
