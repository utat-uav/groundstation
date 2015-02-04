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
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TargetMaker
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *imageLabel;
    QLineEdit *fileInput;
    QToolButton *toolButton;
    QHBoxLayout *nameContainer;
    QLabel *nameLabel;
    QLineEdit *nameInput;
    QHBoxLayout *coordinateContainer;
    QLabel *coordinateLabel;
    QLineEdit *coordinateInput;
    QHBoxLayout *descriptionContainer;
    QLabel *descriptionLabel;
    QTextEdit *descriptionInput;
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
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        imageLabel = new QLabel(TargetMaker);
        imageLabel->setObjectName(QStringLiteral("imageLabel"));
        imageLabel->setMinimumSize(QSize(85, 0));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        imageLabel->setFont(font);

        horizontalLayout->addWidget(imageLabel);

        fileInput = new QLineEdit(TargetMaker);
        fileInput->setObjectName(QStringLiteral("fileInput"));

        horizontalLayout->addWidget(fileInput);

        toolButton = new QToolButton(TargetMaker);
        toolButton->setObjectName(QStringLiteral("toolButton"));

        horizontalLayout->addWidget(toolButton);


        verticalLayout->addLayout(horizontalLayout);

        nameContainer = new QHBoxLayout();
        nameContainer->setObjectName(QStringLiteral("nameContainer"));
        nameLabel = new QLabel(TargetMaker);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setMinimumSize(QSize(85, 0));
        nameLabel->setFont(font);

        nameContainer->addWidget(nameLabel);

        nameInput = new QLineEdit(TargetMaker);
        nameInput->setObjectName(QStringLiteral("nameInput"));

        nameContainer->addWidget(nameInput);


        verticalLayout->addLayout(nameContainer);

        coordinateContainer = new QHBoxLayout();
        coordinateContainer->setObjectName(QStringLiteral("coordinateContainer"));
        coordinateLabel = new QLabel(TargetMaker);
        coordinateLabel->setObjectName(QStringLiteral("coordinateLabel"));
        coordinateLabel->setMinimumSize(QSize(85, 0));
        coordinateLabel->setFont(font);

        coordinateContainer->addWidget(coordinateLabel);

        coordinateInput = new QLineEdit(TargetMaker);
        coordinateInput->setObjectName(QStringLiteral("coordinateInput"));

        coordinateContainer->addWidget(coordinateInput);


        verticalLayout->addLayout(coordinateContainer);

        descriptionContainer = new QHBoxLayout();
        descriptionContainer->setObjectName(QStringLiteral("descriptionContainer"));
        descriptionLabel = new QLabel(TargetMaker);
        descriptionLabel->setObjectName(QStringLiteral("descriptionLabel"));
        descriptionLabel->setMinimumSize(QSize(85, 0));
        descriptionLabel->setFont(font);

        descriptionContainer->addWidget(descriptionLabel);

        descriptionInput = new QTextEdit(TargetMaker);
        descriptionInput->setObjectName(QStringLiteral("descriptionInput"));

        descriptionContainer->addWidget(descriptionInput);


        verticalLayout->addLayout(descriptionContainer);

        categoryContainer = new QHBoxLayout();
        categoryContainer->setObjectName(QStringLiteral("categoryContainer"));
        categoryLabel = new QLabel(TargetMaker);
        categoryLabel->setObjectName(QStringLiteral("categoryLabel"));
        categoryLabel->setMinimumSize(QSize(85, 0));
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
        imageLabel->setText(QApplication::translate("TargetMaker", "Preview Image", 0));
        toolButton->setText(QApplication::translate("TargetMaker", "Browse", 0));
        nameLabel->setText(QApplication::translate("TargetMaker", "Name", 0));
        coordinateLabel->setText(QApplication::translate("TargetMaker", "Coordinates", 0));
        descriptionLabel->setText(QApplication::translate("TargetMaker", "Description", 0));
        categoryLabel->setText(QApplication::translate("TargetMaker", "Category", 0));
    } // retranslateUi

};

namespace Ui {
    class TargetMaker: public Ui_TargetMaker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TARGETMAKER_H
