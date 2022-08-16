#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    
    string str;

    do{
        cout << "input str : ";
        getline(cin , str);//없으면 반복문을 멈출수 없음.

        cout << "user : " << str << endl;

    }while (str != "end");

    return 0;
}