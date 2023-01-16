#include <stdio.h>

int main() {
	// 배열의 요소에 접근하는 방법은 두 가지 입니다.
	// (1) 배열식 : array[0]
	// (2) 포인터식 : *(array + 0)
	// 두 식은 동등하다. (== 식은 다르나 결과값은 같다.)
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