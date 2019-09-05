#include <iostream>
using namespace std;

class book{
 public:
     string title;
     string author;
     int pages;
};


int main()
{
    book book1;
    book1.title = "Book 1";
    book1.author = "Admin";
    book1.pages = 320;

    book  book2;
    book2.title = "Book 2";
    book2.author = "Adminator";
    book2.pages = 3000;

    cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.pages << endl;

    cout << book2.title << endl;
    cout << book2.author << endl;
    cout << book2.pages << endl;





    return 0;
}
