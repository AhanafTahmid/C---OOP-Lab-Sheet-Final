#include<iostream>
using namespace std;
class Parent{
    public:
    void fun(){
        cout<<"From Parent Class"<<endl;
    }
};

class Child:public Parent{
    public:
    void fun2(){
        cout<<"From Child Class"<<endl;
    }
};

int main(){

    Parent ob;
    Child ob2;
    ob.fun();
    ob2.fun2();
    ob2.fun();
    return 0;
}