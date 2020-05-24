//Circle.c
#include"Circle.h"
//static int square(int x) {	
//외부에서 호출하지 않게 하기 위해서는 static 키워드를 써서 
//심볼이 일치하지 않아서 링커가 못찾게 해야한다.
//	return x * x;
//}

double getCircleArea(int r) {	
	//getCircleArea는 외부에서도 언제나 접근 가능하다. 
	//사실 외부 연결성을 주려면 external를 붙여줘야하지만 
	//디폴트 속성이 external이기때문에 안붙여도 된다.
	return square(r) * 3.14;	
	//여기에서는 그러면 왜 되는거냐면 static은 외부와만 
	//단절하는것이지 내부에서는 해당 심볼을 연결해준다.
}

//정리!! 
//연결성(linkage): 서로 다른 모듈에서 심볼을 연결하는 개념
//1. 내부 연결성(internal linkage): 해당 심볼에 대하여 static 으로 선언 
//	-> 한 파일 내에서 객체나 함수에 대한 연결은 선언된 파일 내부로 국한
//2. 외부 연결성(external linkage): 원칙적으로는 해당 심볼에 대하여 extern을 사용해야 하나 static을 사용하지 않으면 기본적으로 외부 연결성으로 선언됨.

//파일의 범위를 넘어서까지 사용되지 않을 객체나 함수에 대해서는 반드시 static 키워드로 선언해야 합니다.
//이걸 알아야 헤더파일에 무엇을 넣어야할지 말아야할지 알수있게 된다.