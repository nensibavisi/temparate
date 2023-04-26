#include<stdio.h>

main()
{
	int i,n,reverse=0;
	printf("enter number :");
	scanf(" %d",&n);
     int temp=n;
	
	
	while(n!=0){
	
	
		i=n%10;
		reverse =reverse*10 +i;
		n/=10;
	}
	printf("reversed number is %d\n,reverse");
	if(temp==reverse)
	{
		printf("etered number is palindrom");
	}
	else
	{
	    printf("entered number is not palindrom");	
	}
}
