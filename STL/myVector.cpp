#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& input) {
    for(auto val: input) {
        cout<<val<<" ";
    }
}

int getVectorSize(vector<int>& input) {
    return input.size();
}

int getVectorCapacity(vector<int>& input) {
    return input.capacity();
}

void eraseVector(vector<int>& input) {
    input.erase(input.begin(), input.end());
}

int main() {
vector<int> vec;

vec.push_back(10);
vec.push_back(20);
vec.push_back(30);
vec.push_back(40);
vec.push_back(50);

display(vec);
cout<<endl;
cout<<getVectorSize(vec);
cout<<endl;
cout<<getVectorCpacity(vec);
cout<<endl;
eraseVector(vec);
display(vec);


return 0;
}