// Write a c++ program for multiple inheritance
#include <iostream>
using namespace std;
class sports{
    public:
    char spname[30];
    int medal;
};
class person{
    public:
    char name[30];
    int age;
};
class student:private person,sports{
    public:
    void display(){
        cout<<"Student Name: "<<name<<endl;
        cout<<"Student Age: "<<age<<endl;
        cout<<"Sport Name: "<<spname<<endl;
        cout<<"Sport Medals: "<<medal<<endl;
    }
    void setter(){
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Age: ";
        cin>>age;
        cout<<"Sport Name: ";
        cin>>spname;
        cout<<"Sport medal: ";
        cin>>medal;
    }
};
int main(){
    student st;
    st.setter();
    st.display();
    return 0;
}
