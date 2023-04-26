#include<stdio.h>

main()
{
	int x,fact=1,n;
	printf("enter a number to factarial=");
	scanf("%d",&n);
	
	for(x=1;x<=n;x++);
	
	 fact=fact*x;
	 
	 printf("factorial of %d is %d",n,fact);
	 return 0;
}
