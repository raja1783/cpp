#include<iostream>
using namespace std;

class MyCustomException: public exception {
public:
	virtual const char* what() 	{
		return "Custome exception";

	}
   
};

int main() {
	try {
		throw MyCustomException();

	}
	catch(MyCustomException& ex) {
		cout<<ex.what()<<endl;
	}
	return 0;
}