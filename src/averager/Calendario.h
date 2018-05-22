#ifndef CALENDARIO_H
#define CALENDARIO_H

#include "Suceso.h"




typedef std::list<Suceso*> Sucesos;

class Calendario
{
private:
    Sucesos _sucesos;
    int _average;
public:
    Calendario();
    ~Calendario();

    bool addSuceso(QString date, QString desc);

    QString toString();

    void updateavg();
    int daysLeft();
    int getAverage();
};

#endif // CALENDARIO_H
