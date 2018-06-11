#ifndef FENETRE_H
#define FENETRE_H

#include <QMainWindow>

namespace Ui {
class fenetre;
}

class fenetre : public QMainWindow
{
    Q_OBJECT

public:
    explicit fenetre(QWidget *parent = 0);
    ~fenetre();

private slots:
    void on_pushButton_clicked();

private:
    Ui::fenetre *ui;
};

#endif // FENETRE_H
