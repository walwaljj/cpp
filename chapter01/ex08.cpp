#include <iostream>
#include <string>
using namespace std;

auto add(int x , int y){// 여기서 x와 y값을 정했다면 
                        //main에서 add(x,y) 값을 넣어도 함수 안의 변수값으로 계산된다. 

    return x + y;
}

int main(int argc, char const *argv[]){
    auto d = 1.0;
    auto sum = add(5,10);// add의 함수가 위에서 int로 정의됨.
    cout << d << " " << sum << endl;
    return 0;
}