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
    Square o[10];
    for(int i=0;i<10;i++){
        int v1;
        cin>>v1;
        Square o1(v1);
        o[i] = o1;
        o[i].area();
    }

    return 0;
}