#include "Babysitter.h"

//using namespace std;

Babysitter::Babysitter():Person(){}
Babysitter::Babysitter(string firstS, string lastS, int dayS, int monthS, int yearS, float money, int clients):Person(firstS, lastS, dayS, monthS, yearS){
    clients = people;
}

void setPay(float money)
{
    pay = money;
}

string getPay(){
    return pay;
}
