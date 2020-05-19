#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <twpp.hpp>
#include <scandialog.hpp>
#include <twpp/application.hpp>
#include <QDebug>
#include <iostream>
#include <stdio.h>

using namespace std;

//open data source manager
//open data source
//negotiate capabilities
//transfer data
//close data source
//close data source manager

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

    //https://github.com/xricht17/twpp/issues/27 sample code here

    std::vector<Twpp::Source> sources;
    Twpp::Source              defaultSource;
    Twpp::Manager             manager {Twpp::Identity {
            Twpp::Version {1, 0, Twpp::Language::English, Twpp::Country::UnitedKingdom, "v0.9"},
            Twpp::DataGroup::Image,
            "Fake Manufacturer",
            "Fake product family",
            "Fake product name"}};

    manager.load();
    manager.open();
    manager.sources(sources);
    manager.defaultSource(defaultSource);
    if (!sources.empty()) {
        Twpp::Source &         source {sources.front()};
        const Twpp::Identity & identity {source.identity()};

        std::cout << "product: " << identity.productName().string();
           std::cout << " manufacturer: " << identity.manufacturer().string() << std::endl;
        if (Twpp::success(source.open())) {
            Twpp::Capability supported {Twpp::CapType::SupportedCaps};

            if (Twpp::success(source.capability(Twpp::Msg::Get, supported))) {
                for (const Twpp::CapType capType: supported.data<Twpp::CapType::SupportedCaps>()) {
                    std::cout << "cap type: " << static_cast<uint16_t>(capType) << std::endl;

                    // just one case now, but more to come ...
                    switch (capType) {
                    case Twpp::CapType::IBitDepth: {
                        Twpp::Cap<Twpp::CapType::IBitDepth> bitDepth;

                        if (Twpp::success(source.capability(Twpp::Msg::Get, bitDepth))) {
                            std::cout << "current bitDepth: " << bitDepth.currentItem()
                                      << std::endl;
                        }
                        break;
                    }
                    default:
                        break;
                    }
                }
            } else {
                std::cerr << "DataSource does not return capabilities";
            }
        } else {
            std::cerr << "TWAIN DataSource does not open" << std::endl;
        }
    } else {
        std::cerr << "No TWAIN data sources" << std::endl;
    }



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
