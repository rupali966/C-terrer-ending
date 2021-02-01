#include <stdio.h>
int main()
{
	int i;
	float x[10], yourgivenValue, total;
	
	/*
	
	Reading value into array
	
	*/
	printf("Inilize the value 10 number \n ");
	for(i = 0; i < 10; i++ )
	{
		scanf("%f", &yourgivenValue);
		x[i] = yourgivenValue;
		
	}
	
	/*
	accesing the value of array 
	*/
	
	total = 0.0;
	for(i = 0; i < 10 ;i++)
	{
		total = total + x[i];
	}
	
	// -------------------
	
	printf("\n");
	for(i = 0 ; i < 10 ;i++)
	{
		printf("x[%2d] = % 5.2f\n", i+1,x[i]);
	}
	printf("\n total = %.2f\n", total);
	return 0;
}
/*
Although we can give a price in a number of ways to Arre, but giving it through a lopping price, it gives us a better facility to a great extent because we cannot put very large numbers because it takes us a lot of time.  Hence giving a value through looping becomes very important

That is why I have created this program so that you can also give the price to the arre through looping, and in this way your work can be more easy and convenient.
*/