#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int Add(int x, int y) {
	return x + y;
}
int Substract(int x, int y) {
	return x - y;
}
int multiply(int x, int y) {
	return x * y;
}
int devide(int x, int y) {
	return x / y;
}
int calculator(int x, int y, int(*fptr)(int, int)) {
	return fptr(x, y);
}
int main()
{
#pragma region �Լ� ������
	//�Լ��� �ּҰ��� �����ϰ� ����ų �� �ִ� �����Դϴ�.
	//�Լ� �����ʹ� �Լ��� ��ȯ���� �Ű� ������ Ÿ���� ��ġ�ؾ� �ϸ�, �Լ� �����͸� ����Ͽ� �������� �޸𸮸� �Ҵ��� �� �ֽ��ϴ�.
	//int (*fptr)(int, int);
	//fptr=Add;
	//printf(" %d\n", fptr(10, 20));
	//�Լ��� ȣ���� ������ ������ ����������, �Լ� �����ͷ� �Լ��� ȣ���ϰ� �Ǹ� ���α׷��� ����Ǵ� ������ �Լ��� �̸��� �ü���� �����Ͽ� �Լ��� ȣ���� �� �ֽ��ϴ�.

	//printf("%d\n",calculator(5,5,multiply));
#pragma endregion
#pragma region rand �Լ�
	//0~32767 ������ ���� ���� ��ȯ�ϴ� �Լ��Դϴ�.
	//UTC �������� 1970�� 1�� 1�� 0�� 0�� 0�ʺ��� ����� �ð��� �ʷ� ��ȯ�ϴ� �Լ��Դϴ�.
	//srand(time(NULL));
	//int random = (rand()%10)+1;
	//
	//printf("%d\n", random);
#pragma endregion
#pragma region UP Down ����

	srand(time(NULL));
	int computer = (rand() % 50) + 1;
	int life = 5;
	while (1) {
		for (int i = 0;i < life;i++) {
			printf("��");
			if (i == life - 1) {
				printf("\n");
			}
		}
		int a;
		scanf_s("%d", &a);
		if (a == computer) {
			printf("Victory\n");
			break;
		}
		else if (a < computer) {
			printf("Computer�� ������ �۽��ϴ�\n");
			life--;
		}
		else {
			printf("Computer�� ������ Ů�ϴ�\n");
			life--;
		}
		if (life == 0) {
			printf("Defeat\n");
			break;
		}
	}
#pragma endregion


	return 0;
}