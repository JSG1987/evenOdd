#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>
#include<fstream>



using namespace std;

int main()
{

	string input;
	int N;
	int j = 1;
	int sum = 0;
	ofstream myfile;
	myfile.open("even/odd.txt");

	cout << "do you want to add the Even or Odd?\n";
	cin >> input; //cout << "how many : "; cin >> N;
	if (input != "even"  && input != "odd")
	{
		cout << "You did not enter a valid option \n";
		myfile << "You did not enter a valid option \n";
	}
	else if (input == "even")
	{
		cout << "how many : "; cin >> N;
		for (j = 1; j <= N; j++)
		{
			if (j % 2 == 0)
			{


				sum += j;

				cout << j << endl;

			}
		}
		cout << "==================\n";
		cout << "your total is " << sum << endl;
		myfile << "your total is " << sum << endl;
	}
	else if (input == "odd")
	{
		cout << "how many : "; cin >> N;
		for (j; j <= N; j++)
		{
			if (j % 2 != 0)
			{
				sum += j;
				cout << j << endl;

			}
		}
		cout << "==================\n";
		cout << "your total is " << sum << endl;
		myfile << "your total is " << sum << endl;
	}



	//system("PAUSE");

	return 0;
}