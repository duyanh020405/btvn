#include <stdio.h> 
#include <math.h>
int main(){
int sophutdadung,tiendienthoai; 
printf ("nhap so phut da su dung ") ;
scanf ("%d",&sophutdadung);
if (sophutdadung<50){
tiendienthoai=sophutdadung*600;}
else if (50<sophutdadung<200){
tiendienthoai=(sophutdadung-50)*400+50*600;}
else if (200<sophutdadung<400){
	tiendienthoai=(sophutdadung-200)*200+(50*600)+(150*400);}
else 
{tiendienthoai=(sophutdadung-400)*100+(50*600)+(150*400)+(200*200);}
printf("tiendienthoai=%d",tiendienthoai+25000);
}
