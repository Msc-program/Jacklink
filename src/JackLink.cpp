#include <QtWidgets>
#include <QtNetwork>
#include <QtCore>

#include "JackLink.h"

JackLink::JackLink(QWidget *parent)
    : QWidget(parent)
{
    statusLabel = new QLabel(tr("Choose to be as a client or a server"));
    statusLabel->setWordWrap(true);

    clientButton = new QPushButton(tr("&Client"));
    serverButton = new QPushButton(tr("&Server"));

    connect(clientButton, &QPushButton::clicked, this, &JackLink::startclient);
    connect(serverButton, &QPushButton::clicked, this, &JackLink::startserver);

    auto buttonBox = new QDialogButtonBox;
    buttonBox->addButton(clientButton, QDialogButtonBox::ActionRole);
    buttonBox->addButton(serverButton, QDialogButtonBox::RejectRole);

    auto mainLayout = new QVBoxLayout;
    mainLayout->addWidget(statusLabel);
    mainLayout->addWidget(buttonBox);
    setLayout(mainLayout);

    setWindowTitle(tr("Choose"));
}
void JackLink::startclient()
{

}

void JackLink::startserver()
{

}
