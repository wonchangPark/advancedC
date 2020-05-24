#include<stdio.h>
#define BUFSZ (10)

int main() {
	int buf[BUFSZ];

	//int* cur = buf;
	//while (cur < ((char*)buf + sizeof(buf)))
	//포인터는 보통 대상체의 타입과 같은 것으로 사용해야하는데
	//이예제의 경우 버퍼의 시작주소에서부터 특정 길이만큼을 
	//사용할때는 바이트단위로 만들어준다.
	//	*cur++ = 0;

	for (int i = 0; i < BUFSZ; i++)
		buf[i] = 0;//이건 또 루프가 걸리니까

	//memset()을 이용한다.
	for (int i = 0; i < BUFSZ; i++)
		printf("buf[%d] = %d\n", i, buf[i]);
}
//제목: [렉토피아] 숙제(숙제 내용): 이름
//		[렉토피아] 기술문서(기술문서제목): 이름
//파일명: 숙제_숙제명_이름.
//		  기술문서_주제명_이름.