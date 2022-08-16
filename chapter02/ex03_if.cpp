#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]){

    int x = 100;

    if(x == 100)//중괄호 생략 가능 그러나 가독성을 위해 하지 않는것이 좋다.
        cout << "x가 100입니다." << endl;

    if(x == 100){
        cout << "x의 값을 출력합니다." << endl;
        cout << "x가 100입니다. "<< endl;
    }
    int i;
    string ii;

    // cout << "정수를 입력하세요 " << endl;
    cout << "한글을 입력하세요 " << endl;
    cin >> ii;
    cout <<"결과 : "<< ii << endl;
    return 0;
}