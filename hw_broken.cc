#include <iostream>
#include <vector>
#include <cmath>



/*
	This function displays the standard deviation of a set of elements in a array.
	Parameter a specifies a pointer pointing to the memory address of the array elements.
	Parameter n specifies the size of the array.
	By using a mathmetical formula, the program reads the elements of the array and calculates
	the standard deviation of those elements.
*/
double deviation( int* a, int n )
{
	int sum = 0;
	for(int i = 0; i <= n-1; i++)
	{
		sum += a[i];
	} 
	double mean = sum /= (n-1);
	double stddev = 0.0;
	for(int i = 0; i <= n-2; i++)
	{
		double stddev = stddev + pow( a[i] - mean, 2); 
	}
	stddev /= (n-1);
	if( stddev == 0.0)
	{
		std::cout << "Sigma is zero." << std::endl;
	}
	return sqrt(stddev);
}
