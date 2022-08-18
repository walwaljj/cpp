#include <iostream>
using namespace std;

class Time{
    public :
    int hour;
    int minute;

    Time(int h, int m);// 생성자의 프로토타입만 남음 ,정의 전.

    void print();// 메서드의 프로토타입만 남음 ,정의 전.
};

Time :: Time(int h , int m){// Time 클래스의 생성자를 여기서 정의함.
        hour=h;
        minute = m;
    }
void Time::print(){//Time 클래스의 메서드를 여기서 정의함.
        cout << hour << ":"<< minute << endl;
    }

int main(){
    // Time a;
    Time b(10,25);
    Time c{10,25};
    Time d = {10,25};
    // a.print();
    b.print();
    c.print();
    d.print();
    
    return 0;
}