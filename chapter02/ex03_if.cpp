#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]){

    int x = 100;

    if(x == 100)//�߰�ȣ ���� ���� �׷��� �������� ���� ���� �ʴ°��� ����.
        cout << "x�� 100�Դϴ�." << endl;

    if(x == 100){
        cout << "x�� ���� ����մϴ�." << endl;
        cout << "x�� 100�Դϴ�. "<< endl;
    }
    int i;
    string ii;

    // cout << "������ �Է��ϼ��� " << endl;
    cout << "�ѱ��� �Է��ϼ��� " << endl;
    cin >> ii;
    cout <<"��� : "<< ii << endl;
    return 0;
}