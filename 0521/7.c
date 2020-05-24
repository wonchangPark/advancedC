
//단락 평가
#include<stdio.h>
#define SIZE_MAX (5)

//연산자		첫번째 피연산자		두번째 피연산자
//AND(&&)			거짓				평가안함
//OR(||)			참					평가안함

int main() {
	int arr[SIZE_MAX] = { 0,2,3,4,0 };

	//int i = 0;
	//int cnt = 0;
	//while ((arr[i] == 0) && (++i < SIZE_MAX))
	//배열안의 0의 갯수를 카운트하는것.
	//위의 식은 왼쪽식이 거짓일경우 오른쪽의 식은 보지도 않고 
	//뛰어넘는다는 단점이 있다.
	//	++cnt;

	int cnt = 0;
	for (int i = 0; i < SIZE_MAX; i++) {
		if (arr[i] == 0)
			++cnt;
	}
	printf("%d\n", cnt);

	return 0;
}