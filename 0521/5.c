#if 0
#include<Windows.h>		//CreateThread
#include<stdio.h>
unsigned long __stdcall threadMain(void* p) {
	for (int i = 0; i < 10; i++) {
		Sleep(1000);
		printf("\t\t[worker thread]\n");
	}
	return 0;
}
int main() {
	CreateThread(0, 0, threadMain, 0, 0, 0);
	//이 순간 쓰레드가 생성되는동시에 동작합니다.
	//메인 스레드가 끝나지 않아야 위의 스레드가 안 죽는다. 
	//따라서 while문을 사용해 살려두겠다.
	while (1) {
		Sleep(1000);
		printf("[main thread]\n");

	}
	return 0;
}
#endif
#if 1
#include<Windows.h>		//CreateThread
#include<stdio.h>
//	volatile: 값이 프로그램이 아닌 외부적인 요인에 의하여
//  그 값이 변경될 수 있다고 
//	컴파일러에게 알려 캐싱을 제한할때 사용하는 키워드 입니다.
//	따라서 캐시되어서는 안되는 데이터에 대해서는 반드시 
//	volatile을 사용해야 합니다.
volatile int flag = 1;
unsigned long __stdcall threadMain(void* p) {
	Sleep(5000);
	flag = 0;	//5초후에 flag를 0으로 만들어준다.
	return 0;
}
int main() {
	CreateThread(0, 0, threadMain, 0, 0, 0);
	//이 순간 쓰레드가 생성되는동시에 동작합니다.
	while (flag)//flag가 0이 아닐동안 계속 돌면서 살아있다.
		;
	return 0;
}
//컴파일러는 그냥 봤을때 threadMain 이라는 함수가 안보이므로  
//위의 threadMain함수는 main()에서 수행 안하는지 알고 캐슁을 해서
//메모리에(안바뀌는값인) flag값을 확인하는것이아니라 그
//이게 끝나지않는 이유는 cpu에 캐쉬로 flag값을 넣기 때문이다. 
//메모리에 접근해서  flag값을 가져오지 않는다.
//따라서 컴파일러에게 그래도 매번 메모리에 가서 값을 확인해서 
//가져오라는뜻으로 volatile를 이용해야한다.
#endif