
#include<stdio.h>

//매직넘버를 회피하는 방법 1. 상수(constant)
//단점: 1. 메모리낭비가 발생하고,
//		2. switch문에서 사용할수없다.
//const int RED = 0;
//const int GREEN = 1;
//const int BLUE = 2;

//매직넘버를 회피하는 방법 2. 매크로 상수
//단점: 1. 유지보수하기 어렵다.
//		2. 디버깅이 어렵다.
//#define RED (0)
//#define GREEN (1)
//#define BLUE (2)

//매직넘버를 회피하는 방법 3. 열거자
enum Color{ RED, GREEN, BLUE };
enum Log{ ERR, WARN, INFO };

void paintColor(int color) {
	switch (color) {
	case RED: printf("RED\n"); break;
	case GREEN: printf("GREEN\n"); break;
	case BLUE: printf("BLUE\n"); break;
	}
}

int main() {
	paintColor(RED);
	paintColor(ERR);	//enum의 치명적인 단점 -> 정수 int로 처리된다는점
}