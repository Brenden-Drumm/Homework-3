#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
using namespace std;

class Student:public Person
{
    public:
        Student();
        Student(std::string first, std::string last, int year, int day, int month, int sid);
        void setID(int sid);
        string getID();

    protected:

    private:
        int sid;
};

#endif // STUDENT_H
