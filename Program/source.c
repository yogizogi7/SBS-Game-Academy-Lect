#include <stdio.h>

void main()
{
#pragma region 조건문
	// 어떤 조건이 주어질 때 해당 조건에 따라 동작을 수행하도록 실행하는 명령문
#pragma region 관계 연산자
	//두 개의 피연산자의 값을 비교하여 그 결과를 0 또는 1이라는 값으로 나타내는 연산자
	//int con1 = 10 > 0;
	//int con2 = 10 < 0;
	//int con3 = 10 >= 0;
	//int con4 = 10 >= 0;
	//int con5 = 10 == 10;
	//int con6 = 10 != 10;
	//printf("%d\n",con1);
	//printf("%d\n", con2);
	//printf("%d\n", con3);
	//printf("%d\n", con4);
	//printf("%d\n", con5);
	//printf("%d\n", con6);
#pragma endregion
#pragma region if문
	//어떤 특정한 조건을 비교하여 조건이 맞다면 실행되는 명령문입니다.
	
#pragma endregion
#pragma region else if문
	//if문의 조건이 틀릴 때 조건이 맞다면 실행되는 명령문

#pragma endregion
#pragma region else문
	//if, else if 조건 다 틀리면 실행되는 명령문
	//if문에 연결된 모든 조건문의 조건이 맞을 때 가장 위에 있는 조건문만 실행

#pragma endregion
#pragma region Switch문
	//어떤 결과에 따라 그 결과부터 실행되는 명령문

	// char g = 'a';
	// switch(g) {
	// case 'a':printf("a");
	// 	break;
	// case 'b':printf("b");
	// 	break;
	// case 'c':printf("c");
	// 	break;
	// default:printf("예외");
	// 	break;
	// }
	//스위치 문의 경우 조건에 해당하는 값에 따라 조건의 위치로 이동
	//break문 특정한 지점에서 분기를 탈출하는 제어문 만나는 순간  진행하고 있는 위치에서 종료
#pragma endregion

#pragma region 논리연산자
	// int price = 1000, speed = 10;
	// if (price >= 0 && speed >= 0) {
	// 	printf("and\n");
	// }
	// 
	// 
	// if (price >= 0 || speed <= 0) {
	// 	printf("or\n");
	// }
	// ;
	// 
	// if (!(price >= 0 )) {
	// 	printf("not");
	// }
#pragma endregion

#pragma region 사분면

	//int x=-1,y=-2;
	//
	//	if (x == 0 && y == 0) {
	//		printf("원점입니다\n");
	//	}
	//	else if (x==0) {
	//		printf("y절편입니다\n");
	//	}
	//	else if (y == 0) {
	//		printf("x절편입니다\n");
	//	}
	//	else if (x>0) {
	//		if (y>0) {
	//			printf("1사분면입니다\n");
	//		}
	//		else {
	//			printf("4사분면입니다\n");
	//		}
	//	}
	//	else if (x < 0) {
	//		if (y > 0) {
	//			printf("2사분면입니다\n");
	//		}
	//		else {
	//			printf("3사분면입니다\n");
	//		}
	//	}
#pragma endregion

#pragma endregion

}