#include "drivebutton.h"

DriveButton::DriveButton(QString aButtName, QWidget *parrent ) : QWidget(parrent)
{
    iButton = new QToolButton(this);
    iButton->setText(aButtName);
    iButton->setMaximumSize(61,61);
    iButton->setMinimumSize(61,61);
    iButton->setSizePolicy(QSizePolicy::Maximum,QSizePolicy::Maximum);
    connect(iButton, SIGNAL(clicked()), this, SLOT(prepareClickSignal()));
}

void DriveButton::prepareClickSignal()
{
    qDebug() << "prepareClickSignal()";
    emit Clicked(iButton->text());
}
