#include<stdio.h>
#define SIZE 5
main ()
{
	int gk[SIZE],max;
	printf("Enter 5 values to check\n");
	for(int i=0;i<SIZE;i++)
	{
		scanf("%d",&gk[i]);
	}
	max=gk[0];
	for(int i=0;i<SIZE;i++){
	
	if(gk[i]>max)
	{
		max=gk[i];
	}
}
printf("Maximum is %d",max);
}
