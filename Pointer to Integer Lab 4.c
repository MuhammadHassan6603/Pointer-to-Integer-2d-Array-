//Pointer to Int Passing 2D Array
#include<stdio.h>
void display(int *p,int row,int col) // p has the capacity to store address of 1 element
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",*(p+i*col+j));
		}
		printf("\n");
	}
}
void main()
{
	int a[2][2]={50,60,70,80};
	display((int *)a,2,2); //a is passing adress of 2 elements but receiver can receive 1 element so we have to type cast it by putting (int*)
}
