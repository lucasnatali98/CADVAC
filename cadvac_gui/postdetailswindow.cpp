#include "postdetailswindow.h"
#include "ui_postdetailswindow.h"

PostDetailsWindow::PostDetailsWindow(QWidget *parent, Posts *searchPost) : QMainWindow(parent), ui(new Ui::PostDetailsWindow)
{
    ui->setupUi(this);
    post = searchPost;
    parentWindown = parent;

    parent->setVisible(true);

    ui->nameLineEdit->setText(QString::fromStdString(post->getPostName()));
    ui->addressLineEdit->setText(QString::fromStdString(post->getAddress()));
    ui->vaccinesLineEdit->setText(QString::number(post->getVaccineCount()));
}

PostDetailsWindow::~PostDetailsWindow()
{
    delete ui;
}

void PostDetailsWindow::on_updatePostButton_clicked()
{
    updatePostWindow = new UpdatePostWindow(this, post);
    updatePostWindow->setVisible(true);
}

void PostDetailsWindow::on_removePostButton_clicked()
{
    if(!dataBase.openDb()){
        QMessageBox::warning(this, "ERROR", "Conexão com a base de dados falhou");

    } else{

        QSqlQuery query;
        if(query.prepare("DELETE FROM HelthPosts WHERE name='"+QString::fromStdString(post->getPostName())+"'")){
           if(query.exec()){
               QMessageBox::information(this, "SUCCESS", "Posto de saúde removido com sucesso");
               clearForm();
               dataBase.closeDb();
               this->close();
           } else{
               QMessageBox::warning(this, "ERROR", "Erro ao deletar");
           }
        } else {
            QMessageBox::warning(this, "ERROR", "Erro");
        }
    }

    dataBase.closeDb();
}

void PostDetailsWindow::on_updateNumberVaccinesButton_clicked()
{
    updateVaccines = new UpdateAvailableVaccinesWindow(this, post);
    updateVaccines->setVisible(true);
}

void PostDetailsWindow::clearForm()
{
    ui->addressLineEdit->clear();
    ui->nameLineEdit->clear();
    ui->vaccinesLineEdit->clear();
}
