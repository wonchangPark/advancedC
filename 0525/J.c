#if 1
// 파일의 크기를 생각해봅시다.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 문자 입출력 함수의 반환 값을 사용할때는 int를 사용해야 합니다.
// 그렇게 하지 않을 경우, EOF를 구분할 수 없습니다.
//그래서 fgetc, getc, getchar  의 리턴값이 int형입니다.

int main() {
	FILE* fp = fopen("c:\\good\\good.txt", "rb");
	if (fp == NULL) {
		fprintf(stderr, "fopen");
		return -1;
	}

	size_t fsize = 0;
	int ch = fgetc(fp);	//파일의 끝을 만나면 EOF(End of File)이 반환됩니다.
	// 1. 파일로부터 읽어온 바이트를 부호 없는 정수 타입의 바이트로	변환합니다.
	// 0xFF => unsigned char

	// 2. 읽어온 바이트를 4바이트의 부호 있는 정수로 확장합니다.
	// 0x000000FF => 255

	while (ch != EOF) {	// 0xFFFFFFFF
		++fsize;
		ch = fgetc(fp);
	}
	printf("%u\n", fsize);
	return 0;
}
#endif

#if 0
#include<stdio.h>

int main() {
	//부호 없는 정수 타입이 확장될 경우, 확장 비트는 0으로 채워지게 됩니다.
	unsigned char sc = 0xFF;	//								 1111 1111 == 255
	signed int si = sc;			// 0000 0000 0000 0000 0000 0000 1111 1111
	printf("%d\n", si);			//255

	//부호 있는 정수 타입이 확장될 경우, 확장 비트는 1로 채워지게 됩니다.
	signed char sc1 = 0xFF;	//								 1111 1111 == -1
	signed int si1 = sc1;			// 1111 1111 1111 1111 1111 1111 1111 1111
	printf("%d\n", si1);			//255
}
#endif