#ifndef PATIENT_H
#define PATIENT_H
using namespace std;
#include <string>
#include <list>
#include <iostream>
class Patient
{
public:
    Patient();
    virtual ~Patient();
    Patient(string cpf, string name, string birthDate, string susNumber, int vaccine = 0);

    void createPatient(string cpf, string name, string birthDate, string susNumber, int vaccine=0);
    bool removePatient(string cpf);
    Patient* getPatient(string cpf);
    bool updatePatient(Patient* p, string cpf="", string name="", string birthDate="",
                       string susNumber="", int vaccine = -1);

    void listPatients();

    friend ostream &operator<<(ostream &out, const Patient &p);

    string getCpf() const;
    void setCpf(const string &value);

    string getName() const;
    void setName(const string &value);

    int getVaccineDosesTaken() const;
    void setVaccineDosesTaken(int value);

    string getSusNumber() const;
    void setSusNumber(const string &value);

    string getBirthDate() const;
    void setBirthDate(const string &value);
    Patient &operator=(Patient&);

protected:
    string cpf;
    string name;
    int vaccineDosesTaken;
    string susNumber;
    string birthDate;
    list<Patient*> patients;
};

#endif // PATIENT_H
