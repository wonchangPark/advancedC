
#include<stdio.h>

// 포맷 문자열 사용 시, 정확한 문자열을 사용해야 합니다.
// 잘못된 포맷 문자열 사용 시, 이는 미정의 동작입니다.
int main() {
	const char* msg = "not enough memory";
	int err_code = 3;

	//printf("Report: %d(%s)\n", msg, err_code);	//거꾸로 잘못쓰면 안된다는 뜻!
	printf("Report: %d(%s)\n", err_code, msg);
}