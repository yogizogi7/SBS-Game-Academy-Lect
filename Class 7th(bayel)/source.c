#include <stdio.h>

void main()
{
#pragma region ��� ���� ������

	//����� ������ �����ʹ� �ش� ������ ���� ������ �� ������
	//�ٸ� ������ �ּҴ� ����ų �� �ֽ��ϴ�.

	//	int a = 10;
	//	int b = 20;
	//	const int* ptr = NULL;
	//	ptr = &a;
	//	printf("%d\n", *ptr);
	//	ptr = &b;
	//	printf("%d\n",*ptr);
#pragma endregion
#pragma region ������ ���
	//�����͸� ����� �����Ͽ� ������ ������ ����Ű�� �ִ� �ּҿ�
	//�����ϴ� ���� ������ �� ������ ������ �� �ֽ��ϴ�.
	//	int x = 10, y = 20;
	//	int* const cptr = &x;
	//	*cptr = 99;
	//	printf("%d\n",x);
#pragma endregion
#pragma region �迭
	//���� �ڷ����� ������� �̷���� ���� �����Դϴ�.
	//	int array[5];
	//	printf("%d\n",sizeof(array));
	//	//�迭�� ��� ù ��° ���Ҵ� 0���� ����
	//	int size = sizeof(array)/4;
	//	printf("%d\n", size);
	//	//�迭�� ���ϴ� ���ҿ� ���ϴ� ���� ������ �� ������, 
	//	//�迭�� ũ��� �������� �Ǵ� �������� ������ �޸� ������ ������ �˴ϴ�.
	//	for (int i = 0;i < size;i++) {
	//		array[i] = (i + 1) * 10;
	//		printf("%d\n", array[i]);
	//	}
	//	
	//int list[] = {1,2,3,4,5};
	//for (int i = 0;i < sizeof(list)/4;i++) {
	//			list[i] = (i + 1) * 10;
	//			printf("%d\n", list[i]);
	//		}
	//�迭�� ũ��� �����Ҽ� ������ �ʱ�ȭ ��Ͽ��� ������ ��ҿ� ���� �迭�� ũ�Ⱑ �����˴ϴ�.

	//	int table[] = {1,2,3};
	//	printf("%p\n", table);
	//	printf("%p\n", &table[0]);
	//	int* p = NULL;
	//	p = &table;
	//	p = p + 1;//int�� 4��ŭ ����
	//	*p = 135;
	//	printf("%d\n", table[1]);
	//�迭�� �������� �޸� ������ ������ �迭�� �̸��� �迭�� ���� �ּҸ� ����ŵ�ϴ�.
#pragma endregion

}