#include <stdio.h>
void function() {
	printf("Execute\n");
}
void coordinate(int x, int y) {
	printf("�Ű� ���� x�� ���� : %d\n", x);
	printf("�Ű� ���� y�� ���� : %d\n", y);
}
int damage(int damage) {
	damage = damage * 5;
	return damage;
}
void swap(int* a, int* b) {
	int list = *a;
	*a = *b;
	*b = list;
}
void main()
{
#pragma region �Լ�
	//�ϳ��� Ư���� ������ �۾��� �����ϱ� ���� ���������� ����� �ڵ��� �����Դϴ�
	//function();
	//�Լ��� ��� �ڷ����� ��ȯ�ϴ� ���� ���°� ��ġ���� ������ ���ϴ� ���� ���� �� ������,
	//���� �̸��� �Լ��� �ߺ����� ������ �� �����ϴ�.
#pragma region �Ű�����
	//�Լ��� ���ǿ��� ���޹��� �μ��� �Լ����η� �����ϱ� ���� ����ϴ� ����
	//�Ű������� �Լ� ���ο����� ������ �̷������ �Լ��� ����Ǹ� �޸𸮿��� ������� �������� �Ű������� ������ �� �ֽ��ϴ�.
	//coordinate(3, 4);
	//printf("�Ű� ���� x�� ���� : %d\n", damage(3));
#pragma endregion
#pragma region �μ�
	//�Լ��� ȣ��� �� �Ű� ������ ������ ���޵Ǵ� ��
	//�μ��� ��� �Լ��� �ִ� �Ű� ������ ���� ���� ������ �� �ִ� �μ��� ���� �����Ǹ�
	//���� �����ϴ� �μ��� ���� ���޹޴� �Ű������� �ڷ����� ���� ��ġ�ؾ��մϴ�.
	//int a = 10;
	//int b = 20;
	//swap(&a, &b);
	//
	//printf("%d %d\n",a,b);
#pragma endregion

#pragma endregion


}