#include <stdio.h>
void main() {
	

#pragma region �ڷ��� ��ȯ
	//���� �ٸ� �ڷ����� ������ �ִ� �������� ������ �̷���� �� ������ �����ߴ� �ڷ����� �ٸ� �ڷ������� ��ȯ�ϴ� �����Դϴ�.

#pragma region �Ϲ��� ����ȯ
	// ���� �ٸ� �ڷ������� ������ �̷���� �� �ڷ����� ũ�Ⱑ ū �ڷ������� ��ȯ�Ǵ� ����
	//int integer = 10;
	//float decimal = 6.5f;
	//
	//float result = decimal + integer;
	//// printf("%f", result);
	//integer = decimal;
	//printf("%d\n", integer);
	//ǥ�� ������ ���� �����Ϳ� ǥ�� ������ ū �����͸� �����ϰ� �Ǹ� �Ϲ������� ������ �ս��� �߻��մϴ�.
#pragma endregion
#pragma region ����� ����ȯ
	// ������ �̷������ ���� ����ڰ� ���� �ڷ����� ��ȯ�ϴ� ����

	//	int health = 100;
	//	int damage = 3;
	//	float value = (float)health / damage;
	//	printf("%f\n", value);

	//������ �������� ������ �����ϰ� �Ǹ� ������ ��� ���� ���� �� �ֽ��ϴ�.
#pragma endregion

#pragma endregion

#pragma region ���� �� ���
	//�� �����ڸ� ����� ��, ������ �ּ����� �򰡷� ������ �����ϴ� ���� ����Դϴ�.
	//	int x = 1;
	//	if (x != 0 && ++x) {
	//		printf("AND ������\n");
	//	}
	//	printf("x ������ �� : %d\n", x);
#pragma endregion
#pragma region ��ȣ ���� �ڷ���

	//	unsigned int data = 0;
	//	data = 4294967295;
	//	printf("%u\n", data);
	//	data = -1;
	//	printf("%d\n", data);
#pragma endregion
#pragma region �ּ� ������
	// ������ �ּ� ���� ��ȯ�ϴ� ������
	// �������� �ּ� ���� �ش� �����Ͱ� ����� �޸��� ���� �ּҸ� �ǹ��ϸ� �޸� ������ 1����Ʈ�� ũ��� ���������ϴ�.
	//	int a = 10;
	//	printf("%p\n", &a);
#pragma endregion
#pragma region scanf�Լ�
	// ǥ�� �Է� �Լ��� ���� ������ �����͸� �پ��� ���Ŀ� ���� �Է����ִ� �Լ�
	// ǥ���Է��Լ��� �����͸� �Է��ϰ� �Ǹ� ���ۿ� �����͸� �����Ͽ��ٰ� �Է��ϴ� ���� ���� ���� ������ ���α׷��� ����
	int positionX = 0;
	scanf_s("%d", &positionX);
	printf("%d\n", positionX);

	//ǥ�� �Է� �Լ��� �Է��� ������ ������ ���� �۾����� �Ѿ �� �����ϴ�.
#pragma endregion

}