#include <stdio.h>

int main() {
	// �迭�� ��ҿ� �����ϴ� ����� �� ���� �Դϴ�.
	// (1) �迭�� : array[0]
	// (2) �����ͽ� : *(array + 0)
	// �� ���� �����ϴ�. (== ���� �ٸ��� ������� ����.)
	int array[10];

	int* parray = array;

	for (int i = 0; i < 10; i++) {
		*(parray + i) = i;
	}
	for (int i = 0; i < 10; i++) {
		printf("*(parray + %d) = %d\n", i, *(parray + i));
	}

	return 0;
}