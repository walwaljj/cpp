#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    int x = 120;

    if(x==100){//만약 X=100으로 조건에서 오타가나면 X값이 100에 대입되어 true가된다. 주의!!
        cout << "x가 100입니다."<< endl;
    }else{
        cout << "x가 100이 아닙니다." <<endl;
    }
}