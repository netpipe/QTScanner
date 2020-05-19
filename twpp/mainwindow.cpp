#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <twpp.hpp>
#include <scandialog.hpp>
#include "twglue.hpp"
#include <twpp/application.hpp>


//open data source manager
//open data source
//negotiate capabilities
//transfer data
//close data source
//close data source manager

//Manager mgr(
//    Identity(
//        Version(1, 0, Language::English, Country::UnitedKingdom, "v1.0"),
//        DataGroup::Image,
//        "Broke & Company",
//        "BC Scan",
//        "BC Soft Scan"
//    )
//);

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //simple test from the readme file
//    mgr.load(); // loads DSM DLL/SO/Framework
//    mgr.open(); // opens DSM
//    // OPTION 1: get all available DSs
//    std::vector<Source> sources;
//    mgr.sources(sources);

//    // OPTION 2: get default DS
//    Source defSrc;
//    mgr.defaultSource(defSrc);

//    // OPTION 3: show DS selection dialog and let the user decide, available only on Windows and Mac OS
//    Source userSrc;
//    mgr.showSourceDialog(userSrc);

//    // OPTION 4: if we know the product name and manufacturer beforehand
//    Source src = mgr.createSource("product name", "manufacturer");

//    src.open(); // not hard, is it?

//    // get supported capabilities
//    Capability supported(CapType::SupportedCaps);
//    src.capability(Msg::Get, supported);

//    for (CapType cap : supported.data<CapType::SupportedCaps>()){
//        // iterate over supported capabilities
//    }

//    // set image transfer mechanism
//    Capability xferMech = Capability::createOneValue<CapType::IXferMech>(XferMech::Native);
//    src.capability(Msg::Set, xferMech);

//    src.enable(UserInterface(true, true, handleToApplicationWindow));
//    src.waitReady();

//    ImageNativeXfer xfer;
//    src.imageNativeXfer(xfer);
//    auto lock = xfer.data(); // also xfer.data<YourDataType>()
//    // lock.data() returns pointer to image data
//    // you can also use `lock->member` to access member variables

//    // e.g. on Windows:
//    auto bmp = xfer.data<BITMAPINFOHEADER>();
//    auto width = bmp->biWidth;
//    auto height = bmp->biHeight;


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
