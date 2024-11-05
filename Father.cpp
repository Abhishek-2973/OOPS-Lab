#include<iostream>
using namespace std;

class father {
    protected:
        int age;
    public:
        father(int x) {
            age = x;
        }
        virtual void iam() {
            cout << "I am father, my age is " << age << endl;
        }
};

class son : public father {
    public:
        son(int x) : father(x) {}
        void iam() override {
            cout << "I am son, my age is " << age << endl;
        }
};

class daughter : public father {
    public:
        daughter(int x) : father(x) {}
        void iam() override {
            cout << "I am daughter, my age is " << age << endl;
        }
};

int main() {
    father f(50);
    son s(19);
    daughter d(15);

    f.iam();
    s.iam();
    d.iam();

    return 0;
}