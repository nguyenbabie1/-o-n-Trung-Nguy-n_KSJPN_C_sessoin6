#include <stdio.h>
int main (){
 	int number,num;
	for(int i=1;i<=5;i++){
		printf("Nhap vao so nguyen %d:",i);
		scanf("%d",&number);
		if (number % 2 != 0){
			num+=number;	 
		}	 
	}
	 printf("Tong cac so le la:%d\n",num);
	 return 0; 
	  
 } 
