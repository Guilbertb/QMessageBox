#include "fenetre.h"
#include "ui_fenetre.h"

#include <QMessageBox>

fenetre::fenetre(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::fenetre)
{
    ui->setupUi(this);
}

fenetre::~fenetre()
{
    delete ui;
}

void fenetre::on_pushButton_clicked()
{
    QMessageBox::information(this,"message","informations");
}
