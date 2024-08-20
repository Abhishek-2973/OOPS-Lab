//write c++ program to find the area of circle 
#include <iostream>
using namespace std;
class Circle{
    private:
    float radius;
    const float PI=3.14;
    static int count;
    public:
    Circle(){    
    }
    Circle(float r){
    radius=r;
}
float circArea(){
      return PI*radius*radius;
}
};
int main() {
    Circle obj1;
    Circle obj2(5.1);
    cout<<"area of circle 1: "<<obj1.circArea()<<" area of circle 2: "<<obj2.circArea()<<endl;
    return 0;
}
