
#include<stdio.h>
#include<limits.h>

// C99표준에 따르면 부호 없는 정수에 대하여 계산을 수행하면 결코 오버플로우가 발생하지 않는다고 한다.
// 그 이유는 결과 값이 저장될 수 없는 타입으로 표현될 경우, 나머지 연산으로 값을 줄여(wrap around) 표현하기 때문이다.
// wrap around -> 정수 래핑
int main() {
	// 정수 래핑이 발생하기 전에 미리 테스트합니다.
	unsigned int uint1, uint2, sum = 0;
	uint1 = UINT_MAX;	//최대치
	uint2 = 1;

	if (uint1 > UINT_MAX - uint2) {
		fprintf(stderr, "정수 래핑이 발생하였습니다.");
		return -1;
	}

	sum = uint1 + uint2;	//최대치를 넘으면 (자리넘침) 오버플로우가 아니라 랩 어라운드라고 해서 모듈러스연산으로 나눠버린다.
	//부호있는 것에 대해서만 오버플로우가 일어난다.
	printf("%d\n", sum);
}