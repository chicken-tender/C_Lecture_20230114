#include <stdio.h>

struct Student {
	char name[30];
	int age;
	int gender; // 0�� ����, 1�� ����
	int grade;
};

int main() {
	// ����ü? ������ �����͸� �ϳ��� �����ִ� ���
	// �迭���� �� ���� ���...
	// ����ü ������ ����� �����Ͻ� ���� .(period) �����ڸ� ���
	struct Student st;
	st.name[0] = 'M';
	st.name[1] = 'O';
	st.name[2] = 'M';
	st.name[3] = '\0';

	st.age = 30;
	st.gender = 0;
	st.grade = 3;

	printf("�̸� : %s\n���� : %d\n���� : %d\n�г� : %d\n", st.name, st.age, st.gender, st.grade);
	
	// 100���� �л��� ��������?
	struct Student strArray[100];

	return 0;
}