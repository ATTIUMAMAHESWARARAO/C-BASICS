#include<stdio.h>
int main()
{
    int n,r,s=0; 
	scanf("%d", &n); 
	int t=n; 
	while (n>0) 
	{
	    r=n%10; 
		s += r; 
		n=n/10; 
	}
	if(t%s==n) 
	printf("True"); 
	else 
	printf("False");
}