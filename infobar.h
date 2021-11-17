#ifndef INFOBAR_H
#define INFOBAR_H

#include <QWidget>
#include <QHBoxLayout>
#include <QLabel>
#include <QTime>
#include <QTimer>

class InfoBar : public QWidget
{
    Q_OBJECT
public:
    explicit InfoBar(QWidget *parent = nullptr);

private:
    QHBoxLayout *mainLayout;

    QLabel *exteriorTempLabel;
    QLabel *timeLabel;

private slots:
    void showTime();
};

#endif // INFOBAR_H
