#ifndef JACKLINCLIENT_H
#define JACKLINCLIENT_H

#include <QWidget>

#include "JackLink.h"

namespace Ui {
class JackLinkClient;
}

class JackLinkClient : public QWidget
{
    Q_OBJECT

public:
    explicit JackLinkClient(QWidget *parent = nullptr);
    ~JackLinkClient();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::JackLinkClient *ui;
};

#endif // JACKLINCLIENT_H
