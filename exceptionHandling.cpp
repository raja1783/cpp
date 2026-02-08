#include<iostream>
using namespace std;

class Base {
   private:
   int x;
   int y;
   public:
    Base(int a, int b) {
        this->x = a;
        this->y = b;
    }
    void show() {
        cout<<this->x<<" "<<this->y<<endl;
    }
    int result(const Base& obj) {
        try {
            if(this->x < obj.x) {
                throw exception();
            }
            return this->x + obj.x;
        }
        catch(exception& e) {
            cout<<e.what()<<endl;
            return -1;
        }

    }
};
int main() {
  Base b1(14, 12);
  Base b2(12, 14);
  b1.show();
  b2.show();
  cout<<b2.result(b1)<<endl;
}