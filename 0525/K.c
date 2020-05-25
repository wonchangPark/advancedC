
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

// fgets: 버퍼보다 작은 값이 들어오면 개행이 포함되고 그 끝은 널로 끝납니다.
// 버퍼의 크기보다 같거나 큰 값이 들어오면 끝에 널을 추가합니다.
int main() {
	char buf[32];
	for (int i = 0; i < 32; i++) {
		buf[i] = 'X';
	}
	// fgets 함수는 실패할 경우, NULL을 반환합니다.
	if (fgets(buf, sizeof(buf), stdin)){
		
		//ABCD가 입력했을 경우
		// 0	 1	  2	  3	  4	  5
		//[A]	[B]	 [C] [D] [10] [0]	
		
		//상황에 따라 개행이 아닌 널이 입력된 경우 
		//[0] ... 길이는 0이 나오게 되고 0 -1 = -1이 나오게 되고 올바르게 동작이 되지 않을수도 있다.
		if (*buf) {// ==> 널이 아닌 문자로 시작되는경우
			printf("%d\n", strlen(buf));
			buf[strlen(buf) - 1] = '\0';	//-> 입력된 문자열에서 개행을 지우는 코드
		}
		printf("%s", buf);
		//abcd만 입력했을 경우
		//for (int i = 0; i < 32; i++) {
		//	printf("%d ", buf[i]);
		//}
		printf("\n");
	}
	else {
		printf("fgets error\n");
		return -1;
	}
	return 0;
}