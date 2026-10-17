#include <stdio.h>
#define TAM 5

//https://github.com/lozabenja/bmi-calculator.git

int main(int argc, char *argv[]) {
	
	
	int vecod[TAM]={0};
	float vecpre[TAM]={0};
	int i;
	int cod;
	float precio;
	float max;
	float min;
	int ma=0;
	int mi=0;
	printf("ingrese 5 codigos de barra y sus precios:\n");
	
	
	for(i=0;i<TAM;i=i+1){
		
		do{printf("Ingrese el codigo de barras: ");
		scanf("%d",&cod);
		if((cod<=0)||(cod>=1000000000)){
			printf("error,el codigo debe ser mayor a 0 y menor a 1000000000\n");
		}
		}while((cod<=0)||(cod>=1000000000));
		
		
		vecod[i]=cod;
		
		do{printf("Ingrese el precio: ");
		scanf("%f",&precio);
		}while(precio<0);
		vecpre[i]=precio;
	}
	
	printf("codigo     precio\n");
	
	for(i=0;i<TAM;i=i+1){
	printf("%d          %.2f\n   ",vecod[i],vecpre[i]);
	
	}
	
	max=vecpre[0];
	min=vecpre[0];
	
	for(i=1;i<TAM;i=i+1){
	if(max<vecpre[i]){
	  max=vecpre[i];
	ma=i;
	}
	
	}
	for(i=1;i<TAM;i=i+1){
		if(min>vecpre[i]){
		   min=vecpre[i];
		mi=i;
		}
	}
	printf("el precio maximo es [%d]  %f\n",vecod[ma],max);
	printf("el precio minimo es [%d]  %f",vecod[mi],min);
	
	
	return 0;
}

