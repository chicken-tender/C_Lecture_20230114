#include <stdio.h>
// 함수? 코드를 작성할 때 반복되는 명령어를 하나의 단위로 묶어주는 기능
// returnType : 함수가 묶은 명령어를 처리한 결과값을 어떤 dataType으로 돌려줄건지?
// returnType이 없는 경우는 리턴값이 없다는 이야기 이므로 void로 지정하면 됨.
// 함수명 : 함수를 호출할 때 사용하는 이름
// 매개변수 : 함수를 호출할 때 전달된 값을 가지고 함수 내부로 가지고 오는 변수(매개변수 없으면 공란)

// returnType 함수명(매개변수) {명령어 나열}

// 함수의 장점
// (1) 재사용성, (2) 모듈성, (3) 가독성이 좋아짐

void PrintMonster() {
	printf("Monster!\n");
	printf("Monster!\n");
	printf("Monster!\n");
}

// returnType이 있으면 리턴값이 있다는 이야기고, 함수 내부에 반드시 return문이 있어야 함.
// return 문 결과값을 함수의 외부로 전달하는 역할
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