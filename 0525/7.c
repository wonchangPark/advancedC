
#include<stdio.h>
#define ARR_SIZE	(6)

// ���ڿ��� ���� ������ ���� �����Ϳ� �� ���� ���ڸ� ��⿡ ������� �����ؾ� �մϴ�.

int main() {
	char src[ARR_SIZE];
	for (int i = 0; i < ARR_SIZE; i++) {
		src[i] =  'A' + i;
	}//�̰��� �ܼ� ���� �迭�̱� ������ �ƽ�Ű ���� �����ϴ�.
	//�迭�� A���� ����6��ŭ�� �ֽ��ϴ�.
	char dst[ARR_SIZE];
	int i;
	for (i = 0; src[i] && i < sizeof(dst)-1; i++) {	//�������ε������� ASCII���� ���;��ϱ� ������ -1�� ���ݴϴ�.
	//for (i = 0; src[i] && i < sizeof(dst); i++) {	// ���� �����÷� �߻� 
		dst[i] = src[i];
	}
	dst[i] = '\0';
	printf("%s\n", dst);

	return 0;
}