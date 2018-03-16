/************************************************************;
* Project           : SGI_2
*
* Program name : SGI_2_Tauan_Binato
*
* Author : Tauan Binato Flores
*
* Date created : 2018/03/16
*
* Purpose : Summarize demographics data for the study.
*
* Revision History :
*
* Date          Author          
* 2018/03/16    tauanbf       
* 2018/03/15	tauanbf
* 2018/03/14	tauanbf
| ***********************************************************/

#include <iostream>
#include <stdio.h>
#include <math.h> 

using namespace std;


//This function should return the exact number that entered if it is only a number factorable by 2,3 and 5
//otherwise will return 0.
int check_factors_in_number(int n) 
{
	//First statement for the recursive function come back.
	//Reaches here when the division is done.
	if (n  == 1 )
		return 1;

	//Second statement for the recursive function come back.
	//Enters here when the number is no longer necessary to check, like a prime number.
	if (!((n % 2) == 0 || (n % 3) == 0 || (n % 5) == 0))
		return 0;

	//Checking if the current number is divisible by the factors
	//if it is , multiply by the factor and divide recursively
	if ((n % 5) == 0)
	{
		return 5 * check_factors_in_number(n / 5);
	}
	else if ((n % 3) == 0)
	{
		return 3 * check_factors_in_number(n / 3);
	}
	else if ((n % 2) == 0)
	{
		return 2 * check_factors_in_number(n / 2);
	}
	

}


// This function is responsible to control the positions and their numbers in the array.
void calculate_position(int numbers[], int total) 
{
	//Factors as constants
	const int a = 2;
	const int b = 3;
	const int c = 5;

	int currentNum = 1;

	for (int i = 0; i < total; i++)
	{

		//Here im factoring the current number to see if the number only needs 2,3,5 primal factors.
		if (check_factors_in_number(currentNum) == currentNum)
		{
			numbers[i] = currentNum;
			currentNum++;
			continue;
		}
		else
		{
			//If the number do NOT match the requirments, stay in the same
			//array position and try other number.
			currentNum++;
			i--;
			continue;
		}

	}
}

int main()
{
	const int total = 1500;
	int numbers[total];
	

	/* Basic user interface for in/out */
	int pos;
	cout << "Enter the position : " << endl;
	cin >> pos;
	cout << "Calculating..." << endl;
	calculate_position(numbers, pos);
	cout << "Result : " << numbers[pos - 1] << endl;
	getchar();
	getchar();

	return 0;
}