#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	short value_user;
	printf("�������� �Է��ϼ���.(1~100):  ");
	scanf("%hd", &value_user);

	srand(time(NULL));
	short value_computer = rand()%101;
	
	if (value_user == value_computer) {
		printf("�����մϴ�! ���߼̽��ϴ�!");
	}
	else{printf("������ %hd, ��ǻ�ʹ� %hd, ����� ��ǻ�� �¸� �Դϴ�.\n", value_user, value_computer);
	}
	return 0;
}