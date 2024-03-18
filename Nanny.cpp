#include "Nanny.h"

//using namespace std;

Babysitter::Babysitter():Person(){}
Babysitter::Babysitter(string firstS, string lastS, int dayS, int monthS, int yearS, float money, int clients):Person(firstS, lastS, dayS, monthS, yearS){
    pay = money;
}

void setClients(float people)
{
    clients = people;
}

string getClients(){
    return clients;
}
