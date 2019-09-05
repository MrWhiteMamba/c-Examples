#include <iostream>
using namespace std;

int power(int baseNum, int powNum){
    int result = 1;
    for(int i=0;i<powNum;i++){
        result = result*baseNum;
    }
    return result;
}
int main()
{
    int x,y;
    cout << "Enter base Num :";
    cin >> x;
    cout << "enter power Num : ";
    cin >> y;
    cout << power(x,y);
    return 0;
}
