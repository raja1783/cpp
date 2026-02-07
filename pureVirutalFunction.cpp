#include<iostream>
using namespace std;

class Shape {
    public:
    virtual void area() = 0;
};
class Circle: public Shape {
    private:
    int r;
    public:
        Circle(int r) {
            this->r = r;
        }
        void area() override {
            cout<<"Area of Circle"<<endl;
        }
};
int main() {
    Shape* s = new Circle(10);
    s->area();
    return 0;
}
