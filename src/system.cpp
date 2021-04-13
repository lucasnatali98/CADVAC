#include "system.h"

System::System()
{
    nurse = new Nurse();
    patient = new Patient();
    post = new Posts();
}

void System::run()
{
    cout<<"Enfermeiros \n";
    nurse->createNurse("222.444.666-82", "Roberto", "02-03-1998", 5223);
    nurse->createNurse("999.222.666-82", "Cleber", "19-02-1998", 972);

    Nurse *n = nurse->getNurse("222.444.666-82");

    cout<<*n<<endl;
    nurse->updateNurse(n, "828.828.828-28", "Vagner", "29-03-1882", 888);
    //nurse->removeNurse("222.444.666-82");
    nurse->listNurses();

    cout<<"------------------------------------------"<<endl;
    cout<<endl;
    cout<<"Pacientes \n";
    patient->createPatient("009.222.111-99", "ZE", "30-04-2000", "40321254325", 1);
    patient->createPatient("900.212.111-29", "Pamela", "20-04-2002", "55555555555", 1);

    Patient *p = patient->getPatient("900.212.111-29");
    cout<<"Paciente buscado: "<<*p<<endl;

    patient->updatePatient(p, "444.222.111-66", "Carol", "02-04-1998", "82828282", 2);
    patient->listPatients();
    patient->removePatient("009.222.111-99");
    patient->listPatients();


    cout<<"------------------------------------------"<<endl;
    cout<<endl;
    post->createPost("posto1", "avenida1", 10);
    post->createPost("posto2", "avenida2", 90);

    cout<<"Os postos criados foram: "<<endl;
    post->listPosts();

    Posts* po = post->getPost("posto1");
    cout<<"O posto buscado é: "<<*po<<endl;

    cout<<"Atualizando posto1"<<endl;
    post->updatePost(po, "posto22", "avenida22", 62);

    cout<<"Remoção do posto2"<<endl;;
    post->removePost("posto2");

    post->listPosts();

    delete post;
    delete patient;
    delete nurse;
}
