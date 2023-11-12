#include <stdio.h>
#include <math.h> 
int main(){
	int a,b,c,nghiemkep,nghiemle1,nghiemle2,denta;
	printf ("nhap a,b,c vao dayyy");
	scanf ("%d%d%d",&a,&b,&c);
	denta = b*b-4*a*c;
	nghiemkep=-b/2*a;
	nghiemle1=(-b-sqrt(denta))/(2*a);
	nghiemle2=(-b+sqrt(denta))/(2*a);
	if (denta<0){
		
		printf ("phuong trinh vo nghiem");
}else if (denta==0){

printf ("phuong trinh co nghiem kep :%d",nghiemkep );
}else{
	printf("2nghiem la %d va %d",nghiemle1,nghiemle2);
}
}
