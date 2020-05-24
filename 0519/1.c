#if 0
# include <stdio.h>
//2차원 배열: 원소가 1차원 배열인 1차원 배열
//N차원 배열: 원소가 N-1차원의 배열을 갖는 1차원 배열

int main() {
	int arr1[3] = { 1,2,3 };
	int* pArr1 = arr1;

	int arr2[2][3] = { {1,2,3},{4,5,6} };
	int(*pArr2)[3] = arr2;
	return 0;
}
#endif


#if 0
//포인터 연산

#include <stdio.h>
#include <stdlib.h>
int main() {
	
	int *p = 0;
	int *q = 0;
	//포인터 + 포인터 = 에러. 무의미한 주소에 접근하는 것을 불허한다. 
	//p + q;
	//하지만 p-q는 의미적으로 유의미하다. 빼게 되면 거리 즉 길이를 알 수 있게 된다.
	p - q;
	//p* q;//덧셈의 연속이므로 이것도 안된다.
	//p / q;//얘도 의미가 없기때문에 에러이다.

	//p + 1; //포인터 + 정수 = 포인터
	//p - 1; //포인터 - 정수 = 포인터
	//p*1; // 에러
	//p/1; // 에러
}
//결론 ! 포인터는 제한적인 산술 연산이 가능합니다.
// p - q;
// p + 1;
// p - 1;


#endif


#if 0
//포인터와 산술 연산 2
#include <stdio.h>
int main() {
	int i = 0;
	printf("%d\n", i + 1); // ?


	//포인터와 정수의 연산 결과는 대상체 크기의 배수 만큼 계산됩니다.
	int* p = 0;
	printf("%d\n", p + 1); // p + (sizeof(*p) * 1)
	
	//임의의 배열 arr와 정수 N 이 있을때, arr[N] = *(arr+ N)  
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
	printf("%d\n", p + 1);	//12바이트라서 

	printf("arr[1][2] = %d\n", arr[1][2]);
	printf("arr[1][2] = %d\n", (arr+1)[2]); 
	//주소만 계산한거기때문에 직접가서 문을 두드려야한다. 
	//그러려면 역참조 *를 이용해야한다.
	printf("arr[1][2] = %d\n", (*(arr+1))[2]);
	//arr에서 +1을 해줘서  1번째 방으로 간뒤에 
	//4,5,6 중에 2번 방에 있는 6이 나와야 한다.
	printf("arr[1][2] = %d\n", *(*(arr + 1)+2));

	//첨자 연산자 정리
	//1. 배열 arr와 정수 N이 있을때	
	//	arr[N] == *(arr + N) => *(arr + (sizeof(*arr) * N));
	//2. 배열 arr와 행 N, 열 M이 있을때 
	//	arr[N][M] == *(*(arr + N) + M)
}


#endif


#if 0
#include<stdio.h>
#include<stdlib.h>
int main() {
	//2차원 배열의 동적 할당
	int arr[2][3]; // 스택에 할당
	int(*p)[3] = malloc(sizeof(int) * 2 * 3);// 힙에 할당
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			p[i][j] = i * j;
			printf("%d", p[i][j]);
			printf("\n");
		}
	}
	free(p);	//사용된 메모리는 반듯이 해제
}


#endif


#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//사용자의 이름을 저장하는 코드를 생각해 봅시다.
int main() {
	char names[3][32];
	for (int i = 0; i < 3; i++) {
		printf("input name: ");
		scanf("%s", names[i]);
	}
	for (int i = 0; i < 3; i++) {
		printf("your name: %s \n", names[i]);
	}
	//위 코드의 문제는 많은 용량을 스택에 썼다는 것이다. 
}

#endif



#if 1
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//이제 이 데이터를 힙에 생성합니다.
int main() {
	//char(* names)[32] = malloc(sizeof(char) * 3 * 32);
	
	char* *pointerNames;//포인터들을 가리키는 포인터이므로
	
	//이건 2차원 배열이 아니다. 
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

//배열의 동적 할당
	//길이가 6이고 int 타입인 배열 생성
	//int arr[6];		//스택에 생성
	//malloc(sizeof(int) * 6);