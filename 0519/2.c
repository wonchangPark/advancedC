#define _CRT_SECURE_NO_WARNINGS
#if 0
#include<stdio.h>
//Ÿ�� ���ڵ� ���: typedef ���� Ÿ�� ���ο� ��Ī
typedef unsigned int size_t;
typedef int (*arr_t)[3] ;
//int(*)[3] foo() {
//int(*foo())[3] {	//foo��� �Լ��� ���ڰ� ���� �Լ��ε� �׷��� �Ǹ� �������� ��� ���ϰ��̶�� ���̰� �������ε� [3]�迭�� ������
arr_t foo(){	//��κ� �̷��� �߻�ȭ�س��´�.
	int arr[2][3];
	return arr;
}

int main() {
	int (*p)[3] = foo();
}

#endif
#include<stdlib.h>
#include<stdio.h>

//��� ���� �������� ���� ���� Ÿ���� 2���� �迭�� �����ϴ� ���̺귯���� ������ ���ô�.
int** createArray(int row, int col) {
	int** p = malloc(sizeof(int*) * row);	//���� ������ŭ �����Ҵ��ؼ� ���� ����
	for (int i = 0; i < row; i++) {
		p[i] = malloc(sizeof(int) * col);	
		//��ġ 2���� �迭ó�� �������� ����� �迭�̴�.
	}
	return p;
}

void freeArray(int** arr, int row) {
	//������ ������ �������� ó��
	for (int i = 0; i < row; i++) {
		free(arr[i]);
	}
	free(arr);
}


int main() {
	int** arr = createArray(2, 3);

	int cnt = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			arr[i][j] = ++cnt;
		}
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ",arr[i][j]);
			printf("\n");
		}
	}
}
