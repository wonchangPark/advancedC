//¦���� �Ǻ��ϴ� �ڵ带 ������ ���ô�.
#if 0
#include<stdio.h>

//���! ������ �켱������ ��Ȯ�ϰ� �˴��� �׻� �������!
int isEven(int x) {
	//return x % 2 == 0;
	return (x & 1) == 0 ? 1 : 0;//��Ʈ �����ڸ� ����ؼ� �� ������
}

int main() {
	int n = 4;
	if (isEven(n))
		printf("even\n");
	else
		pirntf("odd\n");
}
#endif

#include <stdio.h>
void increase(int* p) {
	(*p)++;//�������� �� ���ü���������ϱ⶧����
}
int main() {
	int age = 18;
	increase(&age);
	printf("%d\n", age);
}