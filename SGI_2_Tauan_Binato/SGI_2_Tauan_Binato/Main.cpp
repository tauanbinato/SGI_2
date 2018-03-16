#include <iostream>
#include <stdio.h>
#include <math.h> 

using namespace std;

// Initializing array with 1 for futher multiplications.
void initialize_array(int a[] , int size)
{
	for (int i = 0; i < size; i++)
	{
		a[i] = 1;
	}
}


int main()
{
	const int total = 18;
	int a = 2;
	int b = 3;
	int c = 5;
	int num = 1;

	int numbers[total];
	initialize_array(numbers , total);
	

	for (int i = 0; i < total; i++)
	{
		

		if (num == 1 || num == a || num == b || num == c)
		{
			numbers[i] = num;
			num++;
			continue;
		}

		int aux_num = num;
		bool flag = true;
		while (true)
		{
			
			if ((aux_num % a) == 0)
			{
				aux_num = aux_num / a;
				numbers[i] *= a;
				if ((aux_num % a) == 0)
				{

					if (numbers[i] == num)
					{
						num++;
						break;
					}

					flag = false;
					num++;
					continue;
				}
				else 
				{
					flag = true;
					num++;
					break;
				}
				//flag = false;
			}
			else if ((aux_num % b) == 0)
			{
				aux_num = aux_num / b;
				numbers[i] *= b;
				flag = false;
			}
			else if ((aux_num % c) == 0)
			{
				aux_num = aux_num / c;
				numbers[i] *= c;
				flag = false;
			}

		   
			if ( flag == true)
			{
				numbers[i] = 1;
				i--;
				num++;
				break;
			}

			if (numbers[i] == num)
			{
				num++;
				break;
			}
			
		}
	}

	cout << "Pos : " << numbers[17] << endl;
	getchar();
	return 0;
	
}