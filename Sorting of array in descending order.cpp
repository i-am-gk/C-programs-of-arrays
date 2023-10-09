#include<stdio.h>
#define size 7
main (){
	int arr[size]={29,15,33,36,40,49,24};
	printf("Array before sorting\n");
	for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	for(int pass=1;pass<size;pass++)// or pass=0 pass=size-1 dono same
	{
		for(int j=0;j<size-1;j++)
		{
			
		if(arr[j+1]>arr[j])
		{
			int temp =arr[j]; //c=a
			arr[j]=arr[j+1];//a=b
			arr[j+1]=temp;//b=c
		}
		}
	}
	printf("\nArray after sorting\n");
	for(int k=0;k<size;k++)
	{
		printf("%d ",arr[k]);
	}
	
}
