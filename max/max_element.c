		// find the maximum elements in the array
		
#include<stdio.h>
int main()
{

	int i,j,n,k,max = 0;
	printf("Enter the number:-");
	scanf("%d",&n);
	int a[n];
	for(i = 0; i < n; i++)
	{
		scanf("%d",&k);
		a[i] =  k;
	}
	for(j =  0;  j < n;  j++)
	{
		if(a[j] > max)
		{
			max = a[j];
		}
	}
	printf("%d\n",max);
	return 0;
}
	
