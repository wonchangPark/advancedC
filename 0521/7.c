
//�ܶ� ��
#include<stdio.h>
#define SIZE_MAX (5)

//������		ù��° �ǿ�����		�ι�° �ǿ�����
//AND(&&)			����				�򰡾���
//OR(||)			��					�򰡾���

int main() {
	int arr[SIZE_MAX] = { 0,2,3,4,0 };

	//int i = 0;
	//int cnt = 0;
	//while ((arr[i] == 0) && (++i < SIZE_MAX))
	//�迭���� 0�� ������ ī��Ʈ�ϴ°�.
	//���� ���� ���ʽ��� �����ϰ�� �������� ���� ������ �ʰ� 
	//�پ�Ѵ´ٴ� ������ �ִ�.
	//	++cnt;

	int cnt = 0;
	for (int i = 0; i < SIZE_MAX; i++) {
		if (arr[i] == 0)
			++cnt;
	}
	printf("%d\n", cnt);

	return 0;
}