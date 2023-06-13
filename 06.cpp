#include<iostream>
using namespace std;
class Student{
    public:
    Student(){
        cout<<"Unknown"<<endl;
    }
    Student(string s){
        cout<<s<<endl;
    }
};

int main(){
    Student o1;
    Student o2("John Doe");
    return 0;
}