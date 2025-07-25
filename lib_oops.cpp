#include <iostream>
using namespace std;
class Library
{
private:
    int isbn;
    int copiesavailable;
    ;

public:
    string title;
    string author;
    Library(string t, string a, int bn, int ca)
    {
        title = t;
        author = a;
        isbn = bn;
        copiesavailable = ca;
    }
    // setters
    void bookno(int bn)
    {
        isbn = bn;
    }
    void copies(int ca)
    {
        copiesavailable = ca;
    }
    // getters
    int getisbn()
    {
        return isbn;
    }
    int getcopies()
    {
        return copiesavailable;
    }
    void display()
    {
        cout << "Title : " << title << endl;
        cout << "Author : " << author << endl;
        cout << "ISBN : " << isbn << endl;
        cout << "Copies Available : " << copiesavailable << endl;
    }
};
int main()
{
    Library book1("Nagendra's Life", "Pilla Nagendra", 1432, 1);
    book1.display();
}
