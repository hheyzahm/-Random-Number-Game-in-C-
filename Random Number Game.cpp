#include<iostream>
#include<ctime>
#include<conio.h>
#include<Windows.h>
#include <cstdlib>
using namespace std;
void loading()
{
	cout << "\t\t\t\tLoading" << endl;
	cout<<"\t\t\t";
	for (int i = 0; i < 20; i++)
	{
	    Sleep(100);
		cout << "*";
	}
	system("cls");
}
void display()
{
	cout << endl;
	cout << "?????????????????" << endl;;
	cout << "Guess Number Game" << endl;
	cout << "?????????????????" << endl;
}
int main()
{

	int random, guess;
	srand(time(0));
	random = rand() % 50;
	loading();
	while (true)
	{
		display();
		cout << endl << endl;
		cout << "Enter the Number : ";
		cin >> guess;
		cout << endl;
		if (random == guess)
		{
			cout << "You Win!" << endl;
			getch();
			break;
		}
		else if (random > guess)
		{
			cout << "Please Enter Greater Number" << endl;
			getch();
		}
		else if (random < guess)
		{
			cout << "Please Enter Less Number" << endl;
	     	getch();
		}
		system("cls");

	}
}
