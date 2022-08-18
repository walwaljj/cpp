#include <iostream>

using namespace std;

int main(int argc, char const *argv){
    int a = 100, b= 200;

    printf("a=%d, b=%d\n", a,b);
    swap(a,b);//swap 의 매개변수 x,y로 값전달
    printf("a=%d, b=%d\n", a,b);
}
void swap(int& x , int& y){//전달받은 a,b의 주소값을 참조함. 

    int t;
    t = x;
    x = y;
    y = t;
}
//결과 : 매개변수가 참조& 한 원본이 바뀌게됨.