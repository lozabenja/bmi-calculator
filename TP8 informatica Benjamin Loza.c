#include <stdio.h>
#include <stdlib.h>

#define TAM 20

int i;
int n;

	
		
int cuantas_piezas(int);
	
int rectificable(float, float);

int rechazada(float, float);
	
void cargar_piezas(float *p, int n){
	
	for(i=0;i<n;i=i+1){
		do{
			printf("ingrese diametro de la pieza %d: ",i);
			scanf("%f",p+i);
		} while(*(p+1)<0);
	}
}
	
int contar(int (*criterio)(float, float), float valor, float *p, int n){
	
	int cont=0.0;
	
	for(i=0;i<n;i=i+1){
		
		if(criterio(*(p+i),valor)){
			cont=cont+1;
		}
	}
		
	
	return cont;
}
	
float* reserva_memoria(int n){
	
	float *q=(float *)malloc(n*sizeof(float));
	
	if(q==NULL)
		exit(1);
	
	return q;
}
	
void segregar(int (*criterio)(float, float), float valor, float *p, int n, float *q) {
	
	int num=0;
	
	for(i=0;i<n;i=i+1){
		
		if(criterio(*(p + i), valor)) {
			*(q +num) = *(p + i);
			num=num+1;
		}
	}
}
	
	

	
void mostrar_piezas(char *mensaje, float *p, int n){
		
	printf("piezas:%s:\n",mensaje);
	
	for(i=0;i<n;i=i+1){
		printf("diametro:%.2f\n",*(p+i));
		
	}
	}
	
	
	int main(int argc, char *argv[]) {
		float diametros[TAM] = {0};
		

		int n;
		
		float max = 12;
		
		float min = 10;
		
		n = cuantas_piezas(TAM);
		
		cargar_piezas(diametros, n);
		
		int n_rectificar = contar(rectificable, max, diametros, n);
		
		float *p_rectificables = reserva_memoria(n_rectificar);
		
		segregar(rectificable, max, diametros, n, p_rectificables);
		
		int n_rechazar = contar(rechazada, min, diametros, n);
		
		float *p_rechazadas = reserva_memoria(n_rechazar);
		
		segregar(rechazada, min, diametros, n, p_rechazadas);
		
		mostrar_piezas("rectificables", p_rectificables, n_rectificar);
		
		mostrar_piezas("rechazadas", p_rechazadas, n_rechazar);
		
		return 0;
	}
	
	
	
	
	
	
	int cuantas_piezas(int max) {
		int n;
		do {
			printf("Cuántas piezas va a ingresar: ");
			scanf("%d", &n);
		} while ((n<0)||(n>max));
		return n;
	}
	int rectificable(float diametro, float valor) {
		if (diametro > valor)
			return 1;
		else
			return 0;
	}
	
	int rechazada(float diametro, float valor){
		
		if (diametro<valor)
			return 1;
		else return 0;
	}
