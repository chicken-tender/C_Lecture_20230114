#include <stdio.h>

int main() {
    int a;
    a = 20;

    printf("&a = %x\n", &a);

    int* pa;   // ������ ���鶧 ����� *(�����͸���ũ)�� ������ ��������
    pa = &a;

    int** ppa;
    ppa = &pa;

    // *&a(a�� �ּҰ��� ��� �ִ� ����) == a
    **ppa;   // �ּҰ��� ����� *(�����͸���ũ)�� ������ �������Դϴ�.
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