#ifndef NURSE_H
#define NURSE_H
#include <string>
#include <iostream>
#include <list>
using namespace std;

class Nurse
{
public:
    Nurse();
    Nurse(string cpf, string name, string birthDate, int coren);
    virtual ~Nurse();


    void createNurse(string cpf, string name, string birthDate, int coren);
    bool removeNurse(string cpf);
    bool updateNurse(Nurse *n, string cpf="", string name="", string birthDate="", int coren=-1);
    Nurse* getNurse(string cpf);
    void listNurses();


    string getCpf() const;
    void setCpf(const string &value);
    string getName() const;
    void setName(const string &value);
    string getBirthDate() const;
    void setBirthDate(const string &value);
    int getCoren() const;
    void setCoren(int value);
    Nurse &operator=(Nurse&);

    friend ostream &operator<<(ostream &out, const Nurse &n);
protected:
    string cpf;
    string name;
    string birthDate;
    int coren;
    list<Nurse*> nurses;
};

#endif // NURSE_H
