#include<iostream>
using namespace std;
class Member{
    public:
    string name,address;
    int age,phone_number;
    void printSalary(){
        cout<<"printing salary of the member"<<endl;
    }
};
class Employee:public Member{
    public:
    string specilization,department;
    int salary;
    void print(string name,string address,int age,int phone_number){
        this->name = name;
        this->address = address;
        this->age = age;
        this->phone_number = phone_number;
        
        cout<<name<<endl;
        cout<<address<<endl;
        cout<<age<<endl;
        cout<<phone_number<<endl;
    }
};
class Manager:public Member{
    string specilization,department;
};

int main(){
    Employee ob;
    ob.print("john","paris",22,11111);

    return 0;
}