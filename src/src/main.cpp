#include "mainwindow.h"
#include <QT_UI.h>
#include <QApplication>
#include <QSplashScreen>
#include <QThread>
#include <QDebug>
#include "CommonDS.h"
#include "QT_UI.h"
#include "Qt_MainForm.h"
#include "TWAIN_UI.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //just guessing how this looks from void UIThread::run() in QT_UI
    // also i commented out line 450 in twain_ui.cpp  void CTWAIN_UI::TW_GetAllProfiles(lstString& strFileNames)


   QT_UI *m_pUI;
    MainWindow w;
//CTWAIN_UI test();
  MainForm m_pDlg(   m_pUI);
     TW_USERINTERFACE m_Data;

    if(m_Data.ShowUI)
    {
        m_pDlg.show();
        m_pDlg.exec();
    }

    w.show();

    return a.exec();
}
