#include <iostream>

using namespace std;

int main()
{
    int a,b,temp=0;

    cout << "Enter two numbers you want to swap : ";
    cin >> a >> b;

    temp = a;
    a = b;
    b = temp;
    cout << "first number you entered " << a << " become " <<  b << endl;
    cout << "second number you entered " << b << " become " << a << endl;


    return 0;
}
