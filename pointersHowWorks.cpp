#include <iostream>

using namespace std;

int main()
{

    int age = 24;
    int *pAge = &age;
    double gpa = 2.45;
    double *pGpa = &gpa;
    string name = "james";
    string *pName = &name;

    cout << pAge << endl;
    cout << &gpa << endl;
    cout << &name << endl;
    cout << &age << endl;
    return 0;
}
