#include "updateavailablevaccineswindow.h"
#include "ui_updateavailablevaccineswindow.h"

System *UpdateAvailableVaccinesWindow::getSys() const
{
    return sys;
}

void UpdateAvailableVaccinesWindow::setSys(System *value)
{
    sys = value;
}

UpdateAvailableVaccinesWindow::UpdateAvailableVaccinesWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UpdateAvailableVaccinesWindow)
{
    ui->setupUi(this);
    sys = new System();
}

UpdateAvailableVaccinesWindow::~UpdateAvailableVaccinesWindow()
{
    delete ui;
}

void UpdateAvailableVaccinesWindow::on_updateVaccinesButton_clicked()
{
    Posts *p = sys->post->getPost("posto1");
    cout<<"Posto: "<<*p<<endl;
    int v = ui->vaccines->text().toInt();

    sys->post->updateVaccineNumber(p, v);
    cout<<"Posto: "<<*p<<endl;
    QMessageBox qmsg;
    qmsg.setWindowTitle("Confirmação");
    qmsg.setText("O número de vacinas foi atualizado com sucesso");
    qmsg.exec();
    clearForm();

    this->close();
}

void UpdateAvailableVaccinesWindow::clearForm()
{
    ui->vaccines->clear();
}
