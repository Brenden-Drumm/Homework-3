#ifndef NANNY_H
#define NANNY_H
#include "Babysitter.h"

class Nanny:public Babysitter
{
    public:
        Nanny();
        Nanny(std::string first, std::string last, int year, int day, int month, float pay, int clients);
        void setClients(int people);
        string getClients();

    protected:

    private:
        float clients;
};


#endif // NANNY_H
