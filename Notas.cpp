#include <stdio.h>
#include <stdlib.h>
int main () {	
int n100,n50,n20,n10,n5,n2,n1,num;
	printf("Informe o valor: ");
	scanf("%d",&num);
	printf ("\n Valor informado: %d",num);	
	n100=num/100;
	num= num-(n100*100);
	printf ("\n %d notas de 100",n100);
	n50=num/50;
	num=num-(n50*50);
	printf ("\n %d notas de 50",n50);
	n20=num/20;
	num=num-(n20*20);
	printf ("\n %d notas de 20",n20);
	n10=num/10;
	num=num-(n10*10);
	printf("\n %d notas de 10",n10);
	n5=num/5;
	num=num-(n5*5);
	printf("\n %d notas de 5",n5);
	n2=num/2;
	num=num-(n2*2);
	printf("\n %d notas de 2",n2);	
	printf("\n %d notas de 1:",num); 		      
}
	

