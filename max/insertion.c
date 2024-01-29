		// insertion sort.....

    
#include<stdio.h>
int main()
{
	int i,n,j;
	scanf("%d",&n);
	int a[n];
	for (i = 0; i < n; i++)
	{
        scanf("%d", &a[i]);
        }
	int key = a[i];
	while(j < 0 && a[j] > key)
	{
		a[j+1] = a[j];
		j = j - 1;
        }
	int j =0;
	while(j < n)
	{
	 printf("%d",a[j]);
	 j = j + 1;
	}
	return 0;
}
	 
		
