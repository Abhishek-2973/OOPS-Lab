// Write a c++ program 
#include <iostream>
using namespace std;
class person{
    private:
    char name[30];
    public:
    void read(){
        cout<<"Enter name"<<endl;
        cin>>name;
    }
    void display(){
        cout<<"name: "<<name<<endl;
    }
};
class sport{
    private:
    int m=50;
    public:
    void display(){
        cout<<m;
    }
};
class Student:public person,public sport{
    public:
    void display(){
            person::display();
            sport::display();
        }
    };
int main(){
    Student st;
    st.read();
    st.display();
    return 0;
}
