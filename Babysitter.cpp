#include "Babysitter.h"

//using namespace std;

Babysitter::Babysitter():Person(){}
Babysitter::Babysitter(std::string first, std::string last, int day, int month, int year, float money):Person(first, last, day, month, year){
    pay = money;
}

void setPay(float money)
{
    pay = money;
}

string getPay(){
    return pay;
}
