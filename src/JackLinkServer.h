#ifndef JACKLINKSERVER_H
#define JACKLINKSERVER_H

#include <QWidget>
#include <QHostAddress>

#include "JackLink.h"

namespace Ui {
class JackLinkServer;
}

class JackLinkServer : public QWidget
{
    Q_OBJECT

public:
    explicit JackLinkServer(QWidget *parent = nullptr);
    ~JackLinkServer();

private slots:
    void on_pushButton_clicked();

private:
    Ui::JackLinkServer *ui;
    QList<QHostAddress> availableAddresses;
};

#endif // JACKLINKSERVER_H
