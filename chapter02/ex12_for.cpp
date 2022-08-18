#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    //1~10까지의 합.

    int sum=0;
    for(int i = 0; i<=10 ; i++){
        sum+=i;
    }cout << "ttl : " << sum << endl; 

    int sum2=1;
    int num;
    cout << "input num  : " << endl; 
    cin >> num;
    for(int i = 1 ; i <= num ; i++){
        sum2= sum2*i;
    }cout  << num << "! = "<< sum2<< endl;

    return 0;
}