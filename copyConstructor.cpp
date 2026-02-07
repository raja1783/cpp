#include<iostream>
using namespace std;

class Base {
   int x;
   public:
   Base() {
       cout<<"Constructor"<<endl;
   }
   Base(const Base& obj) {
       this->x = obj.x;
      cout<<"Copy Constructor"<<endl;
   }
};
int main() {
    Base b1;
    Base b2(b1);
    return 0;
}