
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	const char* name = "daniel";

	//char* p = realloc(name, strlen(name) * 2);
	// �� �ڵ��� �������� ���ÿ� �Ҵ�� �޸𸮸� �����Ϸ��� �Ѵٴ°��Դϴ�.realloc�� �������ع����� ���ο� ������ p �� ������
	// �������� �Ҵ�� �޸𸮸� �����ؾ� �մϴ�.
	
	char* p = malloc(strlen(name) * 2);
	strcpy(p, name);
	
}