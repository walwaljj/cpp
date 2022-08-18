#include <iostream>
using namespace std;

void display(char c= '*', int n=10){
    for(int i=0; i<n ; i++){
        cout << c ;
    }
    cout << endl;
}
int main(int argc, char const *argv[]) {
display(5);//위치기반으로 매치가되기때문에 첫 매개변수로 대입,''를 붙히지않아 출력안됨.
display('#');
display('#', 5);
return 0;
}