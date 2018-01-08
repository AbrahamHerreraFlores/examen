#include <stdio.h>
//Problema 5//
//Solicitar el ingreso de 10 calificaciones y el nombre de diez alumnos diferentes (solo el nombre) las 
/*notas validadas son de 0 a 10, adicionalmente por cada alumno ingresado se tendrá que mostrar 
alguno de los siguientes mensajes: "bueno" suponiendo que la calificación este entre 10 y 9, 
"regular" si la calificación esta entre 8 y 7 y "malo" si la calif. Esta entre 6 y 0, por ejemplo:*/
/*Ingrese el nombre del alumno:
Emmanuel
Ingrese su calificación:
8
El alumno es regular

Y se repetiría la secuencia de acciones anterior.*/
	

float promedio(int valores[], int cantidad) {
    int i;
    float suma = 0.0;

    for (i = 0; i < cantidad; ++i)
        suma += valores[i];

    return suma / (float) cantidad;
}


int main() {

    int calificacion[10];
    char nombre[20];
    char opcion[3];
    int n, i;

    do {
        printf("Ingrese nombre del alumno: ");
        scanf("%s", nombre);

        printf("Cuantas calificacion tiene %s? ", nombre);
        scanf("%d", &n);

        for (i = 0; i < n; ++i) {
            printf("  calificacion %d: ", i + 1);
            scanf("%d", &calificacion[i]);
        }

        printf("El promedio de %s es %.1f\n", nombre, promedio(calificacion, n));

        printf("Desea calcular mas promedios (si/no)? ");
        scanf("%s", opcion);

    } while (opcion[0] == 's' || opcion[0] == 'S');

    return 0;
}
