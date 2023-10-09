#include<stdio.h>
#define SIZE 5
main ()
{
	int sum=0,avg;
	int a[SIZE];
	for(int i=0;i<5;i++){
printf("Enter values\n");
scanf("%d",&a[i]);
sum+=a[i];
}
avg = sum/SIZE;
printf("sum = %d ",sum);
printf("Average = %d",avg);

}
