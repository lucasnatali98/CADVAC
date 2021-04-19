#include "updateavailablevaccineswindow.h"
#include "ui_updateavailablevaccineswindow.h"

UpdateAvailableVaccinesWindow::UpdateAvailableVaccinesWindow(QWidget *parent, Posts *searchPost) : QMainWindow(parent), ui(new Ui::UpdateAvailableVaccinesWindow)
{
    ui->setupUi(this);
    post = searchPost;
    parentWindown = parent;

//    parent->setVisible(true);

    ui->vaccines->setText(QString::number(post->getVaccineCount()));
}

UpdateAvailableVaccinesWindow::~UpdateAvailableVaccinesWindow()
{
    delete ui;
}

void UpdateAvailableVaccinesWindow::on_updateVaccinesButton_clicked()
{
    if(!dataBase.openDb()){
        QMessageBox::warning(this, "ERROR", "Conexão com a base de dados falhou");

    } else{

        QString vaccines = ui->vaccines->text();

        QSqlQuery query;
        if(query.prepare("UPDATE HelthPosts SET amountVaccine='"+QString::number(vaccines.toInt())+"'"
                         " WHERE name='"+QString::fromStdString(post->getPostName())+"'")){
           if(query.exec()){
               QMessageBox::information(this, "SUCCESS", "Vacinas atualizadas com sucesso");
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

void UpdateAvailableVaccinesWindow::clearForm()
{
    ui->vaccines->clear();
}
