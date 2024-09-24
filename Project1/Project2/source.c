#include <stdio.h>
#include "gamemanager.h"
#define SIZE 5
void main() {
#pragma region 포인터
	// 메모리의 주소 값을 저장할 수 있는 변수입니다.
	//변수의 주소는 프로그램이 실행될 때마다 변경되며,
	// 포인터가 가리키는 메모리 공간의 자료형은 알 수 없으므로 포인터가 기리키는
	//메모리의 자료형을 선언해주어야합니다.
	
	//int x = 10;
	//int y = 20;
	//float z = 30.0f;
	//int* ptr=NULL;
	//int* yptr = NULL;
	//
	//ptr = &x;
	//*ptr = 300;
	//yptr = &y;
	//*yptr = 99;
	////printf("%p\n", &y);
	//
	//ptr = &z;
	//*ptr = 100;
	////포인터 변수를 저장하기 위해 주소값을 저장할 변수의 자료형과 포인터 변수의 자료형이
	////일치해야 합니다.
	//printf("%p\n", &ptr);
	//printf("%f\n", z);
	////printf("%p\n", ptr);
	//printf("%p\n", &x);
	//printf("%d\n", x);
	// 포인터 변수도 자신의 메모리 공간을 가지고 있으며
	// 포인터 변수에 변수의 주소를 저장하게 되면
	//해당 변수의 시작 주소를 가리키게 됩니다.

	//printf("%d\n", sizeof(ptr));
	//포인터 변수의 크기는 중앙 처리 장치가 한 번에 처리할 수 있는 크기로 정해지며
	//한 번에 처리할 수 있는 크기는 운영체제에 따라 크기가 결정됩니다.
#pragma endregion
#pragma region 전처리기
	//프로그램이 컴파일 되기 전 프로그램에 대한 사전 처리를 하는 과정
	//전처리기는 컴파일러가 아닌 선행처리기에 의해서 처리되는 문장이기에
	//명령문 끝에 ";"를 사용하지 않습니다.

	//	time = 15.0f;
	//	printf("%f\n",time);
#pragma endregion
#pragma region 매크로
	//프로그램 내에서 특정한 데이터가 문자열로 정의되고 처리되는 과정입니다.
	//매크로의 경우 자료형이 존재하지 않으므로 메모리 공간을 가지고 있지 않습니다.
	//printf("%d\n", SIZE);
	////매크로의 과정은 컴파일 이전에 실행되며 각 매크로가 실행될 때
	////매크로의 대체 목록을 넣어야 하므로 프로그램의 크기가 커지게 됩니다.
	//for (int i = 0; i < SIZE; i++) {
	//	printf("update\n");
	//}
#pragma endregion

}