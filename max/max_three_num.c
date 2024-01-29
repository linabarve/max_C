
#include<stdio.h>
int main()
{
	int a,b,c,m;
	scanf("%d%d%d",&a,&b,&c);
	if (a > b)
	{
		m = a;
	}
	else
	{
		m = b;
	}
	if(m > c)
	{
		printf("maximum num:%d",m);
	}
	else
	{
		printf("maximmum  num:%d",c);
	}
	return 0;
}
