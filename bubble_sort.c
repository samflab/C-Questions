#include<stdio.h>
void main()
{
	int size,temp,arr[50],i,j;
	printf("ENTER THE SIZE OF ARRAY");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("ENTER THE %d ELEMENT",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<(size-i-1);j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("SORTED ARRAY IS : ");
	for(i=0;i<size;i++)
		printf("%d,",arr[i]);

}
