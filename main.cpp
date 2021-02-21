#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
using namespace std;


int main()
{
	srand(time(0));
	string swi;
	int switch_key;
	options:
		cout << "0\tUse default limits for ramdom (1-1000)." << endl;
		cout << "1\tCustom" << endl << "Select> ";
		cin >> swi;
		system("cls");
		int rb,re,ae,ab,secret;
		string veri;
		while (swi != "1" && swi != "0")
		{
			system("cls");
			cout << "Please type 1 or 0!" << endl << "Select> ";
			cin >> swi;
		}
		if (swi == "1") { switch_key = 1; }
		else { switch_key = 0; }
	switch (switch_key)
	{
	case 0:
		rb = 1,re = 1000;
		secret = rand() % re+rb;
		cout << "Comfirm Range:" << endl << "begin:\t" << rb << endl << "End:\t" << re << endl << "Do you want to start?(y or n)" << endl << "Verify> ";
		cin >> veri;
		/* project in first
		if (veri == "y") { goto startmain; }
		else {
			cout << "exiting..." << endl;
			sleep(2000);
			exit(0);
		}*/
		break;
	case 1:
		cout << "Begin:" << endl << "Value> ";
		cin >> ab;
		system("cls");
		cout << endl << "End:" << endl << "Value> ";
		cin >> ae;
		rb = ab;
		re = ae - (ab - 1);
		secret = rand() % re + rb;
		system("cls");	
		cout << "Comfirm Range:" << endl << "begin:\t" << ab << endl << "End:\t" << ae << endl << "Do you want to start?(y or n)" << endl << "Verify> ";
		cin >> veri;
		/*if (veri == "y") { goto StartMain; }
		else { 
			cout << "Exiting..." << endl;
			Sleep(2000);
			exit(0); 
		}*/
		break;
	default:
		cout << "Type in 1 or 0!";
		system("cls");
		goto options;
		break;
	}
	while (veri != "y" && veri != "n") 
	{
		system("cls");
		cout << "Please type y or n!" << endl << "Verify> ";
		cin >> veri;
	}
		int veriint = 0;
	if (veri == "y") { veriint = 1; }
	else if (veri == "n") { veriint = 0; }
	switch (veriint)
	{
	case 1:
		system("cls");
		cout << "Starting..." << endl;
		Sleep(1000);
		goto StartMain;
	default:
		system("cls");
		cout << "Exiting..." << endl;
		Sleep(1000);
		exit(0);
	}

	StartMain:
		int attempt;
		attempt = 0;
		system("cls");
		int type;
		do
		{
			attempt += 1;
			cout << "Attempt " << attempt << endl << endl;
			cout << "Type the number." << endl;
			cout << "Number> ";
			cin >> type;
			system("cls");
			if (type > secret)
			{
				cout << "The number is too BIG.";
			}
			else {
				cout << "The number is too SMALL.";
			}
			cout << endl;
			//Sleep(1500);
		} while (type != secret);
		system("cls");
		cout << "Yes! The number is " << secret << "." << endl << endl;
		system("pause");
		return 0;
}
