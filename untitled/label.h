#ifndef LABEL_H
#define LABEL_H

#include <QLabel>

class label : public QLabel
{
    Q_OBJECT
public:
    explicit label(QWidget *parent = 0);
};

#endif // LABEL_H
