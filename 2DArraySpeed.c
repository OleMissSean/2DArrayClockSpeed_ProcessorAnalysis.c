//Sean Staz
//CSci 223

#include <stdio.h>
#include <time.h>

int main()
{
	int dst[512][512], src[512][512];	//Instantiate array
	int i, j;				
	clock_t begin, end;			//Instantiate clock
	double timeSpent;

	begin = clock();			//Starts stopwatch
	for(i = 0; i < 512; i++) 		//Set array's values (Does 1 i (row), for 512 js 								(column)
	{
		for(j = 0; j < 512; j++) 
		{
			dst[i][j] = src[i][j];
		}
	}
	end = clock();				//Ends stopwatch
	timeSpent = (double)(end - begin) / CLOCKS_PER_SEC;	//Equation to calculate speed
	
	printf("Elapsed Time: %f seconds\n", timeSpent);	//Prints Elapsed Time

	begin = clock();			//Starts stopwatch
	for(i = 0; i < 512; i++) 		//Set array's values (Does 1 i (column), for 512 js 								(row)
	{
		for(j = 0; j < 512; j++) 
		{
			dst[j][i] = src[j][i];
		}
	}
	end = clock();				//Ends stopwatch
	timeSpent = (double)(end - begin) / CLOCKS_PER_SEC;	//Equation to calculate speed

	printf("Elapsed Time: %f seconds\n", timeSpent);	//Prints Elapsed Time
}
