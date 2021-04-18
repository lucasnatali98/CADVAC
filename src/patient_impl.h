#ifndef PATIENT_IMPL_H
#define PATIENT_IMPL_H
using namespace std;
#include <string>
#include <list>
#include <iostream>
#include "patient.h"
class Patient_Impl : public Patient
{
public:
    Patient_Impl();
    virtual ~Patient_Impl();
    Patient_Impl(string cpf, string name, string birthDate, string susNumber, int vaccine = 0);

    void createPatient(string cpf, string name, string birthDate, string susNumber, int vaccine=0);
    bool removePatient(string cpf);
    Patient* getPatient(string cpf);
    bool updatePatient(Patient* p, string cpf="", string name="", string birthDate="",
                       string susNumber="");

    void listPatients();
    bool updateVaccinesDosesTaken(Patient *p, int value);

    static Patient *generatePatient();

    friend ostream &operator<<(ostream &out, const Patient &p);

    string getCpf() const;


    string getName() const;


    int getVaccineDosesTaken() const;
    void setVaccineDosesTaken(int value);

    string getSusNumber() const;


    string getBirthDate() const;

    Patient_Impl &operator=(Patient_Impl&);

protected:
    string cpf;
    string name;
    int vaccineDosesTaken;
    string susNumber;
    string birthDate;
    static list<Patient*> patients;

    void setCpf(const string &value);
    void setName(const string &value);
    void setSusNumber(const string &value);
    void setBirthDate(const string &value);
};

#endif // PATIENT_H
