#if 1
// ������ ũ�⸦ �����غ��ô�.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// ���� ����� �Լ��� ��ȯ ���� ����Ҷ��� int�� ����ؾ� �մϴ�.
// �׷��� ���� ���� ���, EOF�� ������ �� �����ϴ�.
//�׷��� fgetc, getc, getchar  �� ���ϰ��� int���Դϴ�.

int main() {
	FILE* fp = fopen("c:\\good\\good.txt", "rb");
	if (fp == NULL) {
		fprintf(stderr, "fopen");
		return -1;
	}

	size_t fsize = 0;
	int ch = fgetc(fp);	//������ ���� ������ EOF(End of File)�� ��ȯ�˴ϴ�.
	// 1. ���Ϸκ��� �о�� ����Ʈ�� ��ȣ ���� ���� Ÿ���� ����Ʈ��	��ȯ�մϴ�.
	// 0xFF => unsigned char

	// 2. �о�� ����Ʈ�� 4����Ʈ�� ��ȣ �ִ� ������ Ȯ���մϴ�.
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
	//��ȣ ���� ���� Ÿ���� Ȯ��� ���, Ȯ�� ��Ʈ�� 0���� ä������ �˴ϴ�.
	unsigned char sc = 0xFF;	//								 1111 1111 == 255
	signed int si = sc;			// 0000 0000 0000 0000 0000 0000 1111 1111
	printf("%d\n", si);			//255

	//��ȣ �ִ� ���� Ÿ���� Ȯ��� ���, Ȯ�� ��Ʈ�� 1�� ä������ �˴ϴ�.
	signed char sc1 = 0xFF;	//								 1111 1111 == -1
	signed int si1 = sc1;			// 1111 1111 1111 1111 1111 1111 1111 1111
	printf("%d\n", si1);			//255
}
#endif