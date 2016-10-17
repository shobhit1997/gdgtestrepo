# include <stdio.h>
int gcd(int b,int s)
{
	if(b%s==0)
	{
		return s;
	}
	return gcd(s,b%s);
}
void main()
{
	int b,s;
	printf("Enter two no.s\n");
	scanf("%d%d",&b,&s);
	
	printf("GCD of %d and %d is %d\n",b,s,gcd(b,s));
	
	
	
}
	
	
