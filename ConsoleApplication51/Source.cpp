#include <iostream>
#include <locale.h>
#include <time.h>
#include <stdio.h>
#include <locale.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	cout << "������������, � ������ �� � ����� ������, �� ��� ���������� ��� � � ��� ��� 1 ���� (������ ���� ��������), ��, � �����, ��� ������ ����� ������� ��� ������������ �������, ��� ��� � ������ ������� ������� ������. " << endl << endl;
	short int task;
	printf("Enter number of task: ");
	scanf("%hu", &task);
	system("cls");
	switch (task)
	{
	case 1:
	{
		//1.������������ ������ � ���������� ��� ������� ��������������. ��������� ������� � �������� ��������������.
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
		//2.������������ ������ � ���������� ���������� �� ��������� � �����, �� ������� ����� �������. ��������� ��������, � ������� ��� ����� �����.
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