#include<stdio.h>

main()
{
	int n,fd=0,sd=1,s;
	printf("value of n :");   
	scanf("%d",&n);
	while(n>fd)
	{
	
		
		printf("%d",fd);
		s=fd+sd;
		fd=sd;
		
		sd=s;
    }
}
