#include <stdio.h>
// 함수를 호출할 때 인자 전달방식은 c언어는 두 가지다.
// (1) call by value : 값에 의한 호출
// (2) call by address : 주소에 의한 호출(argument 주소값의 공간에 접근하겠다.)

// (1) call by value
int add(int a, int b) { // 함수를 호출할 때 전달된 값을 받는 변수를 매개변수(parameter)
	return a + b;
}

void swap(int a, int b) {
	int temp = 0;
	temp = a;
	a = b;
	b = temp;
}

// 주소값을 함수의 인자값으로 전달 (call by address)
void Pswap(int* pa, int* pb) {
	int temp = 0;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

int main() {
	int a = 20;
	int b = 30;
	int ret = add(a, b); // 함수를 호출할 때 전달하는 값을 인자(argument)
	swap(a, b);
	printf("a = %d, b = %d\n", a, b);

	Pswap(&a, &b); // a주소값, b주소값을 전달하는 것을 call by address라고 함.
	printf("a = %d, b = %d\n", a, b);

	return 0;
}