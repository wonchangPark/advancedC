#include <stdio.h>
//#define cstring char*
typedef char* cstring;
//Ÿ�� ���ڵ� ��, ��ũ�� ��� typedef�� ����϶�!
int main() {
	//char* s1;
	cstring s1, s2;	//char* s1, s2;

	s1 = "hello";
	s2 = "world";
	printf("%s\n", s1);
	printf("%s\n", s2);
}