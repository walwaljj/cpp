#include <iostream>

using namespace std;

int main(){
    int list[] ={1,2,3,4,5,6,7,8,9,10};
    int sum = 0;

    for(int i : list){ // 루프돌때마다 복사가됨. 
                        //   1순회 = > i =1복사 후 *10 i는10
                        //   2순회 = > i =2복사 후 *20
                        //          . . . 원본 은 그대로

                        
        i = i*10;
        cout << i << " ";
    }

   
    for(int& i : list){ // auto&를 하게되면 복사가아니라 i가 배열을 돌기 때문에
                        //원본의 값이 달라짐. 
       i = i*10;
       cout << i << " ";
    }

    cout << endl;

    for(auto& i : list ){
        cout << i << " ";
    }

    return 0;
}