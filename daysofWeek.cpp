#include <iostream>

using namespace std;

string daysofWeek(int dayNum){
string dayName;
    switch(dayNum){
    case 1:
    dayName = "Monday";
    break;
    case 2:
    dayName = "Tuesday";
    break;
    case 3:
    dayName = "Wednesday";
    break;
    case 4:
    dayName = "Thursday";
    break;
    case 5:
    dayName = "Friday";
    break;
    case 6:
    dayName = "Saturday";
    break;
    case 7:
    dayName = "Sunday";
    break;
    default:
        dayName = "No such a day";
    }
return dayName;
}
int main()
{
     int num;
     cout << "enter a number of day : ";
     cin >> num;
     cout << daysofWeek(num);
    return 0;
}
