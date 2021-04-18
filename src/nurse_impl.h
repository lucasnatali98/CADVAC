#ifndef NURSE_IMPL_H
#define NURSE_IMPL_H
#include <string>
#include "nurse.h"
#include <iostream>
#include <list>
using namespace std;

class Nurse_Impl : public Nurse
{
public:
    Nurse_Impl();
    Nurse_Impl(string cpf, string name, string birthDate, int coren);
    virtual ~Nurse_Impl();


    void createNurse(string cpf, string name, string birthDate, int coren);
    bool removeNurse(string cpf);
    bool updateNurse(Nurse *n, string cpf="", string name="", string birthDate="", int coren=-1);
    Nurse* getNurse(string cpf);
    void listNurses();


    string getCpf() const;
    string getName() const;
    string getBirthDate() const;
    int getCoren() const;

    //factory
    static Nurse *generateNurse();

    Nurse_Impl &operator=(Nurse_Impl&);
    friend ostream &operator<<(ostream &out, const Nurse_Impl &n);
protected:
    string cpf;
    string name;
    string birthDate;
    int coren;
    static list<Nurse*> nurses;

    void setCpf(const string &value);
    void setName(const string &value);
    void setBirthDate(const string &value);
    void setCoren(int value);

};

#endif // NURSE_H
