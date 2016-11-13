#include "EditInfo.h"
#include "EnterInfo.h"
#include "ShowInfo.h"
#include <iostream>
using namespace std;

int main()
{
	char ch;
	do
	{
		system("cls");
		cout << "\n\t\t\t WELCOME TO THE STUDENT ATTENDANCE MANAGEMENT MAIN MENU" << endl;
		cout << "\n\t\t\t 01. Enter Student Information: " << endl;
		cout << "\n\t\t\t 02. Show Attendance for Student: " << endl;
		cout << "\n\t\t\t 03. Edit Student Information: " << endl;
		cout << "\n\t\t\t 04. Exit" << endl;
		cout << "\n\t\t\t Please Select Your Option: ";
		cin >> ch;
		system("cls");

		switch (ch)
		{
		case '1': void EnterInfo();
			break;
		case '2': void ShowInfo();
			break;
		case '3': void EditInfo();
			break;
		case '4': system("exit");
			break;
		default: cout << "Please Select from Option 1-3" << endl;
		}

	} while (ch != '4');


	system("PAUSE");
	return 0;
}