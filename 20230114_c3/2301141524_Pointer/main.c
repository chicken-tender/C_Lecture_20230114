#include <stdio.h>

int main() {
    int a;
    a = 20;

    printf("&a = %x\n", &a);

    int* pa;   // 변수를 만들때 사용한 *(에스터리스크)는 포인터 형지정자
    pa = &a;

    int** ppa;
    ppa = &pa;

    // *&a(a의 주소값을 담고 있는 공간) == a
    **ppa;   // 주소값에 사용한 *(에스터리스크)는 포인터 연산자입니다.
    **&pa;
    *pa;
    *&a;
    a;

    printf("&**ppa = %p, &**&pa = %p, &*pa = %p, &*&a = %p, &a = %p\n"
        , &**ppa, &**&pa, &*pa, &*&a, &a);

    printf("**ppa = %d, **&pa = %d, *pa = %d, *&a = %d, a= %d\n"
        , **ppa, **&pa, *pa, *&a, a);

    **ppa = 1000;
    printf("**ppa = %d, **&pa = %d, *pa = %d, *&a = %d, a= %d\n"
        , **ppa, **&pa, *pa, *&a, a);


    return 0;
}