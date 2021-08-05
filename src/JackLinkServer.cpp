#include "JackLinkServer.h"
#include "ui_JackLinkServer.h"

JackLinkServer::JackLinkServer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::JackLinkServer)
{
    ui->setupUi(this);
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
