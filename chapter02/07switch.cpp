#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    int number;
    cout<<"inpit num : ";
    cin>> number;
    switch(number) {
    case 0:
    cout <<"zero\tgg";
    break;
    case 1:
    cout <<"onegg";
    break;
    case 2:
    cout <<"two\n";
    break;
    default:
    cout <<"many\n";
    break; 
    }
return 0;
}