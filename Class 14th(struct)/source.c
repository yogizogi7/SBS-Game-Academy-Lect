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
#pragma region ����ü

	//�������� ������ �ϳ��� �������� ����ȭ�� ���� �ϳ��� ��ü�� �����ϴ� ���Դϴ�.

	//����ü�� �����ϱ� ���� ����ü�� �޸� ������ �������� �����Ƿ�, ����ü ���ο� �ִ� �����͸� �ʱ�ȭ�� �� �����ϴ�.

	//	struct Unit unit;
	//	unit.attack = 32.5f;
	//	unit.experience = 1075.75;
	//	unit.grade = 'B';
	//	unit.health = 100;
	//	printf("%f %d %c %lf\n",unit.attack,unit.health,unit.grade,unit.experience);
	//	struct Unit marine = { 'A',60,6.5f,36.5 };
	//	printf("%f %d %c %lf\n", marine.attack, marine.health, marine.grade, marine.experience);
	//����ü�� �ִ� �����͸� �ʱ�ȭ�� �� ���ʿ� �ִ� �����Ͱ� ����ü�� �ִ� ��� ������ ������ �ʱ�ȭ�� �����մϴ�.
#pragma endregion
#pragma region �� �� ���� �Ÿ�

		//	struct Character Player = {1,1};
		//	struct Character Enemy = {3,3};
		//	float distance=sqrt((Player.x-Enemy.x)* (Player.x - Enemy.x)+ (Player.y - Enemy.y) * (Player.y - Enemy.y));
		//	if (distance <= 5) {
		//		printf("���� ������ ���Խ��ϴ�.\n");
		//	}
		//	else {
		//		printf("���� ������ ������ �ʾҽ��ϴ�.\n");
		//	}
		//	
#pragma endregion

	return 0;
}