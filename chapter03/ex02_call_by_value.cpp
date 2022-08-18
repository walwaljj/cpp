#include <iostream>

using namespace std;
void swap(int x , int y){
    int t;
    t = x;
    x = y;
    y = t;
}
int main(int argc, char const *argv){
    int a = 100, b= 200;

    printf("a=%d, b=%d\n", a,b);
    swap(a,b);//swap 의 매개변수 x,y로 값전달
    printf("a=%d, b=%d\n", a,b);
}