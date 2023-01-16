#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	short value_user;
	printf("정수값을 입력하세요.(1~100):  ");
	scanf("%hd", &value_user);

	srand(time(NULL));
	short value_computer = rand()%101;
	
	if (value_user == value_computer) {
		printf("축하합니다! 맞추셨습니다!");
	}
	else{printf("유저는 %hd, 컴퓨터는 %hd, 결과는 컴퓨터 승리 입니다.\n", value_user, value_computer);
	}
	return 0;
}