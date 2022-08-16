#include <iostream>
#include <string>// string 변수 선언을 위해 string include해야함.
using namespace std;

int main(int argc, char const *argv[]){

    int count = 10;// 변수선언
    cout << count << endl;
    cout << count << "개의 사과가 있습니다."<< endl;

    cout <<"--------------------------------" << endl;

    string name = "홍길동";
    cout << name <<endl;
    cout << name << "이 " << count << "개의 사과를 가지고 있습니다." << endl;

    cout <<"--------------------------------" << endl;

    cout << 10;// 줄바꿈생략
    cout << "개의 사과가 있습니다.";

    cout << endl;// 줄바꿈이 됨.

    cout << 10 << "개의 사과가 있습니다. "<< endl; 
    // 자료형이 달라지면 << 를 붙혀 구분을 해줘야 한다.

    // 줄바꿈이 문자열 뒤에만 왔다.

    cout <<"--------------------------------" << endl;

    bool b; //boolean 타입 변수 선언

    b = false; // 0은 0 , false는 0 

    cout << b << endl;

    bool b2 = "0";

    cout << b2 << endl;//ture는 일반적으로 1로 표현된다.

    
    return 0;
}



