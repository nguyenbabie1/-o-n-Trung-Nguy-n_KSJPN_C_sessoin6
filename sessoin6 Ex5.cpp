#include <stdio.h>
int main(){
	int day,month,year;
	printf("Moi ban nhap nam: ");
	scanf("%d",&year);
	printf("Moi ban nhap thang: ");
	scanf("%d",&month);
	switch(month){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			day=31;
			break;
		case 4: case 6: case 9: case 11:
			day=30;
			break;
		case 2:
			if(year%4==0 && year%100==0){
				day=29;
			}else{
				day=28;
			}
			break;
		default:
			printf("vui long xem lai du lieu ban da nhap");		 	
			break;
	}
	printf("%d/%d/%d",day,month,year);
	return 0;
}
