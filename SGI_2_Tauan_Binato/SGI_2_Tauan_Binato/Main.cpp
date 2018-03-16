#include <iostream>
#include <stdio.h>
#include <math.h> 

using namespace std;

// Initializing array with 1 for futher multiplications.
void initialize_array(int a[18] , int size)
{
	for (int i = 0; i < size; i++)
	{
		a[i] = 1;
	}
}


int main()
{
	int a = 2;
	int b = 3;
	int c = 5;

	int numbers[18];
	initialize_array(numbers , 18);
	

	for (int i = 0; i < 18; i++)
	{
		
		int num = i + 1;

		if (num == 1 || num == a || num == b || num == c)
		{
			numbers[i] = num;
			continue;
		}

		int aux_num = num;
		int aux_exit = 1;
		bool isLoopFree = true;
		while (true)
		{
			
			if ((aux_num % a) == 0)
			{
				aux_num = aux_num / a;
				numbers[i] *= a;
				isLoopFree = false;
			}
			else if ((aux_num % b) == 0)
			{
				aux_num = aux_num / b;
				numbers[i] *= b;
				isLoopFree = false;
			}
			else if ((aux_num % c) == 0)
			{
				aux_num = aux_num / c;
				numbers[i] *= c;
				isLoopFree = false;
			}
		    
			if (isLoopFree)
			{
				aux_num = num + 1;
				aux_exit = aux_num;
			}
			if (numbers[i] == num || numbers[i] == aux_exit)
			{
				num = aux_exit + 1;
				break;
			}
			
		}
	}

	cout << "Pos 18: " << numbers[18] << endl;
	getchar();
	return 0;
	
}