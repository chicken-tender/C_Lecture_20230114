#include <stdio.h>
// �Լ��� ȣ���� �� ���� ���޹���� c���� �� ������.
// (1) call by value : ���� ���� ȣ��
// (2) call by address : �ּҿ� ���� ȣ��(argument �ּҰ��� ������ �����ϰڴ�.)

// (1) call by value
int add(int a, int b) { // �Լ��� ȣ���� �� ���޵� ���� �޴� ������ �Ű�����(parameter)
	return a + b;
}

void swap(int a, int b) {
	int temp = 0;
	temp = a;
	a = b;
	b = temp;
}

// �ּҰ��� �Լ��� ���ڰ����� ���� (call by address)
void Pswap(int* pa, int* pb) {
	int temp = 0;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

int main() {
	int a = 20;
	int b = 30;
	int ret = add(a, b); // �Լ��� ȣ���� �� �����ϴ� ���� ����(argument)
	swap(a, b);
	printf("a = %d, b = %d\n", a, b);

	Pswap(&a, &b); // a�ּҰ�, b�ּҰ��� �����ϴ� ���� call by address��� ��.
	printf("a = %d, b = %d\n", a, b);

	return 0;
}