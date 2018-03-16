#include <iostream>
#include <stdio.h>
#include <math.h> 

using namespace std;



int divideBy2(int n) 
{
	//First statement for the recursive function come back.
	//Reaches here when the division is done.
	if (n  == 1 )
		return 1;
	//Second statement for the recursive function come back.
	//Enters here when the number is no longer necessary to check, like a prime number.
	if (!((n % 2) == 0 || (n % 3) == 0 || (n % 5) == 0))
		return 0;

	if ((n % 2) == 0)
	{
		return 2 * divideBy2(n / 2);
	}
	else if ((n % 3) == 0)
	{
		return 3 * divideBy2(n / 3);
	}
	else if ((n % 5) == 0)
	{
		return 5 * divideBy2(n / 5);
	}
	

}


int main()
{
	const int total = 18;
	int a = 2;
	int b = 3;
	int c = 5;

	int numbers[total];
	int currentNum = 1;
	int lastNum = 1;

	for (int i = 0; i < total; i++)
	{
		
		if (divideBy2(currentNum) == currentNum)
		{
			numbers[i] = currentNum;
			lastNum = currentNum;
			currentNum++;
			continue;
		}
		else
		{
			currentNum++;
			i--;
			continue;
		}

	}


	
	cout << "pos : " << numbers[ -1] << endl;
	getchar();
	return 0;
	
}