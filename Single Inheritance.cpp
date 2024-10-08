// Write a c++ program for single inheritance
#include <iostream>
using namespace std;
class person{
    public:
    char name[30];
    int age;
};
class student:private person{
    public:
    void display(){
        cout<<"Student Name: "<<name<<endl;
        cout<<"Student Age: "<<age<<endl;
    }
    void setter(){
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Age: ";
        cin>>age;
    }
};
int main(){
    student st;
    st.setter();
    st.display();
    return 0;
}
