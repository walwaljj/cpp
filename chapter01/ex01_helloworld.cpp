#include <iostream>
//#include : 외부 프로그램 소스를 포함시키는 매크로 == import와 동일.
// <iostream> : 입출력관련 기본 라이브러리 std가 정의가 되어있다.
// 즉, <iostream> 를 #include통해 사용하겠다는 뜻,

using namespace std;
//네임 스페이스 (std::) 를 생략하기 위해 지정이며
//생략시 에러난다. 어떤파일을 정의하고있는지 모르기 때문에!
//입력하지 않으려면 std::cout이런식으로 실행문에 std:: 를 해줘야한다.

int main(int argc, char const *argv[]){
//int : 자료형 == 반환형
//main : function == 함수
//(int argc, char const *argv) : 피라미터 == 매개변수
   cout << "Hello World" << std::endl;
    //cout : console(기본 입출력-키보드,모니터 등 과 같다.) out으로 
    // 오른쪽 실행문이<<를 만나 왼쪽으로 전달됨.
    // std::cout << "Hello World" << std::endl;
 
    return 0;
    
    
}
//cd "c:\IoT\cpp\" 
//"c:\IoT\cpp\" 로 들어가 ==PS C:\IoT\cpp> cd chapter01

//&& g++ ex01_helloworld.cpp -o ex01_helloworld 
//&& : 문장이 끝나면
//g++로 컴파일을 해라 -o 를

//&& "c:\IoT\cpp\"ex01_helloworld
//"c:\IoT\cpp\"ex01_helloworld 실행해라 == .\ex01_helloworld  +++++실행파일은 확장명을 생략할수있다.