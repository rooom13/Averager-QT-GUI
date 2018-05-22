#ifndef SUCESO_H
#define SUCESO_H

#include <QDateTime>
#include <QString>


#include <QDate>

struct s { int n; double d[]; };
class Suceso
{

private:
    QDate * _date;
    QString _desc;

public:

    ~Suceso();

    Suceso(QString date, QString desc);

    void setDate(int d, int m, int y);
    QDate * getDate();
    QString toString();

    int operator - ( Suceso & other );



};

#endif // SUCESO_H
