#include "updatepostwindow.h"
#include "ui_updatepostwindow.h"

UpdatePostWindow::UpdatePostWindow(QWidget *parent, Posts* searchPost) : QMainWindow(parent), ui(new Ui::UpdatePostWindow)
{
    ui->setupUi(this);
    post = searchPost;
    parentWindown = parent;

//    parent->setVisible(true);

    ui->address->setText(QString::fromStdString(post->getAddress()));
    ui->name->setText(QString::fromStdString(post->getPostName()));
    ui->amount->setText(QString::number(post->getVaccineCount()));
}

UpdatePostWindow::~UpdatePostWindow()
{
    delete ui;
}

void UpdatePostWindow::clearForm()
{
    ui->amount->clear();
    ui->address->clear();
    ui->name->clear();
}

void UpdatePostWindow::on_pushButton_clicked()
{
    if(!dataBase.openDb()){
        QMessageBox::warning(this, "ERROR", "Conexão com a base de dados falhou");

    } else{

        QString name = ui->name->text();
        QString address = ui->address->text();
        QString amount = ui->amount->text();

        QSqlQuery query;
        if(query.prepare("UPDATE HelthPosts SET name='"+name+"', address='"+address+"', amountVaccine='"+QString::number(amount.toInt())+"'"
                         " WHERE name='"+QString::fromStdString(post->getPostName())+"'")){
           if(query.exec()){
               QMessageBox::information(this, "SUCCESS", "Posto atualizado com sucesso");
               clearForm();
               dataBase.closeDb();
               this->close();
           } else{
               QMessageBox::warning(this, "ERROR", "Erro ao atualizar");
           }
        } else {
            QMessageBox::warning(this, "ERROR", "Erro");
        }
    }

    dataBase.closeDb();
}
