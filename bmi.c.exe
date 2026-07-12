#include <stdio.h>


int main(int argc, char *argv[]) {
	float peso;
	float altura;
	float indice;
do{
	printf("ingrese su altura en metros: ");
	scanf("%f",&altura);
	printf("ingrese su peso en kg: ");
	scanf("%f",&peso);
	if((altura<0)||(peso<0))
		printf("ingrese numeros positivos\n");
  }while((altura<0)||(peso<0));
	indice=peso/(altura*altura);
		
	printf("su indice de masa corporal es:%f\n",indice);
	
	printf("     indice|condicion\n");
	printf("     <18.5 | bajo peso\n");
	printf("18.5 a 24.9|normal\n");
	printf("25.0 a 29.9|sobrepeso\n");
	printf("     >=30  |obesidad\n");
	
	if(indice<=18.5)
		printf("condicion:bajo peso\n");
	else if ((indice>18.5)&&(indice<=24.9))
		printf("condicion:normal\n");
	else if ((indice>=25)&&(indice<=29.9))
		printf("condicion:sobrepeso\n");
	else if (indice>=30)
		printf("condicion:obesidad\n");
	return 0;
