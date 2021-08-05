#include "JackLinClient.h"
#include "ui_JackLinClient.h"

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
