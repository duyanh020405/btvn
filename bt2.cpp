#include<stdio.h>
int main (){
 int tien , hoa ;
printf ("nhap tien vao day");
scanf ("%d",&tien);
if (tien <= 100000000){
	hoa=tien*0.05;	

}else if(tien <=300000000){
	hoa=tien*0.1;
}else{
 hoa=tien*0.2;
}
printf ("hoa hong = %d",hoa);
 
}

