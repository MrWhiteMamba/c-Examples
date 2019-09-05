#include <iostream>

using namespace std;

  class book {
      public:
  string title;
  string author;
  int pages;
    book(){
    title =" no title ";      // when you didn't entered title or author
    author = " no author";    // or pages it's showing this words on screen
    pages = 0;
    }
    book(string Title, string Author, int Pages){
            title= Title;
            author = Author;
            pages = Pages;
  }
  };
int main()
{
    book book1("Book 1 ", "Admin ", 500);
    book book2("Book 2 ", "Adminator ", 7500);
    book book3;
    cout << book1.title<< endl;
    cout << book1.pages<< endl;
    cout << book2.title<< endl;
    cout << book2.pages<< endl;
    cout << book3.title<< endl;
    cout << book3.pages<< endl;

    return 0;


}


