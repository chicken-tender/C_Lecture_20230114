#include <stdio.h>

int main() {
	/*
	int x = 15;
	int y = 45;

	int ref = x < y;
	printf("1. %d < %d = %d\n", x, y, ref);

	ref = x > y;
	printf("2. %d > %d = %d\n", x, y, ref);

	ref = x <= y;
	printf("3. %d <= %d = %d\n", x, y, ref);

	ref = x >= y;
	printf("4. %d >= %d = %d\n", x, y, ref);

	ref = x == y;
	printf("5. %d == %d = %d\n", x, y, ref);
	
	ref = x != y;
	printf("6. %d != %d = %d\n", x, y, ref);
	*/

	int true = 1;
	int false = 0;

	int ret = true && true;
	printf("true && true = %d\n", ret);

	ret = true && false;
	printf("true && false = %d\n", ret);

	ret = false && true;
	printf("false && true = %d\n", ret);

	ret = false && false;
	printf("false && false = %d\n", ret);

	ret = true || false;
	printf("true || false = %d\n", ret);

	ret = true || true;
	printf("true || true = %d\n", ret);

	ret = false || true;
	printf("false || true = %d\n", ret);

	ret = false || false;
	printf("false || false = %d\n", ret);

	ret = !true;
	printf("!true = %d\n", ret);

	ret = !false;
	printf("!false = %d\n", ret);

	return 0;
}