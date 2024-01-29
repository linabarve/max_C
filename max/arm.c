                     // armstrong number............
#include<stdio.h>
#include<math.h>
int main()
{
	int i,p,j,n,r,c=0;
	printf("eneter the  number:");
	scanf("%d",&n);
	int a[n];
	for(i = 1; i  <=  n; i++)
	{
		for(j = i; j > 0; j /= 10)
		{
			r = j % 10;
			c =  c + 1;
		}
		int k ,arm=0;
		for(k = i; k > 0; k /= 10)
		{
			p = k % 10;
			int result = pow(p, c);
			arm = arm + result;
		}
		if(arm == i)
		{
		a[p] = i;
		p =  p + 1;
		}
	}
	for (j = 0; j < p; j++)
	{
		printf("%d",a[j]);
	}
	return 0;
}
