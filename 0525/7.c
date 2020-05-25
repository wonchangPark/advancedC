
#include<stdio.h>
#define ARR_SIZE	(6)

// 문자열을 위한 공간이 문자 데이터와 널 종료 문자를 담기에 충분함을 보장해야 합니다.

int main() {
	char src[ARR_SIZE];
	for (int i = 0; i < ARR_SIZE; i++) {
		src[i] =  'A' + i;
	}//이것은 단순 문자 배열이기 때문에 아스키 널이 없습니다.
	//배열에 A부터 길이6만큼을 넣습니다.
	char dst[ARR_SIZE];
	int i;
	for (i = 0; src[i] && i < sizeof(dst)-1; i++) {	//마지막인덱스에는 ASCII널이 들어와야하기 때문에 -1을 해줍니다.
	//for (i = 0; src[i] && i < sizeof(dst); i++) {	// 버퍼 오버플로 발생 
		dst[i] = src[i];
	}
	dst[i] = '\0';
	printf("%s\n", dst);

	return 0;
}