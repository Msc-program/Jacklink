#ifndef JACKLINKSERVER_H
#define JACKLINKSERVER_H

#include <QWidget>

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
};

#endif // JACKLINKSERVER_H
