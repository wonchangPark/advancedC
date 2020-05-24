#if 0
#include<stdio.h>
#include<assert.h>

//assert: 취약성이 될 수 있는 소프트웨어의 결점을 찾아내는데 효과적인 도구
// 하지만 단점이 있다.
//	1. abort 함수를 호출하므로 서버나 임베디드 시스템에는 사용하기가 부적합 함!
//	2. 함수이므로 반드시 프로그램이 구동되어야만 검사 가능함(런타임 오버헤드가 발생)
//	3. 경우에 따라서는 동작하지 않을 수도 있음
typedef struct {
	char cmd;	//패킷의 종류
	int len;	//패킷의 길이
	//데이터
}Header;

void foo(int* p) {
	//if (p == NULL) return;
	assert(p != NULL);	
	//오류생기면 해당 파일과 라인까지 알려주기 때문에 이걸 많이 쓴다.
}

int main() {
	//if (sizeof(Header) != 5) {
	//	fprintf(stderr, "header size is not 5\n");
	//	return -1;
	//}
	if(0)
		assert(sizeof(Header) == 5);	//헤더의 크기는 5이어야 합니다.(단정)
}


#endif
#include<stdio.h>
#include<assert.h>
#define __CONCAT(x, y)	x##y
#define CONCAT(x, y)	__CONCAT(x,y)	
//__LINE__ 이 몇라인인지로 치환되서 나오게 하기 위해
#define STATIC_ASSERT(e)	\
typedef char CONCAT(assertion_failed_at_line_, __LINE__)[(e) ? 1: -1]
typedef struct {
	char cmd;	//패킷의 종류
	int len;	//패킷의 길이
	//데이터
}Header;

int main() {
	int arr;
	STATIC_ASSERT(sizeof(Header) == 5);
	//assert(sizeof(Header) == 5);	//헤더의 크기는 5이어야 합니다.(단정)
}