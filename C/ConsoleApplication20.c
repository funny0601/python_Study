#include <stdio.h>

void findMax(int a, int b, int c);
void doubleNum(int a);
void circle(int a);
void divNum(int a, int b);
void oddEven(int a);
void getAver(int a, int b, int c);

int main()
{
	findMax(23, 45, 21);
	doubleNum(18);
	circle(21);
	divNum(7, 4);
	oddEven(17);
	getAver(70, 80, 90);
    return 0;
}

void getAver(int a, int b, int c) {
	float aver = (a + b + c) / 3;
	printf("평균: %f\n", aver);
}
void oddEven(int a) {
	if (a % 2 == 0)
		printf("%d는 짝수\n", a);
	else
		printf("%d는 홀수\n", a);
}

void divNum(int a, int b) {
	printf("몫: %d\n", a/b);
	printf("나머지: %d\n", a%b);
}

void circle(int a) {
	printf("원의 넓이: %f\n", a*a*3.14);
	printf("원의 둘레: %f\n", 2*a*3.14);
}

void doubleNum(int a) {
	printf("%d\n", a * 2);
}

void findMax(int a, int b, int c) {

	int max = a;
	max = (max > b) ? max : b;
	max = (max > c) ? max : c;
	printf("최댓값: %d\n", max);
}


