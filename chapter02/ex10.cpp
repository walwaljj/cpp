#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int n;
    int i = 1;

    cout << "������ �߿��� ����ϰ� ���� ���� �Է��ϼ��� (while): ";
    cin >> n; 

    while(i <=9){
        cout << n << " * " << i//n�� ����ڿ��� �Է¹ް�
                                //�� �ڿ� *�� ���, i�� ��������.
        <<" = "<<n*i<<endl;
        i++;
        
    }

    cout << "������ �߿��� ����ϰ� ���� ���� �Է��ϼ��� (for) : ";
    cin >>n;
    for(int i=1;i<10;i++){
        cout << n << " * " << i << " = " << i*n <<endl;
    }

    return 0;
}