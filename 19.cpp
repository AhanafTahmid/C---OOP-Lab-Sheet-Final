#include <iostream>
using namespace std;

class Mammals {
public:
    virtual void print() {
        cout << "I am a mammal" << endl;
    }
};

class MarineAnimals {
public:
    void print() {
        cout << "I am a marine animal" << endl;
    }
};

class BlueWhale : public Mammals, public MarineAnimals {
public:
    void print() {
        cout << "I belong to both the categories: Mammals as well as Marine Animals" << endl;
    }
};

int main() {
    Mammals ob1;
    MarineAnimals ob2;
    BlueWhale ob3;

    ob1.print();
    ob2.print();
    ob3.print();

    ob1.Mammals:: print();
    ob2.MarineAnimals:: print();
    return 0;
}
