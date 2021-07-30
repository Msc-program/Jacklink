#ifndef JACKLINK_H
#define JACKLINK_H


#include <QWidget>
#include <QTimer>

QT_BEGIN_NAMESPACE
class QLabel;
class QPushButton;

class JackLink : public QWidget
{
    Q_OBJECT

public:
    explicit JackLink(QWidget *parent = nullptr);

private slots:
    void startclient();
    void startserver();

private:
    QLabel *statusLabel = nullptr;
    QPushButton *clientButton = nullptr;
    QPushButton *serverButton = nullptr;

};

#endif  // JACKLINK_H
