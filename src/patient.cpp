#include "patient.h"

Patient::Patient()
{
    setCpf("");
    setName("");
    setBirthDate("");
    setSusNumber("");
    setVaccineDosesTaken(-1);
}

Patient::~Patient()
{

}

Patient::Patient(string cpf, string name, string birthDate, string susNumber, int vaccine)
{
    setCpf(cpf);
    setName(name);
    setBirthDate(birthDate);
    setSusNumber(susNumber);
    setVaccineDosesTaken(vaccine);
}

void Patient::createPatient(string cpf, string name, string birthDate, string susNumber, int vaccine)
{
    Patient *p = new Patient(cpf, name, birthDate, susNumber, vaccine);
    patients.push_back(p);
}

bool Patient::removePatient(string cpf)
{
    cout<<"Remove patients"<<endl;
    for(auto i: patients){

        if(i->getCpf() == cpf){
            patients.remove(i);
            return true;
        }
    }
    return false;
}

Patient *Patient::getPatient(string cpf)
{
    for(auto it: patients){
        if(it->getCpf() == cpf){
            return it;
        }
    }
    return nullptr;
}

bool Patient::updatePatient(Patient *p, string cpf, string name, string birthDate,
                            string susNumber, int vaccine)
{
    for(auto i: patients){
        if(i == p){
            i->setCpf(cpf);
            i->setName(name);
            i->setBirthDate(birthDate);
            i->setSusNumber(susNumber);
            i->setVaccineDosesTaken(vaccine);
            return true;
        }
    }
    return false;
}

void Patient::listPatients()
{
    cout<<"List patients"<<endl;
    for(auto it : patients){
        cout<<*it<<endl;
    }
}


Patient &Patient::operator=(Patient &copy)
{
    if(&copy == this) return (*this);

    this->name = copy.name;
    this->cpf = copy.cpf;
    this->birthDate = copy.birthDate;
    this->susNumber = copy.susNumber;
    this->vaccineDosesTaken = copy.vaccineDosesTaken;
    this->patients = copy.patients;


    return (*this);
}
ostream &operator<<(ostream &out, const Patient &p)
{
    out<<p.getName()<<", "<<p.getCpf()<<", "<<p.getSusNumber()<<", "<<
         p.getVaccineDosesTaken()<<", "<<p.getBirthDate()<<endl;
    return out;
}

string Patient::getCpf() const
{
    return cpf;
}

void Patient::setCpf(const string &value)
{
    cpf = value;
}

string Patient::getName() const
{
    return name;
}

void Patient::setName(const string &value)
{
    name = value;
}

int Patient::getVaccineDosesTaken() const
{
    return vaccineDosesTaken;
}

void Patient::setVaccineDosesTaken(int value)
{
    vaccineDosesTaken = value;
}

string Patient::getSusNumber() const
{
    return susNumber;
}

void Patient::setSusNumber(const string &value)
{
    susNumber = value;
}

string Patient::getBirthDate() const
{
    return birthDate;
}

void Patient::setBirthDate(const string &value)
{
    birthDate = value;
}
