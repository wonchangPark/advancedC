#if 0
# include <stdio.h>
//2���� �迭: ���Ұ� 1���� �迭�� 1���� �迭
//N���� �迭: ���Ұ� N-1������ �迭�� ���� 1���� �迭

int main() {
	int arr1[3] = { 1,2,3 };
	int* pArr1 = arr1;

	int arr2[2][3] = { {1,2,3},{4,5,6} };
	int(*pArr2)[3] = arr2;
	return 0;
}
#endif


#if 0
//������ ����

#include <stdio.h>
#include <stdlib.h>
int main() {
	
	int *p = 0;
	int *q = 0;
	//������ + ������ = ����. ���ǹ��� �ּҿ� �����ϴ� ���� �����Ѵ�. 
	//p + q;
	//������ p-q�� �ǹ������� ���ǹ��ϴ�. ���� �Ǹ� �Ÿ� �� ���̸� �� �� �ְ� �ȴ�.
	p - q;
	//p* q;//������ �����̹Ƿ� �̰͵� �ȵȴ�.
	//p / q;//�굵 �ǹ̰� ���⶧���� �����̴�.

	//p + 1; //������ + ���� = ������
	//p - 1; //������ - ���� = ������
	//p*1; // ����
	//p/1; // ����
}
//��� ! �����ʹ� �������� ��� ������ �����մϴ�.
// p - q;
// p + 1;
// p - 1;


#endif


#if 0
//�����Ϳ� ��� ���� 2
#include <stdio.h>
int main() {
	int i = 0;
	printf("%d\n", i + 1); // ?


	//�����Ϳ� ������ ���� ����� ���ü ũ���� ��� ��ŭ ���˴ϴ�.
	int* p = 0;
	printf("%d\n", p + 1); // p + (sizeof(*p) * 1)
	
	//������ �迭 arr�� ���� N �� ������, arr[N] = *(arr+ N)  
	int arr[6] = { 1,2,3,4,5,6 };
	for (int i = 0; i < 6; i++) {
		printf("arr[%d] = %d\n", i, *(arr + i));
	}

}


#endif


#if 0
#include<stdio.h>

int main() {
	int arr[2][3] = { {1,2,3}, {4,5,6} };
	int(*p)[3] = 0;
	printf("%d\n", p + 1);	//12����Ʈ�� 

	printf("arr[1][2] = %d\n", arr[1][2]);
	printf("arr[1][2] = %d\n", (arr+1)[2]); 
	//�ּҸ� ����Ѱű⶧���� �������� ���� �ε�����Ѵ�. 
	//�׷����� ������ *�� �̿��ؾ��Ѵ�.
	printf("arr[1][2] = %d\n", (*(arr+1))[2]);
	//arr���� +1�� ���༭  1��° ������ ���ڿ� 
	//4,5,6 �߿� 2�� �濡 �ִ� 6�� ���;� �Ѵ�.
	printf("arr[1][2] = %d\n", *(*(arr + 1)+2));

	//÷�� ������ ����
	//1. �迭 arr�� ���� N�� ������	
	//	arr[N] == *(arr + N) => *(arr + (sizeof(*arr) * N));
	//2. �迭 arr�� �� N, �� M�� ������ 
	//	arr[N][M] == *(*(arr + N) + M)
}


#endif


#if 0
#include<stdio.h>
#include<stdlib.h>
int main() {
	//2���� �迭�� ���� �Ҵ�
	int arr[2][3]; // ���ÿ� �Ҵ�
	int(*p)[3] = malloc(sizeof(int) * 2 * 3);// ���� �Ҵ�
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			p[i][j] = i * j;
			printf("%d", p[i][j]);
			printf("\n");
		}
	}
	free(p);	//���� �޸𸮴� �ݵ��� ����
}


#endif


#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//������� �̸��� �����ϴ� �ڵ带 ������ ���ô�.
int main() {
	char names[3][32];
	for (int i = 0; i < 3; i++) {
		printf("input name: ");
		scanf("%s", names[i]);
	}
	for (int i = 0; i < 3; i++) {
		printf("your name: %s \n", names[i]);
	}
	//�� �ڵ��� ������ ���� �뷮�� ���ÿ� ��ٴ� ���̴�. 
}

#endif



#if 1
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//���� �� �����͸� ���� �����մϴ�.
int main() {
	//char(* names)[32] = malloc(sizeof(char) * 3 * 32);
	
	char* *pointerNames;//�����͵��� ����Ű�� �������̹Ƿ�
	
	//�̰� 2���� �迭�� �ƴϴ�. 
	pointerNames = malloc(sizeof(char*) * 3);
	

	for (int i = 0; i < 3; i++) {
		char name[32];
		printf("input name: ");
		scanf("%s", name);
		pointerNames[i] = malloc(sizeof(char) * (strlen(name) + 1));
		
			
			
		strcpy(pointerNames[i], name);
		
		
	}
	for (int i = 0; i < 3; i++) {
		printf("your name: %s \n", pointerNames[i]);
	}
	for (int i = 0; i < 3; i++) {
		free(pointerNames[i]);
	}
	free(pointerNames);
}

#endif

//�迭�� ���� �Ҵ�
	//���̰� 6�̰� int Ÿ���� �迭 ����
	//int arr[6];		//���ÿ� ����
	//malloc(sizeof(int) * 6);