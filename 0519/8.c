#include <stdio.h>
//#define cstring char*
typedef char* cstring;
//타입 인코딩 시, 매크로 대신 typedef를 사용하라!
int main() {
	//char* s1;
	cstring s1, s2;	//char* s1, s2;

	s1 = "hello";
	s2 = "world";
	printf("%s\n", s1);
	printf("%s\n", s2);
}