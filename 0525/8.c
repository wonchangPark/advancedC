
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define STR_SZ	(5)

// �׻� ���ڿ��� ���� �� ���ڷ� ���� �� �ֵ��� �����ؾ� �մϴ�.
// ����� ���ڿ� ó�� ��, �������� �� ���ڸ� �����ϴ� ���Դϴ�.

int main() {
	const char str[] = "abcdefghijklmnopqrstuvwxyz";

	char dst[STR_SZ] = { 0, };
	//...
	// dst[sizeof(dst) - 1] = '\0';
	strncpy(dst, str, sizeof(dst));
	dst[sizeof(dst) - 1] = '\0';
	printf("%s\n", dst);
}