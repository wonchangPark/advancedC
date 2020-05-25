#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

// char, signed char, unsigned char는 문자 타입 
// 하지만 이는 서로 다른 타입으로 서로 호환 가능하지 않습니다.
// 따라서 문자 또는  문자열을 처리하려면 가급적 char 타입을 사용하는 것을 권장합니다.

int main() {
	char str1[] = "hello, world";	//이런식 YES!!
	signed char str2[] = "hello, world";;	//이런식 NO!!!
	unsigned char str3[] = "hello, world";; //이런식 NO!!!

	printf("%d\n", strlen(str1));
	printf("%d\n", strlen(str2));
	printf("%d\n", strlen(str3));
}