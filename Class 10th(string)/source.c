#include <stdio.h>

void main()
{
#pragma region 문자열
	//연속적인 메모리 공간에 저장된 문자 변수의 집합입니다.
	//문자열의 경우 포인터를 이용하여 문자열 상수를 가리키도록 할 수 있으며,
	//문자열 상수는 데이터 영역의 읽기 전용 공간에 저장되기 때문에 문자열의 값을 변경할 수 없습니다.
	//	const char* string = "alistar";
	//	char content[10] = { 0, };
	//	content[0] = 'p';
	//	//문자열은 공백도 함께 메모리 공간에 포함하여 크기가 결정되며, 마지막에 문자열의 끝을 알려주는 제어 문자가 추가됩니다.
	//	//문자열의 경우 서로 연속적인 메모리 공간으로 연결되어 있지만. 문자 배열 사이에 무효의 문자를 넣게 되면 무효의 문자까지만 문자열을 출력합니다.
	//	string = "janna";
	//	string = "Tower\0Defense";
#pragma endregion
#pragma region 범용 포인터
	//자료형이 정해지지 않은 상태로 모든 자료형을 저장할 수 있는 포인터
	//범용포인터는 메모리 주소에 접근해서 값을 변경할 수 없습니다.
	//	char grade = 'a';
	//	float attck = 32.5f;
	//	int health = 100;
	//	double defense = 3.3;
	//	void* vptr = NULL;
	//		vptr = &grade;
	//		*(char*) vptr = 'T';
	//		vptr = &defense;
	//		*(double*)vptr = 30;
	//		printf("%c\n",grade);
		//범용포인터로 변수의 메모리에 접근하려면 범용 포인터가 가리키는 변수의 자료형으로 형 변환 해주어야합니다.
#pragma endregion

#pragma region 펠린드롬
	//0 4, 1 3, 2
	char x[] = { "abccba" };
	int size = (sizeof(x) / sizeof(char)) - 1;
	int flag = 1;
	printf("%d\n", size);

	for (int i = 0;i < (size / 2);i++) {
		if (i == size - 1 - i) {
			flag = 0;
			break;
		}


	}
	if (flag == 1) {
		printf("회문입니다.\n");
	}
	else {
		printf("회문이 아닙니다.\n");
	}

#pragma endregion


}