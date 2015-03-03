/********************************************************************************
** Form generated from reading UI file 'itemwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMWIDGET_H
#define UI_ITEMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_itemWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *imageLabel;
    QLabel *label;

    void setupUi(QWidget *itemWidget)
    {
        if (itemWidget->objectName().isEmpty())
            itemWidget->setObjectName(QStringLiteral("itemWidget"));
        itemWidget->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(itemWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        imageLabel = new QLabel(itemWidget);
        imageLabel->setObjectName(QStringLiteral("imageLabel"));

        verticalLayout->addWidget(imageLabel);

        label = new QLabel(itemWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMaximumSize(QSize(16777215, 30));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(itemWidget);

        QMetaObject::connectSlotsByName(itemWidget);
    } // setupUi

    void retranslateUi(QWidget *itemWidget)
    {
        itemWidget->setWindowTitle(QApplication::translate("itemWidget", "Form", 0));
        imageLabel->setText(QApplication::translate("itemWidget", "TextLabel", 0));
        label->setText(QApplication::translate("itemWidget", "Test Test", 0));
    } // retranslateUi

};

namespace Ui {
    class itemWidget: public Ui_itemWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMWIDGET_H
