//Circle.h
#ifndef _CIRCLE_H_
#define _CIRCLE_H_

inline int square(int x) {	
	//인라인은 모두 치환해주고 더이상 이 함수가 없을때
	//컴파일러가 지운다. 
	//그래서 인라인은 무조건 헤더에 정의가 되어있어야한다.
	return x * x;
}
double getCircleArea( int r);

#endif

//헤더파일 설계 시 , 주의할 점 
//1. 인클루드 가드를 설정해야합니다.
//2. 객체(변수)나 함수는 정의를 하시면 안됩니다.
//3. 인라인 함수나 매크로는 헤더 파일에 정의해야 합니다.
//단, 타입에 대한 정보는 헤더 파일에 정의 할수 있습니다.