
#include<stdio.h>
#include<stdlib.h>

int main() {
	signed int si = -1;
	unsigned int ui = 1;
	//�������̸� ���� Ÿ�Գ����� ������ �Ѵ�.(��ȣ�� ���Եȴ�)
	if ((int)ui > si)
		printf("true\n");
	else
		printf("false\n");

	char* p = malloc(-1);//malloc�� ��ȣ���� ũ�⸦ �ޱ⶧���� -1�� ������ �ִ� ū �������� 42�� ������ �Ҵ��ؾ��ϴµ� ������ũ�⸦ �Ҵ��� �޸𸮴� ���⶧���� �޸��Ҵ翡 �����Ѵ�.
	printf("%p\n", p);
}