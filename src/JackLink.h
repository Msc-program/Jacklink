#ifndef JACKLINK_H
#define JACKLINK_H

#include <QWidget>

QT_BEGIN_NAMESPACE
class QLabel;
class QPushButton;
//class QUdpSocket;
QT_END_NAMESPACE

class JackLink: public QWidget
{
    Q_OBJECT

public:
    explicit JackLink(QWidget *parent = nullptr);

private slots:
    void serverSlot();
    void clientSlot();

private:
    QLabel *startlabel = nullptr;
    QPushButton *serverButton = nullptr;
    QPushButton *clientButton = nullptr;
    //QUdpSocket *udpSocket = nullptr;
    //QTimer timer;
    //int messageNo = 1;
};

#endif // JACKLINK_H
