#include <stdio.h>
#include <stdlib.h>
struct GameObject
{
	char grade; //1byte
	double scale;//8byte
	int x;//4byte

	//����ü ũ���� ��� ��� ������ ������ ���� �޸��� ũ�Ⱑ �ٸ��� ������ �� ������
	//����ü ũ�⸦ �����ϴ� ���´� �⺻ �ڷ������θ� �����˴ϴ�.
};
inline void onCollisionEnter() {
	printf("onCollisionEnter\n");
}
struct Node {
	int data;
	struct Node* next;
};
int main(){


#pragma region ����Ʈ �е�
// ��� ������ �޸𸮿��� CPU�� ���� �� �� ���� ���� �� �ֵ���
//�����Ϸ��� ���������� ��Ͽ� ���߾� ����Ʈ�� �е����ִ� ����ȭ �۾�
	//struct GameObject gameObject;
	//printf("%d\n", sizeof(gameObject));
	//����ü�� ũ��� ����ü�� �����ϴ� ��� �߿��� ũ�Ⱑ
	//���� ū �ڷ����� ����� �ǵ��� �����մϴ�.

#pragma endregion
#pragma region �ζ��� �Լ�
	//�Լ��� ȣ���ϴ� ��� �Լ��� ȣ��Ǵ� ��ġ���� �Լ��� �ڵ带
	//�����Ͽ� �����ϴ� ����� �Լ��Դϴ�.

	//�ζ��� �Լ��� �Լ��� ȣ���ϴ� ������ �����Ƿ� ó�� �ӵ��� ��������
	//�ζ��� �Լ��� ���� ����ϰ� �Ǹ� �Լ��� �ڵ尡 ����Ǳ� ������
	//���� ������ ũ�Ⱑ Ŀ���� �˴ϴ�.
	//onCollisionEnter();
#pragma endregion
#pragma region ����ü ������
	//struct Node* node=malloc(sizeof(struct Node));
	//node->data = 100;
	//printf("%d\n", node->data);
	//free(node);


#pragma endregion
#pragma region �ڱ���������ü
	struct Node* node1 = malloc(sizeof(struct Node));
	struct Node* node2 = malloc(sizeof(struct Node));
	struct Node* node3 = malloc(sizeof(struct Node));
	node1->data = 10;
	node1->data = 20;
	node1->data = 30;
	node1->next = &node2;
	node2->next = &node3;
	node3->next = NULL;
	struct Node* currentNode = malloc(sizeof(struct Node));
	for (int i = 0; i < 3; i++) {
		if (i == 0) {
			currentNode->data = node1->data;
			currentNode = &node1->next;
		}
		else {
			currentNode
		}
	}

	free(node1);
	free(node2);
	free(node3);
#pragma endregion

	return 0;
}