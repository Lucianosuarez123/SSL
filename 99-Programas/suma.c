#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/*
* recordando los autómatas, estos podían aceptar una palabra en n pasos o rechazarla en a lo sumo n pasos. ¿Valdrá lo mismo acá? 
Si ya que reconocera si los dos strings son numeros en una cantidad de pasos igual o menor a la suma del largo de ambos strings.
en colaboracion con Nahuel Marek
 */
int esNumero(const char *nro) {
for (int i=0; i!=strlen(nro); i++){
		if(isdigit(nro[i])==0){
		puts("No es un numero");
		return 0;
	}
	puts("es numero");
}
return 1;
}

int main(int argc, char **argv) {
	if (argc != 3) {
		puts("uso: suma nro1 nro2");
		exit(0);
	}
	if (!esNumero(argv[1]) || !esNumero(argv[2])) {
		puts("nro1 y nro2 deben ser constantes numéricas");
		exit(-1);
	} 
	int sum1 = atoi(argv[1]);
	int sum2 = atoi(argv[2]);
	printf("la suma de %d y %d es %d", sum1, sum2, sum1+sum2);
	return 0;
}
