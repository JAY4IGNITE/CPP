#include<iostream>
using namespace std;
class student {
    private :
    int rollno;
    int marks;
    public :
    string name ;
    string branch ;
    student(string n, string b, int r, int m) {
        name = n;
        branch = b;
        rollno = r;
        marks = m;
    }
    //setter 
    void setrno(int r){
        rollno=r;
    }
    void setmarks(int m){
        marks=m;
    }
    //getter 
    int getrno()
    {
        return rollno;
    }
    int getmar()
    {
        return marks;
    }
    void display() {
        cout << "Name : " << name << endl;
        cout << "Branch : " << branch << endl;
        cout << "Roll No : " << rollno << endl;
        cout << "Marks : " << marks << endl;
    }
};
int main(){
    student s1("JAYA SAI", "CSE", 514, 95);
    s1.display();
    s1.setmarks(98);
    s1.display();
    return 0;
}
