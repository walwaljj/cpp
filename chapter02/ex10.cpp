#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int n;
    int i = 1;

    cout << "구구단 중에서 출력하고 싶은 단을 입력하세요 (while): ";
    cin >> n; 

    while(i <=9){
        cout << n << " * " << i//n을 사용자에게 입력받고
                                //그 뒤에 *를 출력, i를 루프돌림.
        <<" = "<<n*i<<endl;
        i++;
        
    }

    cout << "구구단 중에서 출력하고 싶은 단을 입력하세요 (for) : ";
    cin >>n;
    for(int i=1;i<10;i++){
        cout << n << " * " << i << " = " << i*n <<endl;
    }

    return 0;
}