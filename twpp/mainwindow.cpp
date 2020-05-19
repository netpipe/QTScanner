#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <twpp.hpp>
#include <scandialog.hpp>
#include "twglue.hpp"
#include <twpp/application.hpp>

Manager mgr(
    Identity(
        Version(1, 0, Language::English, Country::UnitedKingdom, "v1.0"),
        DataGroup::Image,
        "Broke & Company",
        "BC Scan",
        "BC Soft Scan"
    )
);

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    mgr.load(); // loads DSM DLL/SO/Framework
    mgr.open(); // opens DSM

//   TwGlue m_glue(on_scan_clicked(),on_cancel_clicked());
//   ScanDialog test(m_glue,this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_scan_clicked()
{

}

void MainWindow::on_cancel_clicked()
{

}
