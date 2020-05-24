
#include<stdio.h>
//초기화되지 않은 변수는 참조하지 마라!
int sum(const int* arr, int len) {
	int sum = 0;	//지역변수는 선언할때 아무값도 안넣어주면 쓰레기값으로 출력된다.
	for (int i = 0; i < len; i++)
		sum += arr[i];
	return sum;
}

int main() {
	int arr[5] = { 1,2,3,4,5 };
	printf("%d\n", sum(arr, 5));
}