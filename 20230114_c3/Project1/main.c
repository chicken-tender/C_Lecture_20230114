#include <stdio.h>
// 배열 : 동일한 데이터타입의 공간이 여러개 필요할 때 사용하는 기능
// 배열을 만들면 배열식을 사용할 수 있습니다.
// 배열식을 사용할 수 있기 때문에 반복문을 사용할 수 있습니다.

// DataType 배열명[배열사이즈];
// 배열명 할당받은 배열의 메모리공간의 선두번지 주소값
int main() {
	int array[100]; // int(4byte) * 100 = 총 400byte

	for (int i = 0; i < 100; i++) {
		array[i] = i+1;
	}

	for (int i = 0; i < 100; i++) {
		printf("array[%d] = %d\n", i, array[i]);
	}
	return 0;
}