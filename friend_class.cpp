//friend class
#include<iostream>
using namespace std;

class Base{
	private:
		int private_x;
	protected:
		int protected_x;
	public:
		Base() {}
		Base(int a, int b) : private_x{a}, protected_x{b} {}
		friend class FriendClass; 
};
class FriendClass {
	public:
	void display(const Base& obj) {
		cout<<"private x :"<<obj.private_x<<" protected x :"<<obj.protected_x<<endl;
	}
    void modify(Base& obj) {
        obj.private_x = obj.private_x*2;
        obj.protected_x = obj.protected_x*2;
    }
};

int main() {
	Base b(10, 20);
	FriendClass fb;
	fb.display(b);
	fb.modify(b);
	fb.display(b);
	return 0;
}