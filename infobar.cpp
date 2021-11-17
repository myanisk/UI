#include "infobar.h"

InfoBar::InfoBar(QWidget *parent) : QWidget(parent)
{
    setGeometry(0, 0, parent->width(), parent->height()/2);

    mainLayout = new QHBoxLayout(this);
    setLayout(mainLayout);

    exteriorTempLabel = new QLabel("14°C");
    exteriorTempLabel->setStyleSheet("color: #ff0800; font-size:30pt;");
//    exteriorTempLabel->setFont(QFont("Noto Sans Mono"));
    mainLayout->addWidget(exteriorTempLabel);
    mainLayout->setAlignment(exteriorTempLabel, Qt::AlignTop);

    mainLayout->addStretch();

    timeLabel = new QLabel();
    timeLabel->setStyleSheet("color: white");
    timeLabel->setStyleSheet("color: #606062; font-size:30pt;");
//    timeLabel->setFont(QFont("Noto Sans Mono"));
    mainLayout->addWidget(timeLabel);
    mainLayout->setAlignment(timeLabel, Qt::AlignTop);
    mainLayout->setContentsMargins(100, 50, 100, 0);

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(showTime()));
    timer->start(10*1000);

    this->showTime();
}

void InfoBar::showTime()
{
    QTime currentTime = QTime::currentTime();

    QString labelTime = currentTime.toString(QString("hh:mm"));

    this->timeLabel->setText(labelTime);
}
