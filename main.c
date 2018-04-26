#include <stdio.h> 
int main() {
	int a = 5; 
	int b = 2;
	printf("%i\n", suma(a,b));
	printf("%i\n", resta(a,b));
	printf("%i\n", mul
ti(a,b));
	printf("%i\n", divi(a,b));
	printf("%i\n", sumatoria(a));
	printf("%i\n", multiplicatoria(a));
	printf("%i\n", fibonacci(5));
	//printf("Hello World\n");
	return 0;	
	
}	
int siete() {
	
	return 7;
}	

int suma(int a,int b) {
	
	return a+b;
}

int resta(int a, int b) {
	return a-b;
}

int multi(int a, int b) {
	return a*b;
}

int divi(int a, int b) {
	return a/b;
}
int sumatoria(int a){
	int b=0;
	int x;
	for(x = 0; x <= a ; x = x+1){
		b = b+x;
	}
	return b;
}
int fibonacci(int a){
	int x;
	int b=0;
	int y=1;
	for(x=0;x<a;x= x+1){
		b=b+x;
		y=b+x;
	}
	return y;
}

int multiplicatoria(int a){
	int b=1;
	int x;
	for(x = 1; x <= a ; x = x+1){
		b = b*x;
	}
	return b;
}
