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
    int l;
    void input(){
        int x;
        cin>>x;
        x = l;
        //l = p;
    }

    Square():Rectangle(l,l){
        //cout<<"helo";
       // cout<<"5"<<l;
    }
};

int main(){
    Square o[10];
    for(int i=0;i<10;i++){
        //int v1;
        //cin>>v1;
        o[i].input();
        o[i].area();
        //o[i].perimeter();
        //cout<<o[i].l;
        

    }
    
    return 0;
}