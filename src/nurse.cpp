#include "nurse.h"

Nurse::Nurse()
{
    setCpf("");
    setName("");
    setBirthDate("");
    setCoren(-1);

}

Nurse::Nurse(string cpf, string name, string birthDate, int coren)
{
    setCpf(cpf);
    setName(name);
    setBirthDate(birthDate);
    setCoren(coren);
}

Nurse::~Nurse()
{

}

void Nurse::createNurse(string cpf, string name, string birthDate, int coren)
{
    Nurse* nurse = new Nurse(cpf, name, birthDate, coren);
    nurses.push_back(nurse);
}

bool Nurse::removeNurse(string cpf)
{

    for(auto i: nurses){

        if(i->getCpf() == cpf){
            nurses.remove(i);
            return true;
        }
    }
    return false;
}

bool Nurse::updateNurse(Nurse *n, string cpf, string name, string birthDate, int coren)
{
    for(auto i: nurses){
        if(i == n){
            i->setCpf(cpf);
            i->setName(name);
            i->setBirthDate(birthDate);
            i->setCoren(coren);
            return true;
        }
    }
    return false;
}

Nurse* Nurse::getNurse(string cpf)
{
    for(auto it: nurses){
        if(it->getCpf() == cpf){
            return it;
        }
    }
    return nullptr;
}

void Nurse::listNurses()
{
    cout<<"List Nurses"<<endl;
    for(auto it : nurses){
        cout<<*it<<endl;
    }
}

ostream& operator<<(ostream &out, const Nurse &n){
    out <<n.getName()<<", "<<n.getCpf()<<", "<<n.getBirthDate()<<", "<<n.getCoren()<<endl;
    return out;
}
string Nurse::getCpf() const
{
    return cpf;
}

void Nurse::setCpf(const string &value)
{
    cpf = value;
}

string Nurse::getName() const
{
    return name;
}

void Nurse::setName(const string &value)
{
    name = value;
}

string Nurse::getBirthDate() const
{
    return birthDate;
}

void Nurse::setBirthDate(const string &value)
{
    birthDate = value;
}

int Nurse::getCoren() const
{
    return coren;
}

void Nurse::setCoren(int value)
{
    coren = value;
}
