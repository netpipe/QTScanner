#include "mainwindow.h"
#include <QT_UI.h>
#include <QApplication>
#include <QSplashScreen>
//#include "src/qstylesheetmanager.h"
#include <QThread>
#include <QDebug>
//https://github.com/ganquan0910/qt5-sqlite-connection-example
#include "CommonDS.h"
#include "QT_UI.h"
#include "Qt_MainForm.h"

class I : public QThread
{
public:
    static void sleep(unsigned long secs) { QThread::sleep(secs); }
};


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

 //   QStyleSheetManager::loadStyleSheet("style4.qss");
//    QFile file("style4.qss");    // Modified by RCU 2016.07.17
//    file.open(QFile::ReadOnly);
//    QString styleSheet = QLatin1String(file.readAll());


  //      QPixmap m("./Resource/qtcoin.png");


    MainWindow w;
//CTWAIN_UI test();
  MainForm *m_pDlg;
     TW_USERINTERFACE m_Data;

    if(m_Data.ShowUI)
    {
//      m_pDlg = new MainForm(p_pDlg);
//      m_pDlg->show();
//      m_pApp->exec();
        m_pDlg->show();
        m_pDlg->exec();
    }

//test.DisplayTWAINGUI (TW_USERINTERFACE &twUI);
//test.show();
  //  QSplashScreen splash(m);
 //   splash.show();

 //   splash.finish(&w);
    //     QThread::sleep(10);
  //  I::sleep(2); // splash is shown for 5 seconds
    w.show();

    return a.exec();
}
