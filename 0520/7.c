#include <stdio.h>
//변하지 않는 객체에 대해서는 const로 선언하라!
typedef struct {
	int x, y;
}Point;

//void printPoint(Point p) {
void printPoint(const Point *p) {	
	printf("(%d,%d)\n", p -> x, p -> y);
	//모든 오류는 컴파일타임에 오류가 나게 해야한다. 
	//그래야 추적이 쉽다.
}

int main() {
	Point p = { 0, };
	printPoint(&p);
}