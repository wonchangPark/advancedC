#include<stdio.h>
#define ARR_MAX	(4096)

void print_arr(const int* arr, size_t len) {	//unsigned int len
	// ����ڰ� �׻� �ùٸ� ������ ���� �������̶�� 
	// ������ �ϸ� �ȵȴ�.
	// �� ���⿡���� len�� �����Ѱ��� �������� �ִ�.
	// �迭���� ũ�⸦ ��Ÿ���� ���ڰ� ��ȿ�� ���� �ȿ� ������ 
	// �����ϴ� ���� �����ϴ�.
	if (arr == NULL || len > ARR_MAX)	//���Ѱ��� �ִ°͵� �߿�
		return -1;

	for (size_t i = 0; i < len ; i++) {
		printf("%d ", arr[i]);	// *(arr + i);
	}
	return 0;
}

int main() {
	int arr[] = { 1,2,3,4,5 };
	print_arr(arr, -39);	
}