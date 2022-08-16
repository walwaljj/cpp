#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]){
    int i;
    // cout << "정수를 입력하세요 :";
    //?뺤닔瑜??낅젰?섏꽭??
    //: terminal에서 출력 - 윈도우에서 지원 : 국내표준을 사용하기 때문에 is9660 국내코드 != utf8 깨진다.
    cin >> i;
    
    double f;
    cin >> f;

    cout << i << " " << f << endl;
    return 0;

}