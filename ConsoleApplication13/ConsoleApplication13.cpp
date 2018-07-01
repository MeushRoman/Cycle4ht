// ConsoleApplication13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <locale.h>
#

using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	int numb = 1, i, j, x, y;

	do
	{
		printf("а - 1\tб - 2\tв - 3\tг - 4\tд - 5\nе - 6\tж - 7\tз - 8\tи - 9\tк - 10\n11. Вывести на экран ромб из звездочек\n12. Вывести на экран заданное количество чисел, кратных заданному.\n13. Для двух чисел определить наименьшее общее кратное.\n\nVvedite n = ");
		cin >> numb;


		if (numb == 9) {
			printf("\n");

			i = 1, j = 1, x = 10;

			do
			{
				i++;
				if (i <= x)
					printf("*");
				else {
					printf("\n");
					i = 1;
					j++;
					x = x - 1;
				}

			} while (j <= 10);
			printf("\n");
		}
		else if (numb == 10) {

			x = 9;
			i = 10;
			j = 0;

			do
			{
				j++;

				if (j <= x) {
					if (j >= i)
						printf("*"); else printf(" ");
				}
				else {
					printf("\n");
					j = 0;
					i--;
				}
			} while (i >= 1);
			printf("\n");

		}
		else if (numb == 1) {

			x = 10;
			i = 1;
			j = 11;

			do
			{
				j++;

				if (j <= x) {
					if (j >= i)
						printf("*"); else printf(" ");
				}
				else {
					printf("\n");
					j = 1;
					i++;
				}
			} while (i <= x);
			printf("\n");

		}
		else if (numb == 2) {


			i = 1, j = 1, x = 11;

			do
			{
				j++;

				if (j <= x) {
					if (j >= i)
						printf(" "); else printf("*");
				}
				else {
					printf("\n");
					j = 1;
					i++;
				}
			} while (i <= x);
			printf("\n");

		}
		else if (numb == 5) {
			printf("\n");


			i = 1; 	j = 1; 	x = 10;
			y = 6;
			do
			{
				i++;
				do
				{
					j++;
					((j <= x && j >= i) || (j >= y && j <= i)) ? printf("*") : printf(" ");
				} while (j <= 10);

				(i > 5) ? y-- : x--;
				printf("\n");

				j = 1;
			} while (i <= 9);
			printf("\n");

		}
		else if (numb == 6) {
			printf("\n");


			i = 1; 	j = 1; 	x = 10;
			y = 6;

			do
			{
				i++;
				do
				{
					j++;
					((j <= x && j >= i) || (j >= y && j <= i)) ? printf(" ") : printf("*");
				} while (j <= 9);

				(i > 5) ? y-- : x--;

				printf("\n");

				j = 1;
			} while (i <= 9);
			printf("\n");

		}
		else if (numb == 3) {
			printf("\n");

			i = 1; 	j = 1; 	x = 10;
			y = 6;
			do
			{
				i++;

				do
				{
					j++;
					if (i <= 6) {
						((j <= x && j >= i)) ? printf("*") : printf(" ");
					}
					else printf(" ");
				} while (j <= 11);

				if (i > 5)  x++; else x--;

				printf("\n");

				j = 1;

			} while (i <= 9);
			printf("\n");

		}
		else if (numb == 4) {
			i = 1; 	j = 1; 	x = 10;
			y = 6;

			do
			{
				i++;

				do
				{
					j++;
					if (i >= 6) {
						((j <= x && j >= i) || (j >= y && j <= i)) ? printf("*") : printf(" ");
					}
				} while (j <= 10);

				(i > 5) ? y-- : x--;

				printf("\n");

				j = 1;

			} while (i <= 9);
			printf("\n");

		}
		else if (numb == 7) {

			i = 1; 	j = 1; 	x = 10;
			y = 6;

			do
			{
				i++;

				do
				{
					j++;
					if (j <= 6) {
						((j <= x && j >= i) || (j >= y && j <= i)) ? printf(" ") : printf("*");
					}
					else printf(" ");
				} while (j <= 9);

				(i > 5) ? y-- : x--;

				printf("\n");

				j = 1;

			} while (i <= 9);
			printf("\n");

		}
		else if (numb == 8) {
			i = 1; 	j = 1; 	x = 10;
			y = 6;

			do
			{
				i++;

				do
				{
					j++;
					if (j >= 6) {
						((j <= x && j >= i) || (j >= y && j <= i)) ? printf(" ") : printf("*");
					}
					else printf(" ");
				} while (j <= 9);

				(i > 5) ? y-- : x--;

				printf("\n");

				j = 1;

			} while (i <= 9);
			printf("\n");

		}
		else if (numb == 11) {

			printf("\n");

			i = 0; 	j = 1; 	x = 6;
			y = 1;
			int z, z1;

			do
			{
				j++;

				(j > 6) ? y++, z1 = 10 - y : x--, z = 10 - x;

				do
				{
					i++;

					if (j < 7)
						((i >= x && i <= z)) ? printf("*") : printf(" ");
					else  (i >= y && i <= z1) ? printf("*") : printf(" ");

				} while (i <= 11);


				printf("\n");

				i = 0;

			} while (j <= 10);

		} else if (numb == 12) {

			int a, s=0;
			
			cout << endl << "a = ";
			cin >> a;

			for (int i = 1; i <= a; i++)
			{
				if (a % i == 0) {
					cout << i << endl;
					s++;
				}
			}
			cout << "количество чисел, кратных " << a << " = " << s << endl << endl;
		}

		else if (numb == 13) {
			int a,b, s = 0;

			cout <<endl<< "a = ";
			cin >> a;
			cout << "b = ";
			cin >> b;


			for (int i = 1; true; i++)
			{
				if (i % a == 0 && i % b == 0) {
					cout << i << endl;
					break;
				} 
			}
			cout << endl;
		}
	} while (true);

    return 0;
}

