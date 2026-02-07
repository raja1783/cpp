#include<iostream>
using namespace std;
class Base {
    int x;
    public:
    void fun() {
        cout<<"Base fun"<<endl;
    }
    Base() {
        cout<<"Base Constructor"<<endl;
    }
};
class Parent1: virtual public Base {
    public:
    Parent1() {
        cout<<"Derived1 Constructor"<<endl;
    }
};
class Parent2: virtual public Base {
    public:
    Parent2() {
        cout<<"Derived2 Constructor"<<endl;
    }
};
class Child: public Parent1, public Parent2{
    public:
    Child() {
        cout<<"Child Constructor"<<endl;
    }
};

int main() {
    Child c;
    c.fun();
    return 0;
}
/*
virtual public Base ensures that only one Base object is shared.
 Child now has a single copy of Base.
 The call "obj.fun()" is resolved unambiguously.
*/