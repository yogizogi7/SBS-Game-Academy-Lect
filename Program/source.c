#include <stdio.h>

void main()
{
#pragma region ���ڿ�
	//�������� �޸� ������ ����� ���� ������ �����Դϴ�.
	//���ڿ��� ��� �����͸� �̿��Ͽ� ���ڿ� ����� ����Ű���� �� �� ������,
	//���ڿ� ����� ������ ������ �б� ���� ������ ����Ǳ� ������ ���ڿ��� ���� ������ �� �����ϴ�.
	//	const char* string = "alistar";
	//	char content[10] = { 0, };
	//	content[0] = 'p';
	//	//���ڿ��� ���鵵 �Բ� �޸� ������ �����Ͽ� ũ�Ⱑ �����Ǹ�, �������� ���ڿ��� ���� �˷��ִ� ���� ���ڰ� �߰��˴ϴ�.
	//	//���ڿ��� ��� ���� �������� �޸� �������� ����Ǿ� ������. ���� �迭 ���̿� ��ȿ�� ���ڸ� �ְ� �Ǹ� ��ȿ�� ���ڱ����� ���ڿ��� ����մϴ�.
	//	string = "janna";
	//	string = "Tower\0Defense";
#pragma endregion
#pragma region ���� ������
	//�ڷ����� �������� ���� ���·� ��� �ڷ����� ������ �� �ִ� ������
	//���������ʹ� �޸� �ּҿ� �����ؼ� ���� ������ �� �����ϴ�.
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
		//���������ͷ� ������ �޸𸮿� �����Ϸ��� ���� �����Ͱ� ����Ű�� ������ �ڷ������� �� ��ȯ ���־���մϴ�.
#pragma endregion
#pragma region �縰���
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
		printf("ȸ���Դϴ�.\n");
	}
	else {
		printf("ȸ���� �ƴմϴ�.\n");
	}

#pragma endregion


}