#include <iostream>
using namespace std;

int buyuk(int num1, int num2){
    if(num1>num2)
        cout << num1 << " is bigger"<< endl;
    else if(num2>num1)
      cout << num2 << " is bigger"<< endl;
      else
          cout << num1 << " is equl to " << num2<< endl;
}
int main()
{
    int num1,num2;
    cout << "enter two num" << endl;
    cin >> num1 >> num2;
    cout << buyuk(num1,num2);
return 0;
}
