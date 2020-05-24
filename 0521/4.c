#include<stdio.h>

void printArray(const int* arr, int len) {
	for (int i = 0; i < len; i++) {
		printf("%d", arr[i]);
	}
		printf("\n");
}
int main() {
	int cnt = 10;
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };

	printArray(arr, cnt);

	//위의 배열 자료구조에서 0번째 원소를 제거한다고 가정합니다.
	--cnt;
	//arr[0] = arr[cnt];	//이건 loop를 돌기때문에 (다 하나씩 앞으로 땡기므로) 성능이 현저히 안좋아진다.
	//memcpy(arr, arr + 1, sizeof(int) * cnt);//이게 훨씬 빠르다
	memmove(arr, arr + 1, sizeof(int) * cnt);
	//하지만 이걸쓸순없다 왜냐면 메모리카피는 같은 메모리에 대해서 복사를 하지 말아야한다. 중첩되는부분을 덮어쓸수있기 때문이다.
	//두개의 포인터가 하나의 대상을 가리키면 안된다.(restrict 가 있는것은 같은 메모리에 두개의 포인터를 넣으면 안됨)
	//이때 사용하는 것이 memmove이다. 중간에 임시 버퍼에 넣어서 복사하기 때문에 데이터의 손실이 없어서 두개의 포인터에도 안전하다.
	//비주얼스튜디오에서는 restrict를 안썻기 때문에 memcpy도 사용가능하긴 하다.
	//restrict는 그럼 무슨뜻일까? 
	//restrict: 포인터에만 사용할 수 있는 한정자로 그 포인터가 객체에 접근할 수 있는 유일한 수단임을 컴파일러에게 알려주는 역할을 합니다.
	//포인터가 restrict 키워드로 한정되면 그 포인터가 가리키는 객체는 그 포인터만 접근 가능하므로 컴파일러가 좀 더 적극적인 최적화를 수행할수 있습니다.
	//만약 이 한정자를 사용한 포인터에 대하여 같은 객체를 가리키면참조) 그 결과는 미정의 동작입니다.
	printArray(arr, cnt);
}