#include <stdio.h>
#include <stdlib.h>
int main()
{
 #pragma region ������ ��ȿ ����
	//������ ���� ��ġ�� ���� �ش� ������ �޸� ��ȯ �ñ�,
	//�ʱ�ȭ ����, ����Ǵ� ��Ҹ� �ǹ��ϴ� �����Դϴ�.

#pragma region ��������
	//�Լ� ���� ����� ������ �Լ� �������� ����� �� ������
	//�Լ��� ����Ǹ� �޸𸮿��� ������� Ư¡�� ������ ����
	//	int data = 10;
	//	{
	//		int data = 20;
	//		printf("%d\n", data);
	//	}
	//	printf("%d\n", data);
#pragma endregion
#pragma region ��������
	//�Լ� �ܺο� ����� ������ ���α׷� ������ ��� ����������
	//������ �� ������, ���α׷��� ����� �� �޸𸮿��� �����ǰ�,
	//���α׷��� ����� �� �޸𸮿��� ������� Ư¡�� ������ �ֽ��ϴ�.
#pragma endregion
#pragma region ��������

	//���α׷��� ����� �� �� �ѹ��� �ʱ�ȭ�� �̷������ ���α׷��� ����� �� �޸𸮿�
	// �����ǰ�, ���α׷��� ����� �� �޸𸮿��� �����Ǵ� Ư¡�� ������ �����Դϴ�.
#pragma endregion

#pragma endregion
#pragma region ���� �Ҵ�
	//���α׷��� ���� �߿� �ʿ��� ��ŭ �޸𸮸� �Ҵ��ϴ� �۾��Դϴ�.
	//���� �Ҵ��� ���� �ð��� ���������� �޸��� ũ�⸦ �����ų �� ������,
	// �������� �޸��� ũ�Ⱑ �Ҵ��� �� ����Ʈ ������ �����մϴ�.

	int *ptr = malloc(4);
	int* dynamicArray = (int*)malloc(12);
	//�޸𸮸� ���� �Ҵ��� �� �ּҸ� ���� �����ͷ� ��ȯ�ϱ� ������
	// �ڷ����� ��ȯ�� ���� �޸𸮿� �Ҵ��ؾ� �մϴ�.
	if (ptr != NULL) {
		*ptr = 99;
		printf("%d\n", *ptr);
	}
	dynamicArray[0] = 10;
	dynamicArray[1] = 20;
	dynamicArray[2] = 30;
	free(dynamicArray);
	dynamicArray = (int*)malloc(20);
	for (int i = 0;i < 5;i++) {
		dynamicArray[i] = i;
		printf("%d %d\n",i,dynamicArray[i]);
	}
	//�������� �Ҵ��� �޸𸮴� �� ������ �����Ǿ� �ֱ� ������
	//����� ������ ���� �������־�� �մϴ�.
	free(ptr);
	free(dynamicArray);
#pragma endregion


	return 0;
}