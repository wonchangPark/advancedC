
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define STR_SZ	(5)

// 항상 문자열의 끝은 널 문자로 끝날 수 있도록 보장해야 합니다.
// 방법은 문자열 처리 후, 마지막에 널 문자를 삽입하는 것입니다.

int main() {
	const char str[] = "abcdefghijklmnopqrstuvwxyz";

	char dst[STR_SZ] = { 0, };
	//...
	// dst[sizeof(dst) - 1] = '\0';
	strncpy(dst, str, sizeof(dst));
	dst[sizeof(dst) - 1] = '\0';
	printf("%s\n", dst);
}