#include<stdio.h>
//�Լ� ���� �� , Ÿ�� ������ �����ϰ� �����ض�!!
//�Լ� ������ ���� ����Ҷ� �����ؾ� �Ѵ�.
int foo(int a, int b, int c);
int main() {
	//int ret = foo(1, 2);
	int(*fp)(int, int) = foo;	
	//�߸��������� ������ ���� �ʰ� ������ ���� ����
	fp(1, 2);
}

int foo(int a, int b, int c) {
	printf("foo(%d, %d, %d)\n", a, b, c);
	return 0;
}

// ����, ������� ����: checkdisk@naver.com