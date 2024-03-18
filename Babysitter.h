#ifndef BABYSITTER_H
#define BABYSITTER_H
#include "Person.h"
using namespace std;

class Babysitter:public Person
{
    public:
        Babysitter();
        Babysitter(std::string first, std::string last, int year, int day, int month, float pay);
        void setPay(int money);
        string getPay();

    protected:

    private:
        float pay;
};

#endif // BABYSITTER_H
