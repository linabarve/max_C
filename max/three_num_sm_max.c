#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int s,m;
	if (a > b)
	{
		m = a;
		s = b;
	}
	else
	{
		m = b;
		s = a;
	}
	if (m > c)
	{
		if(c > s)
		{
			printf("second max:%d",c);
		}
		else 
		{
			printf("second max:%d",s);
		}
	}
	printf("second max:%d",m);
	return 0;
}
	
	
