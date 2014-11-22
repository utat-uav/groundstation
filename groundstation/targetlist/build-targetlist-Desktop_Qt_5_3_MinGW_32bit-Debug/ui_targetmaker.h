/********************************************************************************
** Form generated from reading UI file 'targetmaker.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TARGETMAKER_H
#define UI_TARGETMAKER_H

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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TargetMaker
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *nameContainer;
    QLabel *nameLabel;
    QLineEdit *textInput;
    QHBoxLayout *descriptionContainer;
    QLabel *descriptionLabel;
    QTextEdit *descriptionInput;
    QHBoxLayout *coordinateContainer;
    QLabel *coordinateLabel;
    QLineEdit *coordinateInput;
    QHBoxLayout *categoryContainer;
    QLabel *categoryLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TargetMaker)
    {
        if (TargetMaker->objectName().isEmpty())
            TargetMaker->setObjectName(QStringLiteral("TargetMaker"));
        TargetMaker->resize(400, 250);
        verticalLayout = new QVBoxLayout(TargetMaker);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        nameContainer = new QHBoxLayout();
        nameContainer->setObjectName(QStringLiteral("nameContainer"));
        nameLabel = new QLabel(TargetMaker);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setMinimumSize(QSize(70, 0));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        nameLabel->setFont(font);

        nameContainer->addWidget(nameLabel);

        textInput = new QLineEdit(TargetMaker);
        textInput->setObjectName(QStringLiteral("textInput"));

        nameContainer->addWidget(textInput);


        verticalLayout->addLayout(nameContainer);

        descriptionContainer = new QHBoxLayout();
        descriptionContainer->setObjectName(QStringLiteral("descriptionContainer"));
        descriptionLabel = new QLabel(TargetMaker);
        descriptionLabel->setObjectName(QStringLiteral("descriptionLabel"));
        descriptionLabel->setMinimumSize(QSize(70, 0));
        descriptionLabel->setFont(font);

        descriptionContainer->addWidget(descriptionLabel);

        descriptionInput = new QTextEdit(TargetMaker);
        descriptionInput->setObjectName(QStringLiteral("descriptionInput"));

        descriptionContainer->addWidget(descriptionInput);


        verticalLayout->addLayout(descriptionContainer);

        coordinateContainer = new QHBoxLayout();
        coordinateContainer->setObjectName(QStringLiteral("coordinateContainer"));
        coordinateLabel = new QLabel(TargetMaker);
        coordinateLabel->setObjectName(QStringLiteral("coordinateLabel"));
        coordinateLabel->setMinimumSize(QSize(70, 0));
        coordinateLabel->setFont(font);

        coordinateContainer->addWidget(coordinateLabel);

        coordinateInput = new QLineEdit(TargetMaker);
        coordinateInput->setObjectName(QStringLiteral("coordinateInput"));

        coordinateContainer->addWidget(coordinateInput);


        verticalLayout->addLayout(coordinateContainer);

        categoryContainer = new QHBoxLayout();
        categoryContainer->setObjectName(QStringLiteral("categoryContainer"));
        categoryLabel = new QLabel(TargetMaker);
        categoryLabel->setObjectName(QStringLiteral("categoryLabel"));
        categoryLabel->setMinimumSize(QSize(70, 0));
        categoryLabel->setFont(font);

        categoryContainer->addWidget(categoryLabel);


        verticalLayout->addLayout(categoryContainer);

        buttonBox = new QDialogButtonBox(TargetMaker);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(TargetMaker);
        QObject::connect(buttonBox, SIGNAL(accepted()), TargetMaker, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TargetMaker, SLOT(reject()));

        QMetaObject::connectSlotsByName(TargetMaker);
    } // setupUi

    void retranslateUi(QDialog *TargetMaker)
    {
        TargetMaker->setWindowTitle(QApplication::translate("TargetMaker", "Dialog", 0));
        nameLabel->setText(QApplication::translate("TargetMaker", "Name", 0));
        descriptionLabel->setText(QApplication::translate("TargetMaker", "Description", 0));
        coordinateLabel->setText(QApplication::translate("TargetMaker", "Coordinates", 0));
        categoryLabel->setText(QApplication::translate("TargetMaker", "Category", 0));
    } // retranslateUi

};

namespace Ui {
    class TargetMaker: public Ui_TargetMaker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TARGETMAKER_H
