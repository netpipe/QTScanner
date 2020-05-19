/********************************************************************************
** Form generated from reading UI file 'ProfileName.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILENAME_H
#define UI_PROFILENAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_ProfileName
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEdit;

    void setupUi(QDialog *ProfileName)
    {
        if (ProfileName->objectName().isEmpty())
            ProfileName->setObjectName(QStringLiteral("ProfileName"));
        ProfileName->resize(300, 86);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/TWG-LogoSmall.png"), QSize(), QIcon::Normal, QIcon::Off);
        ProfileName->setWindowIcon(icon);
        buttonBox = new QDialogButtonBox(ProfileName);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(-50, 50, 341, 32));
        buttonBox->setFocusPolicy(Qt::StrongFocus);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lineEdit = new QLineEdit(ProfileName);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 10, 281, 20));
        lineEdit->setFocusPolicy(Qt::StrongFocus);
        QWidget::setTabOrder(lineEdit, buttonBox);

        retranslateUi(ProfileName);
        QObject::connect(buttonBox, SIGNAL(accepted()), ProfileName, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ProfileName, SLOT(reject()));

        QMetaObject::connectSlotsByName(ProfileName);
    } // setupUi

    void retranslateUi(QDialog *ProfileName)
    {
        ProfileName->setWindowTitle(QApplication::translate("ProfileName", "New Profile Name", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ProfileName: public Ui_ProfileName {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILENAME_H
