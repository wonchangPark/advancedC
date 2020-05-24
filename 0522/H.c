#if 0
#include<stdio.h>
//부동소수점 연산용 정수는 반드시 부동소수점으로 먼저 변경하라!
int main() {
	int a = 533;
	//float f = a / 7;	//  '/'연산을 하고 나온결과값의 임시타입이 int값이기때문에 이미 아래의 값은 없어져버렸다.
	float f = a / 7.0f;	

	printf("%f\n", f);
}

#endif

#include<stdio.h>
#include<time.h>
int main() {
	clock_t start = clock();
	//---------------------------------
	for (int i = 0; i < 100000; i++) {
		printf("hello, world\n");	
	}
	//---------------------------------
	clock_t elapsed = clock() - start;
	printf("%f sec\n",(double)elapsed / CLOCKS_PER_SEC);
	//소요시간구하기.

}