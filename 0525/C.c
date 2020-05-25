
#include<stdio.h>
#include<stdlib.h>

typedef struct {
	char name[32];
	int age;
}Person;

typedef struct {
	char name[32];
	int age;
	int id;	//학번
}Student;

// 메모리 할당 함수의 반환 값은 즉시 할당된 타입의 포인터로 변환시키는 것이 좋다.
// 이는 좌측의 포인터 타입과 일치하지 않을 경우, 경고를 발생시킬 수 있기 때문이다.
#define MALLOC(T)	(T*)malloc(sizeof(T))
int main() {
	//Student* p = (Student*)malloc(sizeof(Person));	//void* 형은 다른타입으로 캐스팅 OK 하지만 그래도 캐스팅은 해주자.
														//절대 왼쪽을 대상으로 캐스팅이 하는것이 아닌 오른쪽의 할당된것을 대상으로 하자. 물론 케이스바이 케이스이다.
	//Student* p = (Person*)malloc(sizeof(Person));		//위의것과는 별반 다른게 없지만 최소한 컴파일러가 경고는 내준다.
	Student* p = MALLOC(Person);		//위의것과는 별반 다른게 없지만 최소한 컴파일러가 경고는 내준다.
	p->age = 20;
	getchar();
	p->id = 20190201;
}
// 컴파일러의 경고는 모두 무시하지 말고 해결하자.