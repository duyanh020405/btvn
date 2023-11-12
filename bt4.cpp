#include <stdio.h>
int main(){

int tienluong,tienthue ;
printf ("nhap so tien the ");
scanf ("%d",&tienluong);
if (0<tienthue<5000000){
tienthue=tienluong/100*5;}
else if (5000000<tienluong<10000000){
	tienthue=tienluong/100*10;}
else if (10000000<tienluong<18000000){
	tienthue=tienluong/100*15;}
else if (18000000<tienluong<32000000){
	tienthue=tienluong/100*20;}	
else if (32000000<tienluong<52000000){
	tienthue=tienluong/100*25;}
 else if (52000000<tienluong<80000000){
	tienthue=tienluong/100*30;}
else 
{tienthue=tienluong/100*35;}
printf("tien thue =%d",tienthue);
}
