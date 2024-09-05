#include<stdio.h>
main()
{
	int i,a[10],n;
	float avg=0,sum=0;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the value of a[%d]:",i);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	avg=sum/n;
	printf("\n sum = %f \n avg = %f",sum,avg);
}
