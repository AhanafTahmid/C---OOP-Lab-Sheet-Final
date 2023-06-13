#include<iostream>
using namespace std;
class Rectangle{
    public:
    int length,breadth;
    Rectangle(int l, int b){
        length = l;
        breadth = b;
    }
    void area(){
        cout<<length*breadth<<endl;
    }
    void perimeter(){
        cout<<length+breadth<<endl;
    }
};
class Square:public Rectangle{
    public:
    Square(int s):Rectangle(s,s){}
};

int main(){
    Rectangle ob(3,4);
    ob.area();
    ob.perimeter();

    Square ob2(9);
    ob2.area();
    ob2.perimeter();

    return 0;
}