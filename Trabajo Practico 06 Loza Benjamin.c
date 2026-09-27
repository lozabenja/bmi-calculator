#include <stdio.h>

float area;
float perimetro;

int CalcularAreaCirculo(float radio);
int CalcularPerimetroCirculo(float radio);
int CalcularAreaRectangulo(float longitud, float altura);
int CalcularPerimetroRectangulo(float longitud, float altura);
void ImprimirResultados(float area,float perimetro);

int main(int argc, char *argv[]) {
	
	int opcion;
	float radio;
	float longitud;
	float altura;
	
	do{printf("Ingrese la figura que desea calcular\n");
	printf("1 = Circulo\n");
	printf("2 = Rectángulo\n");
	printf("Opción: ");
	scanf("%d",&opcion);
	}while((opcion!=1)&&(opcion!=2));
	
		if(opcion==1){
		printf("Opcion 1 seleccionada\n");
		printf("ingrese el radio del circulo: ");
		scanf("%f",&radio);
	area=CalcularAreaCirculo(radio);
	perimetro=CalcularPerimetroCirculo(radio);
	
	ImprimirResultados(area,perimetro);
	
	}else{
		
		printf("Opcion 2 seleccionada\n");
		printf("ingrese la longitud del rectangulo: ");
		scanf("%f",&longitud);
		
		printf("ingrese la altura del rectangulo: ");
		scanf("%f",&altura);
			
		area=CalcularAreaRectangulo(longitud,altura);
		perimetro=CalcularPerimetroRectangulo(longitud,altura);
		
		ImprimirResultados(area,perimetro);
	}
	
	
	
	return 0;
}

int CalcularAreaCirculo(float radio){
	
	float area;
	
	area=3.14*radio*radio;
	
return area;
}
int CalcularPerimetroCirculo(float radio){
	
	float perimetro;
	
	perimetro=2*3.14*radio;
	
return perimetro;

}
int CalcularAreaRectangulo(float longitud, float altura){
	
	float area;
	
	area=longitud*altura;
	
return area;
}
int CalcularPerimetroRectangulo(float longitud, float altura){
	
	float perimetro;
	
	perimetro=2*(longitud+altura);
	
return perimetro;
}
void ImprimirResultados(float area,float perimetro){
	
	printf("el área es:%.2f\n",area);
	printf("el perímetro es:%.2f",perimetro);
	
	return ;
}
