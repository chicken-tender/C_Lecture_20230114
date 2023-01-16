#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct tagCar {
    char modelName[50];   // 모델명
    int wheelCount;      // 휠갯수
    float oilCapacity;   // 주유량
    float maxSpeed;      // 최대속력
};

typedef struct tagCar Car;

int main() {
    // 구조체 배열
    Car array[3];

    // sizeof(array) : 배열의 할당 받은 전체 바이트수
    // sizeof(Car)   : 배열의 요소의 데이타 타입 사이즈(바이트수)
    int length = sizeof(array) / sizeof(Car); // 전체바이트 수 / 요소의 바이트수 = 요소의 갯수

    for (int i = 0; i < length; i++) {

        printf("휠갯수를 입력하세요: ");
        scanf("%d", &array[i].wheelCount);
        printf("주유량을 입력하세요: ");
        scanf("%f", &array[i].oilCapacity);
        printf("최대속력을 입력하세요: ");
        scanf("%f", &array[i].maxSpeed);

        printf("모델명을 입력하세요: ");
        scanf("%s", array[i].modelName);

        printf("\n\n");
    }


    for (int i = 0; i < length; i++) {
        printf("모델명: %s, 휠갯수: %d, 주유량: %f, 최대속력: %f\n"
            , array[i].modelName, array[i].wheelCount, array[i].oilCapacity, array[i].maxSpeed);
    }

    return 0;
}