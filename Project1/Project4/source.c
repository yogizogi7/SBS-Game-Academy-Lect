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
	//�̹� ������ �ִ� ���� ����ڰ� ���ϴ��̸����� ���Ӱ� �����ϴ� ���Դϴ�.


#pragma endregion
#pragma region ��� ������
	//�̹� ������ �޸� ������ ����Ű�� �������Դϴ�.

#pragma endregion
#pragma region ������
	//�̸��� ����� ��� ������ ��Ÿ���� �� �����Դϴ�.
	//�������� �߰��� �ִ� ���� �ٲٰ� �Ǹ� �״����� �ִ� ���� �߰��� �ٲ� ����������
	//+1�� ���� ���Դϴ�.
#pragma endregion
	enum Vain keyboard;
	int i = 100;
	while (i>0) {
		scanf_s("%d", &keyboard);
		switch (keyboard)
		{
		case Q:printf("������\n");
			i = i - 10;
			printf("%d\n",i);
			break;
		case W:printf("��ȭ��\n");
			i = i - 10;
			printf("%d\n", i);
			break;
		case E:printf("����\n");
			i = i - 20;
			printf("%d\n", i);
			break;
		case R:printf("������ �ϰ�\n");
			i = i - 30;
			printf("%d\n", i);
			break;
			default:
				break;
		}
	}

	return 0;
}