
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	const char* name = "daniel";

	//char* p = realloc(name, strlen(name) * 2);
	// 이 코드의 문제점은 스택에 할당된 메모리를 해제하려고 한다는것입니다.realloc이 해제를해버리고 새로운 포인터 p 를 리턴함
	// 동적으로 할당된 메모리만 해제해야 합니다.
	
	char* p = malloc(strlen(name) * 2);
	strcpy(p, name);
	
}