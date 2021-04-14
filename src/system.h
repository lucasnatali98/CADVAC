#ifndef SYSTEM_H
#define SYSTEM_H
#include <string>
#include <vector>
#include "nurse.h"
#include "patient.h"
#include "posts.h"
using namespace std;

class System
{
public:
    Nurse *nurse;
    Patient *patient;
    Posts *post;
public:
    bool login(string cpf, string password);
    System();
    void run();
};

#endif // SYSTEM_H
