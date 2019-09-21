#include<stdio.h>
int main()
{
	int n,i,min,smin;
	printf("enter n value:\n");
	scanf("%d",&n);
	int a[n];
	printf("enter elements into array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
			smin=min;
		}
	}
	printf("%d",smin);
	return 0;
}
