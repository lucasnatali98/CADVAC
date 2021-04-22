//#define ERRLOGIN
#include "connectdb.h"
#include "patient.h"
#include "posts.h"
#include "user.h"

#include "loginwindow.h"
#include "createnursewindow.h"
#include "ui_createnursewindow.h"

#include <QtTest/QtTest>
#include <QtCore>
#include <QTimer>
#include <iostream>
#include <QPushButton>
#include <QMessageBox>
#include <QDebug>
#include <QCoreApplication>
#include <QObject>
#include <QString>
#include <QApplication>
#include <QFileInfo>
#include <QDir>
#include <QtGui>
using namespace std;

// add necessary includes here

class testeGUI : public QObject
{
    Q_OBJECT

public:
    testeGUI();
    ~testeGUI();
private:

    LoginWindow loginWin;
    CreateNurseWindow *nurseWin;
    User *currentUser = User::createUser();

    ConnectDb dataBase;

private slots:
    void login_data();
    void login();

    void createNurse_data();
    void createNurse();
};

testeGUI::testeGUI(){
    currentUser->setName("teste");
    nurseWin = new CreateNurseWindow(NULL, currentUser);
}

testeGUI::~testeGUI(){
    delete currentUser;
}

void testeGUI::login_data()
{
    QTest::addColumn<QString>("cpf");
    QTest::addColumn<QString>("password");
    QTest::addColumn<QPushButton*>("buttonLogin");
    #ifndef ERRLOGIN
    QTest::newRow("login") << QString("admin") << QString("admin") << loginWin.ui->pushButton;
    #endif
    #ifdef ERRLOGIN
    QTest::newRow("login") << QString("2") << QString("admin") << loginWin.ui->pushButton;
    #endif
}

void testeGUI::login()
{
        QFETCH(QString, cpf);
        QFETCH(QString, password);
        QFETCH(QPushButton*, buttonLogin);

        loginWin.ui->cpf->setText("");
        loginWin.ui->password->setText("");

        loginWin.show();

        QTest::keyClicks(loginWin.ui->cpf, cpf);
        QTest::keyClicks(loginWin.ui->password, password);
        QTest::mouseClick(buttonLogin, Qt::LeftButton);

}

void testeGUI::createNurse_data(){
#ifndef ERRLOGIN
    QTest::addColumn<QString>("cpf");
    QTest::addColumn<QString>("name");
    QTest::addColumn<int>("coren");
    QTest::addColumn<QString>("birth");
    QTest::addColumn<QPushButton*>("buttonRegister");

    QTest::newRow("login") << QString("99999999999") << QString("nurseTest") << 55 << QString("10/10/1999") << nurseWin->ui->pushButton;
#endif
}

void testeGUI::createNurse(){
#ifndef ERRLOGIN
        QFETCH(QString, cpf);
        QFETCH(QString, name);
        QFETCH(int, coren);
        QFETCH(QString, birth);
        QFETCH(QPushButton*, buttonRegister);

        nurseWin->ui->cpf->setText("");
        nurseWin->ui->nome->setText("");
        nurseWin->ui->coren->setText("");
        nurseWin->ui->dateEdit->setDate(QDate::fromString("20000101", "yyyyMMdd"));

        nurseWin->show();

        QTest::keyClicks(nurseWin->ui->cpf, cpf);
        QTest::keyClicks(nurseWin->ui->nome, name);
        QTest::keyClicks(nurseWin->ui->coren, QString::number(coren));
        QTest::keyClicks(nurseWin->ui->dateEdit, birth);
        QTest::mouseClick(buttonRegister, Qt::LeftButton);
#endif
}

QTEST_MAIN(testeGUI)

#include "tst_testegui.moc"
