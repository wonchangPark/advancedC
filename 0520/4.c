
//매크로 연산자 이야기
// 1. a##b : 두 개의 토큰을 연결하는 연산자.	ab 이렇게 붙어버린다.
// 2. #x   : 토큰을 문자열화 하는 연산자.
// 3. #@x  : 길이가 1인 토큰을 문자화하는 연산자
#include<stdio.h>
#define CONCAT(x, y)	x##y	
//이건 연산의 개념이 아닌 붙이는 개념이기때문에 ( ) 를 이용하지 않는다.
#define TO_STR(x)		#x


int main() {
	//printf("%d\n", concat(2020, 12));	//202012
	printf("%d\n", CONCAT(2020, 12));	
	printf("%s\n", TO_STR(hello));	
}