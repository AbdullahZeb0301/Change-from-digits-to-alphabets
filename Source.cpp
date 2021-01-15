#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
	int a,b,c,d;

	cout << "Please enter a number" << endl;
	cin >> a;

	if (a < 100 && a >= 20)
	{
		b = a / 10;
		c = a % 10;

		if (b == 2)
		{
			cout << "Twenty ";
		}

		if (b == 3)
		{
			cout << "Thirty ";
		}
		if (b == 4)
		{
			cout << "Fourty ";
		}
		if (b == 5)
		{
			cout << "Fifty ";
		}
		if (b == 6)
		{
			cout << "Sixty ";
		}
		if (b == 7)
		{
			cout << "Seventy ";
		}
		if (b == 8)
		{
			cout << "Eighty ";
		}
		if (b == 9)
		{
			cout << "Ninety ";
		}
		if (c == 1) 
		{
			cout << "One ";
		}
		if (c == 2)
		{
			cout << "Two ";
		}

		if (c == 3)
		{
			cout << "Three ";
		}
		if (c == 4)
		{
			cout << "Four ";
		}
		if (c == 5)
		{
			cout << "Five ";
		}
		if (c == 6)
		{
			cout << "Six ";
		}
		if (c == 7)
		{
			cout << "Seven ";
		}
		if (c == 8)
		{
			cout << "Eight ";
		}
		if (c == 9)
		{
			cout << "Nine ";
		}

	}

	else if (a == 100)
	{
		cout << "One hundred";
	}

	else if (a < 20 && a > 0)
	{
		b = a / 10;
		c = a % 10;

		if (b == 0)
		{
			if (a == 1) 
			{
				cout << "One";
			}
			else if (a == 2)
			{
				cout << "Two";
			}
			else if (a == 3)
			{
				cout << "Three";
			}
			else if (a == 4)
			{
				cout << "Four";
			}
			else if (a == 5)
			{
				cout << "Five";
			}
			else if (a == 6)
			{
				cout << "Six";
			}
			else if (a == 7)
			{
				cout << "Seven";
			}
			else if (a == 8)
			{
				cout << "Eight";
			}
			else if (a == 9)
			{
				cout << "Nine";
			}
		}
		else
		{
			if (c==0)
			{
				cout << "Ten ";
			}
			else if (c == 1)
			{
				cout << "Eleven";
			}
			else if (c == 2)
			{
				cout << "Twelve";
			}
			else if (c == 3)
			{
				cout << "Thirteen";
			}
			else if (c == 4)
			{
				cout << "Fourteen";
			}
			else if (c == 5)
			{
				cout << "Fifteen";
			}
			else if (c == 6)
			{
				cout << "Sixteen";
			}
			else if (c == 7)
			{
				cout << "Seventeen";
			}
			else if (c == 8)
			{
				cout << "Eighteen";
			}
			else if (c == 9)
			{
				cout << "Nineteen";
			}
		}
	}
	cout << endl;
	system("pause");
	return 0;
}
