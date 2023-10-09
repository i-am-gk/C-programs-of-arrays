#include<stdio.h>
#define SIZE 4
main ()
{
int array[SIZE];
for(int i=0;i<4;i++)
{
printf("Enter array element %d\n",i);
scanf("%d",&array[i]);
}
printf("values are\n");
for(int i=0;i<4;i++)
{
	printf("%d\t",array[i]);
}
}
