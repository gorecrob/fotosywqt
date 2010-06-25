#ifndef DRIVEBUTTON_H
#define DRIVEBUTTON_H

#include <QToolButton>
#include <QDebug>
#include <QVBoxLayout>

class DriveButton : public QWidget
{
    Q_OBJECT
public:
    DriveButton(QString, QWidget *parent = 0);

private:
    QToolButton *iButton;

private slots:
    void prepareClickSignal();
signals:
    void Clicked( QString );

};

#endif // DRIVEBUTTON_H
