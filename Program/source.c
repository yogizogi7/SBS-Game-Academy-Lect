#include <stdio.h>

void main()
{
#pragma region 오버플로우
	// 특정한 자료형이 표현할 수 있는 최댓값의 범위를 넘어서 연산을 수행하는 과정
	// 부호 없는 자료형에서도 똑같이 발생하며, 실수일 때 오버플로우가 발생하면 infinity라는 값으로 출력합니다.
	//char data = 129;
	//printf("%d\n",data);
#pragma endregion
#pragma region 언더플로우
	//특정한 자료형이 표현할 수 있는 최솟값의 범위를 넘어서 연산을 수행하는 과정
	//언더플로우는 부호 없는 자료형에서도 똑같이 발생하며, 실수일 때 언더플로우가 발생하면 0이라는 값으로 출력한다.


#pragma endregion

#pragma region 시프트 연산자
	//비트의 위치를 좌우로 특정한 값만큼 이동하는 연산자입니다.
	//int x = 3;
	//
	//printf("%d\n", x <<= 2); 
	//printf("%d", x >>=1);
#pragma endregion
#pragma region 실수저장법
	//float a=3.14;
	//printf("%f\n", a);
	//표준 출력 함수로 실수를 출력할 때 4바이트 크기의 실수형 자료형은 소수점 이하 6자리까지 표기
	// 8바이트 크기의 실수형 자료형은 소수점 이하 15자리까지 표기
#pragma endregion

}