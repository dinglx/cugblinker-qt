#ifndef DELETEBUTTON_H
#define DELETEBUTTON_H

#include <QPushButton>

class DeleteButton : public QPushButton
{
Q_OBJECT
public:
    explicit DeleteButton(QWidget *parent = 0);
    QSize sizeHint() const;

signals:

public slots:

};

#endif // DELETEBUTTON_H
