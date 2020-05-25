#include<stdio.h>
#define ARR_MAX	(4096)

void print_arr(const int* arr, size_t len) {	//unsigned int len
	// 사용자가 항상 올바른 인자의 값을 넣을것이라고 
	// 가정을 하면 안된다.
	// 즉 여기에서는 len은 엉뚱한값을 넣을수도 있다.
	// 배열에서 크기를 나타내는 인자가 유효한 범위 안에 있음을 
	// 보장하는 것이 좋습니다.
	if (arr == NULL || len > ARR_MAX)	//상한값을 주는것도 중요
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