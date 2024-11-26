#include <stdio.h>
int main (){
 	int number,chan=0,le=0;
	for(int i=1;i<=5;i++){
		printf("Nhap vao so nguyen %d:",i);
		scanf("%d",&number);
		if (number % 2== 0){
			chan++;
	    }else{
	    	le++; 
		} 
    }
    printf("So luong so chan %d \n",chan);
    printf("So luong so le %d \n",le);
return 0;
}
	 
		 
