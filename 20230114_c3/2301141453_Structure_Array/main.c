#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct tagCar {
    char modelName[50];   // �𵨸�
    int wheelCount;      // �ٰ���
    float oilCapacity;   // ������
    float maxSpeed;      // �ִ�ӷ�
};

typedef struct tagCar Car;

int main() {
    // ����ü �迭
    Car array[3];

    // sizeof(array) : �迭�� �Ҵ� ���� ��ü ����Ʈ��
    // sizeof(Car)   : �迭�� ����� ����Ÿ Ÿ�� ������(����Ʈ��)
    int length = sizeof(array) / sizeof(Car); // ��ü����Ʈ �� / ����� ����Ʈ�� = ����� ����

    for (int i = 0; i < length; i++) {

        printf("�ٰ����� �Է��ϼ���: ");
        scanf("%d", &array[i].wheelCount);
        printf("�������� �Է��ϼ���: ");
        scanf("%f", &array[i].oilCapacity);
        printf("�ִ�ӷ��� �Է��ϼ���: ");
        scanf("%f", &array[i].maxSpeed);

        printf("�𵨸��� �Է��ϼ���: ");
        scanf("%s", array[i].modelName);

        printf("\n\n");
    }


    for (int i = 0; i < length; i++) {
        printf("�𵨸�: %s, �ٰ���: %d, ������: %f, �ִ�ӷ�: %f\n"
            , array[i].modelName, array[i].wheelCount, array[i].oilCapacity, array[i].maxSpeed);
    }

    return 0;
}