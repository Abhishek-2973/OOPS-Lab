#include <iostream>
using namespace std;
template <class T>
class Test{
    private:
    T answer;
   
    public:
    Test(T n) : answer(n)
    {
        cout<<"Inside constructor"<<endl;
    }
    T getNumber(){
        return answer;
        
    }

};
int main() {
Test<int>numberInt(80);
Test<double>numberDouble(22.22);
cout<<"Integer Number is: "<<numberInt.getNumber()<<endl;
cout << "Double Number is: " << numberDouble.getNumber() << endl;
    return 0;
}
