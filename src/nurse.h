#ifndef NURSE_H
#define NURSE_H
#include <string>
using namespace std;

class Nurse
{
public:

    virtual void createNurse(string cpf, string name, string birthDate, int coren)=0;
    virtual bool removeNurse(string cpf)=0;
    virtual bool updateNurse(Nurse *n, string cpf="", string name="",
                             string birthDate="", int coren=-1)=0;
    virtual Nurse* getNurse(string cpf)=0;
    virtual void listNurses()=0;
    virtual ~Nurse(){}
    static Nurse *generateNurse();

    virtual string getCpf() const=0;

    virtual string getName() const= 0;

    virtual string getBirthDate() const=0;

    virtual int getCoren() const=0;

    virtual void setCpf(const string &value)=0;
    virtual void setName(const string &value)=0;
    virtual void setBirthDate(const string &value)=0;
    virtual void setCoren(int value)=0;

};


#endif // NURSE_H
