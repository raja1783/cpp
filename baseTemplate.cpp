#include<iostream>
using namespace std;

class Base {
   public:
   Base() {
       cout<<"Base Constructor"<<endl;
   }
};
int main(){
    Base b;
    return 0;
}
