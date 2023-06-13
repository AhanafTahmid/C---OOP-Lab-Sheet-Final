#include<iostream>
using namespace std;
class Programming{
    public:
    Programming(){
        cout<<"I love programming languages"<<endl;
    }
    Programming(string s){
        cout<<"I love "<<s<<endl;
    }
};

int main(){
    Programming o1;
    Programming o2("Python");
    return 0;
}