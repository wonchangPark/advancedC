#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

// char, signed char, unsigned char�� ���� Ÿ�� 
// ������ �̴� ���� �ٸ� Ÿ������ ���� ȣȯ �������� �ʽ��ϴ�.
// ���� ���� �Ǵ�  ���ڿ��� ó���Ϸ��� ������ char Ÿ���� ����ϴ� ���� �����մϴ�.

int main() {
	char str1[] = "hello, world";	//�̷��� YES!!
	signed char str2[] = "hello, world";;	//�̷��� NO!!!
	unsigned char str3[] = "hello, world";; //�̷��� NO!!!

	printf("%d\n", strlen(str1));
	printf("%d\n", strlen(str2));
	printf("%d\n", strlen(str3));
}