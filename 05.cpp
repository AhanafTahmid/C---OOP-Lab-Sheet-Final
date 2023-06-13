#include<iostream>
using namespace std;
class Shape{
    public:
    virtual void print(){
        cout<<"This is a shape"<<endl;
    }
};
class Rectangle: public Shape{
    public:
    void print(){
        cout<<"This is a rectangular shape"<<endl;
    }
};
class Circle:public Shape{
    public:
    void print(){
        cout<<"This is a circular shape"<<endl;
    }
};
class Square:public Rectangle{
    public:
    void print(){
        cout<<"Square is a rectangle"<<endl;
    }
};

int main(){
    Square ob1;
    ob1.Shape::print();
    ob1.Rectangle::print();

    //Shape *p;
    //p = &ob1;
    //p->print();

    return 0;
}