#include <stdio.h>
#include <stdlib.h>
typedef unsigned int UINT;
enum Vain
{
	Q=1,
	W,
	E,
	R
};
int main() {

#pragma region typedef
	//이미 정해져 있는 예약어를 사용자가 원하는이름으로 새롭게 생성하는 것입니다.


#pragma endregion
#pragma region 허상 포인터
	//이미 해제된 메모리 영역을 가리키는 포인터입니다.

#pragma endregion
#pragma region 열거형
	//이름이 저장된 상수 집합을 나타내는 값 형식입니다.
	//열거형에 중간에 있는 값을 바꾸게 되면 그다음에 있는 값은 중간에 바꾼 값에서부터
	//+1씩 더한 값입니다.
#pragma endregion
	enum Vain keyboard;
	int i = 100;
	while (i>0) {
		scanf_s("%d", &keyboard);
		switch (keyboard)
		{
		case Q:printf("구르기\n");
			i = i - 10;
			printf("%d\n",i);
			break;
		case W:printf("은화살\n");
			i = i - 10;
			printf("%d\n", i);
			break;
		case E:printf("선고\n");
			i = i - 20;
			printf("%d\n", i);
			break;
		case R:printf("최후의 일격\n");
			i = i - 30;
			printf("%d\n", i);
			break;
			default:
				break;
		}
	}

	return 0;
}