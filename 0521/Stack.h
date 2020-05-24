//Stack.h
#ifndef _STACK_H_
#define _STACK_H_

struct __Stack;	//스택 구조체를 선언만 한것. 불완전한 상태
typedef struct __Stack* Stack;	//불완전한 타입으로 포인터를 선언
//즉 포인터를 이용해서 정보를 은닉 한다.
//불완전한 타입을 만듬으로서 사용자가 __Stack의 타입이 구조체라는것만 알고 
//나머지 안의 내용은 알 수가 없다. 따라서 정보 은닉이 가능하게 된다.
Stack createStack(int size);

#endif
