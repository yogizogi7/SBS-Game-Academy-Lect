#include <stdio.h>
#include <math.h>
struct Unit {
	char grade;
	int health;
	float attack;
	double experience;
};
struct Character {
	float x;
	float y;
};
int main()
{
#pragma region 구조체

	//여러개의 변수를 하나의 집합으로 구조화한 다음 하나의 객체를 생성하는 것입니다.

	//구조체를 선언하기 전에 구조체는 메모리 공간이 생성되지 않으므로, 구조체 내부에 있는 데이터를 초기화할 수 없습니다.

	//	struct Unit unit;
	//	unit.attack = 32.5f;
	//	unit.experience = 1075.75;
	//	unit.grade = 'B';
	//	unit.health = 100;
	//	printf("%f %d %c %lf\n",unit.attack,unit.health,unit.grade,unit.experience);
	//	struct Unit marine = { 'A',60,6.5f,36.5 };
	//	printf("%f %d %c %lf\n", marine.attack, marine.health, marine.grade, marine.experience);
	//구조체에 있는 데이터를 초기화할 때 왼쪽에 있는 데이터가 구조체에 있는 멤버 변수의 순서로 초기화를 진행합니다.
#pragma endregion
#pragma region 두 점 사이 거리

		//	struct Character Player = {1,1};
		//	struct Character Enemy = {3,3};
		//	float distance=sqrt((Player.x-Enemy.x)* (Player.x - Enemy.x)+ (Player.y - Enemy.y) * (Player.y - Enemy.y));
		//	if (distance <= 5) {
		//		printf("공격 범위에 들어왔습니다.\n");
		//	}
		//	else {
		//		printf("공격 범위에 들어오지 않았습니다.\n");
		//	}
		//	
#pragma endregion

	return 0;
}