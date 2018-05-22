#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "Suceso.h"
#include "Calendario.h"

#include <QDate>
#include <list>

#include <exception>
#include "MyException.cpp"

#include <QRegExp>
#include <QDebug>

#include "Suceso.h"

#include <QRegExp>

typedef std::list<Suceso*> Sucesos;


//Estructura de datos: una lista de Pinchazos

Calendario pinchazos;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    updateInfos();



}




MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnAdd_clicked()
{

   if( pinchazos.addSuceso( ui->txtDate->text(), ui->textDescription->toPlainText() ) )
    {
       qDebug() << "Suceso aniadido correctamente";
       qDebug() << pinchazos.toString();
   }
   updateInfos();
}

void MainWindow::updateInfos()
{
    ui->lblAverage->setText("Media: " + QString::number( pinchazos.getAverage() ) + " dias" );
    ui->lblRemaining->setText("Faltan " + QString::number( pinchazos.daysLeft() ) + " dias" );
}
