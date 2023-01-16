#include <stdio.h>

struct Student {
	char name[30];
	int age;
	int gender; // 0은 여자, 1은 남자
	int grade;
};

int main() {
	// 구조체? 연관된 데이터를 하나로 묶어주는 기능
	// 배열보다 더 좋은 방법...
	// 구조체 변수의 멤버에 접근하실 때는 .(period) 연산자를 사용
	struct Student st;
	st.name[0] = 'M';
	st.name[1] = 'O';
	st.name[2] = 'M';
	st.name[3] = '\0';

	st.age = 30;
	st.gender = 0;
	st.grade = 3;

	printf("이름 : %s\n나이 : %d\n성별 : %d\n학년 : %d\n", st.name, st.age, st.gender, st.grade);
	
	// 100명의 학생을 담으려면?
	struct Student strArray[100];

	return 0;
}