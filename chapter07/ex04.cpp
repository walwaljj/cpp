#include <iostream>
#include <string>
using namespace std;
class Dog {
public :
int age;
string name;
Dog() {
age = 1;
name = "바둑이";
}
~Dog() { }
int getAge() { return age;}
void setAge(int a) { age = a; }
};
int main() {
Dog *pDog = new Dog;
cout << "dog age: " << pDog->getAge() << endl;
pDog->setAge(3);
cout << "dog age:  " << pDog->getAge() << endl;
delete pDog;
return 0;
} 
