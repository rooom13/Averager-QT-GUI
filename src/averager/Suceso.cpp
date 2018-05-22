#include "Suceso.h"


#include <QDebug>


//CONSTRUCTORS & DESTRUCTORS


Suceso::Suceso(QString date, QString desc)
{

    QDate aDate;
    if( date.isEmpty() ){
        aDate = QDate::currentDate();
       _date = new QDate( aDate.year(), aDate.month(), aDate.day() );
    } else {
        aDate = QDate::fromString( date, "d/M/yyyy" );
        _date = new QDate( aDate.year(), aDate.month(), aDate.day() );
    }
     _desc = desc;

}

Suceso::~Suceso()
{
    if (_date->isValid())
    delete _date;
}
//END OFCONSTRUCTORS & DESTRUCTORS


QDate * Suceso::getDate()
{
    return _date;
}

QString  Suceso::toString()
{
    return "\nFecha: " + _date->toString("dd/M/yyyy")+ "\nDescripcion: " + _desc ;
}

int Suceso::operator -(Suceso & other)
{
    int d = _date->toJulianDay() - other.getDate()->toJulianDay();
    if (d >= 0) return d;
    else return -1 *d;

}

