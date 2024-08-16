#include <stdio.h>

void main()
{
#pragma region 반복문

	// 프로그램 내에서 특정한 작업을 반복적으로 수행하는 명령문


#pragma endregion
#pragma region 증감연산자
	// 전위 증감 후위증가
	//	int x = 0;
	//	int result = ++x;
	//	printf(" % d\n", result);
	//	int result = --x;
	//	printf(" % d\n", result);
	//	int result = x++;
	//	printf(" % d\n", result);
	//	int result = x--;
	//	printf(" % d\n", result);
#pragma endregion
#pragma region for문
	//초기식 연산하여 조건식의 결과에 따라 특정한 횟수만큼 반복하는 반복문

	//	for (int i = 0;i < 10;i++) {
	//		printf("Hello World %d\n",i+1);
	//	}
#pragma endregion
#pragma region (1)부터 n까지의  합

	//		int sum = 0;
	//		int n = 10;
	//		for (int i = 1;i < n + 1;i++) {
	//			sum += i;
	//		}
	//		printf("%d\n", sum);
#pragma endregion
#pragma region while문
	//특정 조건을 만족할 때까지 주어진 명령문을 실행하는 반복문

	//		int count = 5;
	//		while (count > 0) {
	//			printf("Game Start\n");
	//			count--;
	//		}
#pragma endregion
#pragma region do-while

	//조건과 상관없이 한번 작업 수행하고 조건에 따라 명령문 실행
#pragma endregion
#pragma region continue문

	//해당 조건문만 실행하지 않고, 반복문은 이어서 실행하는 제어문
	//		for (int i = 0;i <= 5;i++) {
	//			if (i % 2 == 0) {
	//				continue;
	//			}
	//			printf("%d\n",i);
	//		}
#pragma endregion
#pragma region (2)중 for문
	//	for (int i = 0;i < 3;i++) {
	//		for (int j = 0;j < 3;j++){
	//			printf("★");
	//		}
	//		printf("☆\n");
	//	}
#pragma endregion
#pragma region 구구단
	//	for (int i = 1;i < 10;i++) {
	//		for (int j = 1;j < 10;j++) {
	//			printf("%d * %d = %d\n", i, j, i * j);
	//		}
	//	}
#pragma endregion

}