#include <iostream>
using namespace std;

class Pizza{
    public : 
    int size;
    Pizza(int s) : size(s) {}
};

Pizza makeD(){
    // p.size *=2;
     Pizza p(20);
    return p;
}

int main(){
    Pizza pizza = makeD();
    // makeD(pizza);

    cout << pizza.size<< "inch"<<endl;

    return 0;
}