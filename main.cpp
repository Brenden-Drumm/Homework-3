#include <iostream>
#include "Person.h"

using namespace std;

int main()
{
    Person p1("Tony", "Stark", 1, 21, 1950);
    cout << p1.getName() << " born on: " << p1.getBirthdate() << endl;
    Student s1("Guy", "Smith", 5, 5, 2025, 80127);

    Babysitter b1("Craig", "Wilph", 2, 3, 2003, 18.57);
    Nanny s1("Alyssa", "Raven", 1, 26, 2001, 20.10, 4);

    return 0;
}
