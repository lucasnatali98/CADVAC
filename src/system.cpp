#include "system.h"

string System::getSecretaryCpf() const
{
    return secretaryCpf;
}

string System::getPassword() const
{
    return password;
}

System::System()
{
    nurse = Nurse::generateNurse();
    patient = Patient::generatePatient();
    post = Posts::generatePost();
    secretaryCpf = "123.456.789-99";
    password = "123";
}


bool System::login(string cpf, string password)
{
    if(cpf == this->getSecretaryCpf() && password == this->getPassword()){
        return true;
    }
    return false;
}
