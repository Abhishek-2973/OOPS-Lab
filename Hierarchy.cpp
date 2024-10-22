#include <iostream>
#include <string>
using namespace std;
 
class Person {
    char name[30];
public:
    void read() {
        cout << "Enter name: ";
        cin >> name;
    }
 
    void display() {
        cout << "Name: " << name << endl;
    }
};
 
class Sport : public Person {
    int m = 5;
public:
    void display() {
        Person::display();
        cout << "Sport marks: " << m << endl;
    }
};
 
class Student : public Person {
public:
    void display() {
        Person::display();
        cout << "Student information displayed." << endl;
    }
};
 
int main() {
    Student st;
    st.read();
    st.display();
    
    Sport sp;
    sp.read();
    sp.display();
    return 0;
}
