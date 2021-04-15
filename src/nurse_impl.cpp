#include "nurse_impl.h"

list<Nurse*> Nurse_Impl::nurses;
Nurse_Impl::Nurse_Impl()
{
    setCpf("");
    setName("");
    setBirthDate("");
    setCoren(-1);

}

Nurse_Impl::Nurse_Impl(string cpf, string name, string birthDate, int coren)
{
    setCpf(cpf);
    setName(name);
    setBirthDate(birthDate);
    setCoren(coren);
}

Nurse_Impl::~Nurse_Impl()
{

}

void Nurse_Impl::createNurse(string cpf, string name, string birthDate, int coren)
{
    Nurse* nurse = new Nurse_Impl(cpf, name, birthDate, coren);
    nurses.push_back(nurse);
}

bool Nurse_Impl::removeNurse(string cpf)
{

    for(auto i: nurses){

        if(i->getCpf() == cpf){
            nurses.remove(i);
            return true;
        }
    }
    return false;
}

bool Nurse_Impl::updateNurse(Nurse *n, string cpf, string name, string birthDate, int coren)
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

Nurse* Nurse_Impl::getNurse(string cpf)
{
    for(auto it: nurses){
        if(it->getCpf() == cpf){
            return it;
        }
    }
    return nullptr;
}

void Nurse_Impl::listNurses()
{
    cout<<"List Nurses"<<endl;
    for(auto it : nurses){
        cout<<it->getName()<<", "<<it->getCpf()<<endl;
    }
}

ostream& operator<<(ostream &out, const Nurse_Impl &n){
    out <<n.getName()<<", "<<n.getCpf()<<", "<<n.getBirthDate()<<", "<<n.getCoren()<<endl;
    return out;
}
Nurse_Impl &Nurse_Impl::operator=(Nurse_Impl &copy)
{
    if(&copy == this) return (*this);

    this->name = copy.name;
    this->cpf = copy.cpf;
    this->birthDate = copy.birthDate;
    this->coren = copy.coren;
    this->nurses = copy.nurses;


    return (*this);
}
string Nurse_Impl::getCpf() const
{
    return cpf;
}

void Nurse_Impl::setCpf(const string &value)
{
    cpf = value;
}

string Nurse_Impl::getName() const
{
    return name;
}

void Nurse_Impl::setName(const string &value)
{
    name = value;
}

string Nurse_Impl::getBirthDate() const
{
    return birthDate;
}

void Nurse_Impl::setBirthDate(const string &value)
{
    birthDate = value;
}

int Nurse_Impl::getCoren() const
{
    return coren;
}

Nurse *Nurse::generateNurse(){
    return Nurse_Impl::generateNurse();
}
Nurse *Nurse_Impl::generateNurse()
{
    Nurse *nurse = new Nurse_Impl();
    return nurse;
}

void Nurse_Impl::setCoren(int value)
{
    coren = value;
}
