#include<stdio.h>
int main()
{
	int  uoc;
	printf("Nhap so nguyen :");
	scanf("%d",&uoc);
	
	for(int i=1; i<=uoc;i++)
	{
		if(uoc%i ==0)
		{
		 printf("uoc cua %d la %d \n",uoc,i);
		}		
	}
	
	return 0;
}
