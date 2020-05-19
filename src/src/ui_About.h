/********************************************************************************
** Form generated from reading UI file 'About.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QWidget>
QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QLabel *pLabel_QtGraphic;
    QLabel *pLabel_TWG_Title;
    QLabel *pLabel_TWG_AboutUs;
    QLabel *pLabel_MoreInfo;

    void setupUi(QDialog *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QStringLiteral("About"));
        About->resize(577, 292);
        About->setMinimumSize(QSize(577, 292));
        About->setMaximumSize(QSize(577, 292));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/TWG-LogoSmall.png"), QSize(), QIcon::Normal, QIcon::Off);
        About->setWindowIcon(icon);
        pLabel_QtGraphic = new QLabel(About);
        pLabel_QtGraphic->setObjectName(QStringLiteral("pLabel_QtGraphic"));
        pLabel_QtGraphic->setGeometry(QRect(10, 10, 231, 271));
        pLabel_QtGraphic->setPixmap(QPixmap(QString::fromUtf8(":/images/TWG-Logo.png")));
        pLabel_QtGraphic->setScaledContents(true);
        pLabel_TWG_Title = new QLabel(About);
        pLabel_TWG_Title->setObjectName(QStringLiteral("pLabel_TWG_Title"));
        pLabel_TWG_Title->setGeometry(QRect(250, 10, 321, 51));
        pLabel_TWG_Title->setOpenExternalLinks(true);
        pLabel_TWG_AboutUs = new QLabel(About);
        pLabel_TWG_AboutUs->setObjectName(QStringLiteral("pLabel_TWG_AboutUs"));
        pLabel_TWG_AboutUs->setGeometry(QRect(250, 70, 321, 101));
        pLabel_TWG_AboutUs->setWordWrap(true);
        pLabel_TWG_AboutUs->setOpenExternalLinks(true);
        pLabel_MoreInfo = new QLabel(About);
        pLabel_MoreInfo->setObjectName(QStringLiteral("pLabel_MoreInfo"));
        pLabel_MoreInfo->setGeometry(QRect(250, 210, 321, 71));
        pLabel_MoreInfo->setOpenExternalLinks(true);

        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
        About->setWindowTitle(QApplication::translate("About", "About", Q_NULLPTR));
        pLabel_QtGraphic->setText(QString());
        pLabel_TWG_Title->setText(QApplication::translate("About", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">TWAIN Working Group</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Sample Data Source Implementation</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://www.TWAIN.org\"><span style=\" text-decoration: underline; color:#0000ff;\">http://www.TWAIN.org</span></a></p></body></html>", Q_NULLPTR));
        pLabel_TWG_AboutUs->setText(QApplication::translate("About", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">The </span><span style=\" font-size:8pt; font-weight:600;\">TWAIN Working Group</span><span style=\" font-size:8pt;\"> is a not-for-profit organization which represents the imaging industry. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\""
                        ">TWAIN\342\200\231s purpose is to provide and foster a universal public standard which links applications and image acquisition devices. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">The ongoing mission of this organization is to continue to enhance the standard to accommodate future technologies.</span></p></body></html>", Q_NULLPTR));
        pLabel_MoreInfo->setText(QApplication::translate("About", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">This Source code is BSD Licensed and available here:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://sf.net/projects/twain-samples/\"><span style=\" font-size:8pt; text-decoration: underline; color:#0000ff;\">http://sf.net/projects/twain-samples</span></a></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;"
                        " text-decoration: underline; color:#0000ff;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Questions? Visit the TWAIN Discussion Forum:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://www.twainforum.org/\"><span style=\" font-size:8pt; text-decoration: underline; color:#0000ff;\">http://www.TWAINForum.org</span></a></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
