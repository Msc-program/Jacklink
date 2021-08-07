#include <QtNetwork>
#include "JackLinkServer.h"
#include "ui_JackLinkServer.h"

JackLinkServer::JackLinkServer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::JackLinkServer)
{
    ui->setupUi(this);

    foreach(const QHostAddress& hostAddress, QNetworkInterface::allAddresses()){
        if(hostAddress != QHostAddress::LocalHost
                && hostAddress.protocol() == QAbstractSocket::IPv4Protocol)
        ui->ipSelector->addItem("ipv4 for local connection:" + hostAddress.toString());
    }
    ui->ipSelector->addItem("ipv4 for remote connection");
}

JackLinkServer::~JackLinkServer()
{
    delete ui;
}

void JackLinkServer::on_pushButton_clicked()
{
    JackLink *father = new JackLink();
    this->close();
    father->show();
}
