#include <iostream>

using namespace std;
int main(){

    const int STUDENTS = 10;

    int scores[STUDENTS];
    int sum = 0;
    int i , average;

    for(i=0;i<STUDENTS;i++){
        cout << "input scores : ";
        cin >> scores[i];
    }

    for(i = 0; i<STUDENTS ; i++){
        sum += scores[i];
    }
 
    
    // cout << " " << scores;

    average = sum / STUDENTS;
    cout << "avg = " << average << endl;

    for(i = 0; i<STUDENTS ; i++){
        cout << " "<<scores[i];
    }
    return 0 ;
}