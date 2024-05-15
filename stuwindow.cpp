#include "stuwindow.h"
#include "ui_stuwindow.h"

StuWindow::StuWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::StuWindow)
{
    ui->setupUi(this);
    model = new StudentTableModel();
    mdb2 = new MsqlCfg("students","db2");
    QSqlQuery qry(mdb2->db);
    qry.prepare("select * from students");
    qry.exec();
    while(qry.next()){
        QString id=qry.value(0).toString(),name=qry.value(1).toString();
        uint age=qry.value(2).toUInt();
        qreal math=qry.value(3).toReal(),gpa = qry.value(4).toReal();
        model->setData(Student(id,name,age,math,gpa));
    }
    ui->tableView->setModel(model);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

StuWindow::~StuWindow()
{
    delete ui;
}

void StuWindow::recUsername(QString s)
{
    ui->usernamelabel->setText(s+",您好！");
}

void StuWindow::on_pushButton_clicked()
{
    MainWindow* parent = new MainWindow();
    this->close();
    parent->show();
}

