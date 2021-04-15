#ifndef SYSTEM_H
#define SYSTEM_H
#include <string>
#include <vector>
#include <iostream>
#include "nurse.h"
#include "patient.h"

#include "posts.h"
using namespace std;

class System
{
private:
    string secretaryCpf;
    string password;
public:
    Nurse *nurse;
    Patient *patient;
    Posts *post;
public:

    System();

    bool login(string cpf, string password);
    string getSecretaryCpf() const;
    string getPassword() const;
};

#endif // SYSTEM_H
