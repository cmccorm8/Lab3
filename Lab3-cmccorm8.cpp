//Chance McCormick
//COSC 2030
//Lab 3
//10/1/18

#include <iostream>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;


//ryan durnan
short sumOverflow(short n)
{
	short sum = 0;
	bool overflow = false;
	
	while (overflow != true)
	{
		for (short i = 0; i <= n; i++)
		{
		sum = sum + i;

			if (sum  < 0)
			{
			overflow = true;
	
			}
			if (sum > 0)
			{
			overflow = false;
			n++;
			
			}
	
		}
	
	}
	cout << "\n ================= #1 ================" << endl;
	cout << "n = " << n << endl;
	cout << sum << endl;
	cout << "The sum up to " << n << " causes overflow." << endl;
	return sum;
	
	
}

long sumOverflow2(long n)
{
	long sum = 0;
	bool overflow = false;

	while (overflow != true)
	{
		for (long i = 0; i <= n; i++)
		{
			sum = sum + i;

			if (sum  < 0)
			{
				overflow = true;

			}
			if (sum > 0)
			{
				overflow = false;
				n++;

			}

		}

	}
	cout << "\n ================= #3 ================" << endl;
	cout << "n = " << n << endl;
	cout << sum << endl;
	cout << "The sum up to " << n << " causes overflow." << endl;
	return sum;

}

float productOverflow(long n)
{
	bool overflow = false;
	float product = 1;
	while (overflow != true)
	{
		for (long i = 0; i <= n; i++)
		{
			product = product * (i+1);

			if(isinf(product))
			{
				overflow = true;

			}
			if (!isinf(product))
			{
				overflow = false;
				n++;
				//cout << n << endl;
				//cout << product << endl;

			}

		}

	}



	cout << "\n ================= #4 ================" << endl;
	cout << "n = " << n << endl;
	cout << product << endl;
	cout << "The product up to " << n << " causes overflow." << endl;
	return product;
}


double productOverflow2(long n)
{
	double product = 1;
	bool overflow = false;
	while (overflow != true)
	{
		for (long i = 0; i <= n; i++)
		{
			product = product * (i + 1);

			if (isinf(product))
			{
				overflow = true;

			}
			if (!isinf(product))
			{
				overflow = false;
				n++;
				//cout << n << endl;
				//cout << product << endl;

			}

		}
		
	}
	
	


	cout << "\n ================= #5 ================" << endl;
	cout << "n = " << n << endl;
	cout << product << endl;
	cout << "The product up to " << n << " causes overflow." << endl;
	return product;
}

long strangeFloat(long n)
{
	long sum=0;
	for ( long i = 1; i <= n; i++)
	{
		sum = (sum + (1 / i));
		//cout << sum << endl;
	}
	sum = sum - 1.0;
	cout << sum << endl;
	cout << "\n ================= #6 ================" << endl;
	cout << "n = " << n << endl;
	cout << sum << endl;
	//cout << "The product up to " << n << " causes overflow." << endl;
	return sum;
	
}

void puzzleQuest()
{
	cout << "\n ================= #7 ================" << endl;
	for (float i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}
	
}

void puzzleQuest2()
{
	cout << "\n ================= #8 ================" << endl;
	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}

}



int main()
{
	short n = 1;
	long n2 = 1;
	long n3 = 1;
	double n4 = 1;
	long n5 = 1000;
	sumOverflow(n);
	sumOverflow2(n2);
	productOverflow(n3);
	productOverflow2(n4);
	strangeFloat(n5);
	puzzleQuest();
	puzzleQuest2();
	

	
	system("pause");
	return 0;
}