#include "JackLinClient.h"
#include "ui_JackLinClient.h"
#include "JackTripThread.h"
#include "JackTripThread.h"
#include "NetKS.h"

JackLinkClient::JackLinkClient(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::JackLinkClient)
{
    ui->setupUi(this);
}

JackLinkClient::~JackLinkClient()
{
    delete ui;
}

void JackLinkClient::on_pushButton_2_clicked()
{
    JackLink *jacklink = new JackLink();
    this->close();
    jacklink->show();
}

void JackLinkClient::on_pushButton_clicked()
{
    QString seripadd = ui->lineEdit_2->text();
    int p = ui->lineEdit->text().toInt();
    JackTrip jacktrip(JackTrip::CLIENT);
    jacktrip.setAllPorts(p);
    jacktrip.setPeerAddress(seripadd);
    NetKS netks;
    jacktrip.appendProcessPluginFromNetwork(&netks);

}
