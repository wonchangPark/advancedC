#define _CRT_SECURE_NO_WARNINGS
#if 0
#include<stdio.h>
//타입 인코딩 방법: typedef 기존 타입 새로운 별칭
typedef unsigned int size_t;
typedef int (*arr_t)[3] ;
//int(*)[3] foo() {
//int(*foo())[3] {	//foo라는 함수는 인자가 없는 함수인데 그렇게 되면 나머지는 모두 리턴값이라는 것이고 포인터인데 [3]배열의 포인터
arr_t foo(){	//대부분 이렇게 추상화해놓는다.
	int arr[2][3];
	return arr;
}

int main() {
	int (*p)[3] = foo();
}

#endif
#include<stdlib.h>
#include<stdio.h>

//행과 열이 고정되지 않은 정수 타입의 2차원 배열을 생성하는 라이브러리를 구현해 봅시다.
int** createArray(int row, int col) {
	int** p = malloc(sizeof(int*) * row);	//행의 갯수만큼 동적할당해서 힙에 만듬
	for (int i = 0; i < row; i++) {
		p[i] = malloc(sizeof(int) * col);	
		//마치 2차원 배열처럼 느끼지만 톱니형 배열이다.
	}
	return p;
}

void freeArray(int** arr, int row) {
	//해제는 생성의 역순으로 처리
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
