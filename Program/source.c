#include <stdio.h>

void main()
{
#pragma region 상수 지시 포인터

	//상수로 선언한 포인터는 해당 변수의 값을 변경할 수 없지만
	//다른 변수의 주소는 가리킬 수 있습니다.

	//	int a = 10;
	//	int b = 20;
	//	const int* ptr = NULL;
	//	ptr = &a;
	//	printf("%d\n", *ptr);
	//	ptr = &b;
	//	printf("%d\n",*ptr);
#pragma endregion
#pragma region 포인터 상수
	//포인터를 상수로 선언하여 포인터 변수가 가리키고 있는 주소에
	//존재하는 값을 변경할 수 없도록 설정할 수 있습니다.
	//	int x = 10, y = 20;
	//	int* const cptr = &x;
	//	*cptr = 99;
	//	printf("%d\n",x);
#pragma endregion
#pragma region 배열
	//같은 자료형의 변수들로 이루어진 유한 집합입니다.
	//	int array[5];
	//	printf("%d\n",sizeof(array));
	//	//배열의 경우 첫 번째 원소는 0부터 시작
	//	int size = sizeof(array)/4;
	//	printf("%d\n", size);
	//	//배열은 원하는 원소에 원하는 값을 저장할 수 있으며, 
	//	//배열의 크기는 컴파일이 되는 시점부터 고정된 메모리 공간을 가지게 됩니다.
	//	for (int i = 0;i < size;i++) {
	//		array[i] = (i + 1) * 10;
	//		printf("%d\n", array[i]);
	//	}
	//	
	//int list[] = {1,2,3,4,5};
	//for (int i = 0;i < sizeof(list)/4;i++) {
	//			list[i] = (i + 1) * 10;
	//			printf("%d\n", list[i]);
	//		}
	//배열의 크기는 생략할수 있으며 초기화 목록에서 설정한 요소에 따라 배열의 크기가 결정됩니다.

	//	int table[] = {1,2,3};
	//	printf("%p\n", table);
	//	printf("%p\n", &table[0]);
	//	int* p = NULL;
	//	p = &table;
	//	p = p + 1;//int라서 4만큼 증가
	//	*p = 135;
	//	printf("%d\n", table[1]);
	//배열은 연속적인 메모리 공간을 가지며 배열의 이름은 배열의 시작 주소를 가리킵니다.
#pragma endregion

}