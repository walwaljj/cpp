#include <stdio.h>

int a(int n);
int main(){
    int r;
    r=a(5);
    printf("%d\n", r);
}

int a(int n){
    return(n*n);
}