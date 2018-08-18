#include <stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int a;
		scanf("%d",&a);
		int b;
		scanf("%d",&b);
		a=rev(a);
		b=rev(b);
		int c;
		c=a+b;
		c=rev(c);
		printf("%d\n",c);

	}
}

int rev(int a)
{
int d=0,c=0;
while(a!=0)
{

	d=a%10;
	c=(c*10)+d;
	a=a/10;
}
return c;
}
