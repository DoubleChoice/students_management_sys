#ifndef STUWINDOW_H
#define STUWINDOW_H

#include <QWidget>
#include "mainwindow.h"
#include "studenttablemodel.h"
#include "msqlcfg.h"
#include <QSqlQuery>

namespace Ui {
class StuWindow;
}

class StuWindow : public QWidget
{
    Q_OBJECT

public:
    explicit StuWindow(QWidget *parent = nullptr);
    ~StuWindow();

public slots:
    void recUsername(QString s);

private slots:
    void on_pushButton_clicked();

private:
    Ui::StuWindow *ui;
    StudentTableModel* model;
    MsqlCfg* mdb2;
};

#endif // STUWINDOW_H
