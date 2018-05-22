#include "Calendario.h"

#include "MyException.cpp"
#include <QDebug>

#include <QRegExp>

Calendario::Calendario()
{
    //Pinchazos basicos (Empezar con almenos 2 para calcular algo)


    _sucesos.push_back(new Suceso("12/9/2016", "Default1"));
    _sucesos.push_back(new Suceso("19/9/2016", "Default2"));
    updateavg();


  }

Calendario::~Calendario()
{
    while(!_sucesos.empty()) delete _sucesos.front(), _sucesos.pop_front();
}

bool Calendario::addSuceso(QString date, QString desc)
{


    QRegExp dateRegex = QRegExp("(([0-9][0-9])|([0-9]))[/](([0-9][0-9])|[0-9])[/][0-9][0-9][0-9][0-9]");

   //si hay una mierda
    if( !date.isEmpty() && !dateRegex.exactMatch(date) ){
        qDebug() << "Formato incorrecto";
        return false;

    }

    Suceso * suceso = new Suceso(date,desc);
    if( !suceso->getDate()->isValid() )
    {
        qDebug() << "Fecha invalida";
        delete suceso;
        return false;
    }
   // qDebug() << "ACEPTADA";
    _sucesos.push_back( suceso );
    updateavg();

    return true;



}

QString Calendario::toString()
{
    QString aux;
    for(Sucesos::iterator it= _sucesos.begin(); it != _sucesos.end(); it++ )
        aux += (*it)->toString() + "\n";
    aux += "\tAVERAGE:" + QString::number( getAverage() ) + "\n";

    return aux;
}


int Calendario::daysLeft()
{
    //dias desde el ultimo sucesp
    int sinceLast = QDate::currentDate().toJulianDay() - _sucesos.back()->getDate()->toJulianDay();

    return _average - sinceLast;


}


void Calendario::updateavg()
{

    int a =0, b = 0;
    //Iterator empieza  2o sucesio
    Sucesos::iterator it= _sucesos.begin();
    it++;



    while( it != _sucesos.end() ){
        //SUM b-a
        b += (*it)->getDate()->toJulianDay();
        it--;
        a += (*it)->getDate()->toJulianDay();
        it++;
        it++;
    }
    _average = (b-a)/( _sucesos.size() - 1 );
}

int Calendario::getAverage()
{
    return _average;
}

