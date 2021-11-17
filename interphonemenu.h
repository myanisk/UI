#ifndef INTERPHONEMENU_H
#define INTERPHONEMENU_H


#include <QWidget>
#include <QGridLayout>
#include <QPushButton>

class InterphoneMenu : public QWidget
{
    Q_OBJECT
public:
    explicit InterphoneMenu(QWidget *parent = nullptr);

private:
    QGridLayout *mainLayout;

    QPushButton *quitButton;

signals:

};

#endif // INTERPHONEMENU_H
