//friend function

#include<iostream>
using namespace std;

class Base {
	private:
		int private_x;
	protected:
		int protected_x;
	public:
		Base() {}
		Base(int x): private_x{x} {};
		Base(int x, int y): private_x{x}, protected_x{y} {};
	friend void modify(Base& obj);
	void display() {
	    cout<<"private x "<<this->private_x<<" protected x"<< this->protected_x<<endl;
	}
};
void modify(Base& obj) {
	obj.private_x = obj.private_x *2;
	obj.protected_x = obj.protected_x *2;
}

int main() {
	Base b(10,20);
	b.display();
	modify(b);
	b.display();

    return 0;
}