#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mdb1 = new MsqlCfg("users","db1");
}

MainWindow::~MainWindow()
{
    mdb1->db.close();
    delete mdb1;
    mdb1 = nullptr;
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    this->close();
}


void MainWindow::on_pushButton_clicked()
{
    QSqlQuery qry(mdb1->db);
    qry.prepare("select * from users where username = ? and password = ?");
    qry.addBindValue(ui->usernamelineEdit->text());
    qry.addBindValue(ui->passwordlineEdit->text());
    qry.exec();
    if(qry.next()){
        QString username = qry.value(0).toString();
        StuWindow* stu = new StuWindow();
        connect(this,&MainWindow::sendUsername,stu,&StuWindow::recUsername);
        emit sendUsername(username);
        this->close();
        stu->show();
    }else{
        QMessageBox::warning(this,"登录失败","您输入的账号或密码错误","确定");
    }


}


