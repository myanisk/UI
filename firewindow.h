#ifndef FIREWINDOW_H
#define FIREWINDOW_H


#endif // FIREWINDOW_H
#include <QMainWindow>
#include <QPushButton>
#include <QPropertyAnimation>
#include <QStateMachine>
#include <QState>
#include <QSignalTransition>
#include <QString>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QToolBar>

#include "infobar.h"
#include "mainmenu.h"
#include "settingsmenu.h"
#include "interphonemenu.h"
#include "statsmp.h"

class firewindow : public QMainWindow
{
    Q_OBJECT

public:
    firewindow(QWidget *parent = nullptr);
    ~firewindow();

private:
    QVBoxLayout *mainLayout;

    InfoBar *infoBar;

    FireMenu *fireMenu;

    StatsmpMenu *statsmpMenu;


public slots:



    void showStatsmp();

};
