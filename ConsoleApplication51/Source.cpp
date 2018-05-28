#include <iostream>
#include <locale.h>
#include <time.h>
#include <stdio.h>
#include <locale.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	cout << "Здравствуйте, я вообще не с вашей группы, но так получилось что я в ней был 1 день (первый день обучения), ну, в общем, мне просто нужно закрыть эту просроченную домашку, так что я просто парочку заданий сделал. " << endl << endl;
	short int task;
	printf("Enter number of task: ");
	scanf("%hu", &task);
	system("cls");
	switch (task)
	{
	case 1:
	{
		//1.Пользователь вводит с клавиатуры две стороны прямоугольника. Посчитать площадь и периметр прямоугольника.
		float length = 0, width = 0;
		printf("Enter length of rectangular: ");
		scanf("%f", &length);
		printf("Enter width of rectangular: ");
		scanf("%f", &width);

		system("cls");

		printf("Perimater = %f\n", 2 * (length + width));
		printf("Square = %f\n", length * width);
	}

	cout << endl << "Press any key to continue " << endl << endl;;
	system("pause");
	system("cls");

	case 2:
	{
		//2.Пользователь вводит с клавиатуры расстояние до аэропорта и время, за которое нужно доехать. Вычислить скорость, с которой ему нужно ехать.
		float S = 0, t = 0;
		printf("Enter length of path: ");
		scanf("%f", &S);
		printf("Enter time: ");
		scanf("%f", &t);

		system("cls");

		printf("Speed = %f\n", S / t);
	}
	exit(1);
	}
}