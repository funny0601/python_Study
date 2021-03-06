﻿
//갤런을 리터로 환산하는 프로그램
#include <stdio.h>
double change(double gal);

int main(void)
{
	double gal;
	printf("갤런을 입력하시오:");
	scanf("%lf", &gal);
	printf("%f갤런(gallon)은 %.2f리터이다.", change(gal));
}
double change(double gal)
{
	double lit;
	lit = 3.78* gal;
	return lit;
}


//화씨온도를 섭씨온도로 변환
#include <stdio.h>
double change(double f);

int main(void)
{
	double f;
	printf("화씨온도를 입력하시오:");
	scanf("%lf", &f);
	printf("섭씨온도는 %f도 입니다.", change(f));
	return 0;
}
double change(double f)
{
	double c;
	c = 5.0 / 9.0 * (f - 32);
	return c;
} 

//10진수를 8진수, 16진수로 변환하는 프로그램 
#include <stdio.h>
void change(int number);

int main(void)
{
	int number = 0;
	printf("10진수를 입력하시오:");
	scanf("%d", &number);
	change(number);
	return 0;
}
void change(int number)
{
	printf("8진수:%o\n", number);
	printf("16진수:%x", number);
	return;
}
 

//2차방정식의 근을 구하는 프로그램
#include <stdio.h>
#include <math.h>
void solution(double a, double b, double c);

int main(void)
{
	double a, b, c;
	printf("계수 a, b, c를 입력하시오:");
	scanf("%lf %lf %lf", &a, &b, &c);
	solution(a, b, c);
}
void solution(double a, double b, double c)
{
	double dis;
	if (a == 0)
		printf("방정식의 근은 %f입니다.", -c / b);
	else
	{
		dis = b*b - 4.0*a*c;
		if (dis >= 0)
		{
			printf("방정식의 근은 %f입니다. \n", (-b + sqrt(dis)) / (2.0*a));
			printf("방정식의 근은 %f입니다. \n", (-b - sqrt(dis)) / (2.0*a));
		}
		else
			printf("실근이 존재하지 않습니다\n");
	}
	return;
}
 
//동전 던지기 게임
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int b_rand();

int main(void)
{
	int number;
	char choice;
	srand((unsigned)time(NULL));
	while (1)
	{
		printf("앞면 또는 뒷면(1 또는 0):");
		scanf_s("%d", &number);
		if (b_rand() == number)
			printf("맞았습니다.\n");
		else
			printf("틀렸습니다.\n");
		fflush(stdin);
		printf("계속하시겠습니까?(y 또는 n):");
		scanf(" %c", &choice);
		
		if (choice == 'n')
			break;	
	}

	return 0;
}
int b_rand()
{
	int c;
	
	c = rand() % 2;
	return c;
}
 

//0.0부터 1.0까지의 난수를 반환하는 프로그램
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void f_rand();

int main(void)
{
	srand((unsigned)time(NULL));
	f_rand();
	return 0;
}
void f_rand()
{
	int i;
	for (i = 0; i < 5; i++)
		printf("%lf ",rand()/(double)RAND_MAX);
	return;
}
 

//화면에 세로로 막대 그래프를 그리는 프로그램
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void print_value(int n);

int main(void)
{
	int n;
	while (1)
	{
		printf("값을 입력하시오(종료는 음수):");
		scanf("%d", &n);
		if (n >= 0)
			print_value(n);
		else
			break;
	}
}
void print_value(int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("*\n");
	return;
}


