#include <stdio.h>
// �迭 : ������ ������Ÿ���� ������ ������ �ʿ��� �� ����ϴ� ���
// �迭�� ����� �迭���� ����� �� �ֽ��ϴ�.
// �迭���� ����� �� �ֱ� ������ �ݺ����� ����� �� �ֽ��ϴ�.

// DataType �迭��[�迭������];
// �迭�� �Ҵ���� �迭�� �޸𸮰����� ���ι��� �ּҰ�
int main() {
	int array[100]; // int(4byte) * 100 = �� 400byte

	for (int i = 0; i < 100; i++) {
		array[i] = i+1;
	}

	for (int i = 0; i < 100; i++) {
		printf("array[%d] = %d\n", i, array[i]);
	}
	return 0;
}