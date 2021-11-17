#ifndef STATSMP_H
#define STATSMP_H


#include <QWidget>
#include <QGridLayout>
#include <QPushButton>
#include "globals.h"

class StatsmpMenu : public QWidget
{
    Q_OBJECT
public:
    explicit StatsmpMenu(QWidget *parent = nullptr);

private:
    QGridLayout *mainLayout;


    QPushButton *MpButton;

signals:

};

#endif // STATSMP_H
