#include <stdio.h>
// �Լ�? �ڵ带 �ۼ��� �� �ݺ��Ǵ� ��ɾ �ϳ��� ������ �����ִ� ���
// returnType : �Լ��� ���� ��ɾ ó���� ������� � dataType���� �����ٰ���?
// returnType�� ���� ���� ���ϰ��� ���ٴ� �̾߱� �̹Ƿ� void�� �����ϸ� ��.
// �Լ��� : �Լ��� ȣ���� �� ����ϴ� �̸�
// �Ű����� : �Լ��� ȣ���� �� ���޵� ���� ������ �Լ� ���η� ������ ���� ����(�Ű����� ������ ����)

// returnType �Լ���(�Ű�����) {��ɾ� ����}

// �Լ��� ����
// (1) ���뼺, (2) ��⼺, (3) �������� ������

void PrintMonster() {
	printf("Monster!\n");
	printf("Monster!\n");
	printf("Monster!\n");
}

// returnType�� ������ ���ϰ��� �ִٴ� �̾߱��, �Լ� ���ο� �ݵ�� return���� �־�� ��.
// return �� ������� �Լ��� �ܺη� �����ϴ� ����
int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

float div(int a, int b) {
	return a / (float)b;
}

int main() {
	PrintMonster();
	PrintMonster();

	int a = 20;
	int b = 30;

	int ret = add(a, b);
	printf("%d + %d = %d\n", a, b, ret);

	ret = sub(a, b);
	printf("%d - %d = %d\n", a, b, ret);

	ret = mul(a, b);
	printf("%d * %d = %d\n", a, b, ret);

	float fret = div(a, b);
	printf("%d / %d = %f\n", a, b, fret);

	return 0;
}