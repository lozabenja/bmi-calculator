#include <stdio.h>

float area;
float perimetro;
float CalcularAreaCirculo(float radio);
float CalcularPerimetroCirculo(float radio);
float CalcularAreaRectangulo(float longitud, float altura);
float CalcularPerimetroRectangulo(float longitud, float altura);
void ImprimirResultados(float area,float perimetro);

int main(int argc, char *argv[]) {
	
	int opcion;
	float radio;
	float longitud;
	float altura;
	
	do{printf("Ingrese la figura que desea calcular\n");
	printf("1 = Rectangulo\n");
	printf("2 = Circulo\n");
	printf("Opción: ");
	scanf("%d",&opcion);
	}while((opcion!=1)&&(opcion!=2));
	
		if(opcion==2){
		printf("Opcion 2 seleccionada\n");
		printf("ingrese el radio del circulo: ");
		scanf("%f",&radio);
	area=CalcularAreaCirculo(radio);
	perimetro=CalcularPerimetroCirculo(radio);
	
	ImprimirResultados(area,perimetro);
	
	}else{
		
		printf("Opcion 1 seleccionada\n");
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

float CalcularAreaCirculo(float radio){
	
	float area;
	
	area=3.14*radio*radio;
	
return area;
}
float CalcularPerimetroCirculo(float radio){
	
	float perimetro;
	
	perimetro=2*3.14*radio;
	
return perimetro;

}
float CalcularAreaRectangulo(float longitud, float altura){
	
	float area;
	
	area=longitud*altura;
	
return area;
}
float CalcularPerimetroRectangulo(float longitud, float altura){
	
	float perimetro;
	
	perimetro=2*(longitud+altura);
	
return perimetro;
}
void ImprimirResultados(float area,float perimetro){
	
	printf("el área es:%.2f\n",area);
	printf("el perímetro es:%.2f",perimetro);
	
	return ;
}
