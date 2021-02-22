#include <stdio.h>
void sort(int,int*);
int main(){ 
	int x=0;
	int score[4] = {45,90,71,83};
	sort(4,score);
	while(x <= 3)
	{
		score[x];
		printf("the sorted array %d \n",score[x]);
		x++;
	}
}
void sort (int m, int *x){
	int i,j,temp;
	for(i=1;i<=m-1;i++)
	{
		for(j=1;j<=m-1;j++)
		if(*(x+j-1) >= *(x+j))
		// hare is the function represntation
		// x = 0, j=1, so there vill be like
		// 0+1-1 >= 1 and that will be execute the 
		// my program ok na 
		{
		// hare is just a swap functoin if you notic
			temp = *(x+j-1);
			*(x+j-1) = *(x+j);
			*(x+j) = temp;
		}
	}
}
