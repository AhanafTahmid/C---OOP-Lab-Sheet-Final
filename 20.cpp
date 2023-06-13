#include<iostream>
using namespace std;

class Fruit{
    public:
    int nof;//number of fruits
    Fruit(int noff):nof(noff){}
    Fruit operator+(Fruit ob){
        int tot = nof + ob.nof;
        //int tot = nof + ob.nof;
        return Fruit(tot);
    }
};
class Apple:public Fruit{
    public:
    Apple(int ap):Fruit(ap){
        //ap = 5;
        cout<<ap<<endl;
    }
};
class Mangoes:public Fruit{
    public:
    Mangoes(int ma):Fruit(ma){
        cout<<ma<<endl;
    }
};
int main(){
    Apple ap(4);
    Mangoes man(5);
    Fruit t = ap+man;
    cout << "Total Number of Fruits in the Basket: " << t.nof <<endl;

    return 0;
}