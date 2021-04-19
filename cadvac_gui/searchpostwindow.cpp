#include "searchpostwindow.h"
#include "ui_searchpostwindow.h"

SearchPostWindow::SearchPostWindow(QWidget *parent, User *user) : QMainWindow(parent), ui(new Ui::SearchPostWindow)
{
    ui->setupUi(this);
    currentUser = user;
}

SearchPostWindow::~SearchPostWindow()
{
    delete searchPost;
    delete ui;
}


void SearchPostWindow::on_searchPostButton_clicked()
{
    if(!dataBase.openDb()){
        QMessageBox::warning(this, "ERROR", "Conexão com a base de dados falhou");

    } else{

       QString name = ui->nameLineEdit->text();

       QSqlQuery query;
       if(query.prepare("SELECT * FROM HelthPosts WHERE name='"+name+"'")){
          if(query.exec()){

              query.first();

              QString name = query.value(1).toString();
              QString address = query.value(2).toString();
              int amountVaccine = query.value(3).toInt();

              if(name.toStdString() != ""){

                  searchPost->setPostName(name.toStdString());
                  searchPost->setAddress(address.toStdString());
                  searchPost->setVaccineCount(amountVaccine);

                  this->close();
                  postDetailsWindow = new PostDetailsWindow(this, searchPost);
                  postDetailsWindow->setVisible(true);
                  dataBase.closeDb();

               } else{
                   QMessageBox::warning(this, "ERROR", "Não encontrado");
               }
            }
        }
    }

    dataBase.closeDb();

}

void SearchPostWindow::clearForm()
{
    ui->nameLineEdit->clear();
}

//    Posts* po = sys->post->getPost(ui->nameLineEdit->text().toStdString());
//    if(po != nullptr){
//        postDetailsWindow.setVisible(true);
//        postDetailsWindow.setSys(sys);


//        QString address = QString::fromUtf8(po->getAddress().c_str());
//        QString name = QString::fromUtf8(po->getPostName().c_str());
//        QString vaccines = QString::number(po->getVaccineCount());


//        //cout<<"N: "<<*po<<endl;
//        postDetailsWindow.getAddressLineEdit()->setText(address);
//        postDetailsWindow.getPostNameLineEdit()->setText(name);
//        postDetailsWindow.getVaccinesLineEdit()->setText(vaccines);

//    }
//    else{
//        QMessageBox qmsg;
//        qmsg.setWindowTitle("ERRO");
//        qmsg.setText("Não existe posto registrado com este nome");
//        qmsg.exec();
//    }

//    clearForm();
//    this->close();
