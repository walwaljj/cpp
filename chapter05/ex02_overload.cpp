#include <iostream>

using namespace std;

class Time{

    public : 
        int hour;
        int minute;
    // Time(int h=0, int m=0) {디폴트 인수. 
    //     hour = h;
    //     minute = m;
    //     }
    Time();
    Time(int, int );//프로트 타입에서 함수명은 필요없다.

       void print(){
        cout << hour << ": " << minute << endl;
    }
};

Time :: Time(){
        hour = 0;
        minute = 0;
    }
    Time :: Time(int hour, int minute ): hour(hour),minute(minute){//프로트 타입을 밖에서 정의할땐 함수명이 필요하다..
    //    this -> hour = hour;//hour = hour; 지역변수와 멤버변수가 같다.
    //                 // 이럴때 멤버변수를 지칭하기 위해 this를 붙히는데
    //                 // this는 포인터변수(참조가아님)라 -> 를 쓴다.
    //    this -> minute = minute;
    }

 int main() {
    Time a;
    Time b(10, 25);
    a.print();
    b.print();
    return 0;
    }
