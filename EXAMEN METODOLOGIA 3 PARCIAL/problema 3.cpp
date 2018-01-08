#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int inicial,final,contador, saltos=0;
  float x1,x2,x3,mayor,menor;

printf ("Ingre los valores :");
scanf ("%f %f %f",&x1,&x2,&x3);

menor = x1;

mayor = x3;


if ( x2 < mayor )
menor = x2;
if ( x3 < mayor )
menor = x3;

if ( x1 > menor )
mayor = x1;
if ( x2 > menor )
mayor = x2;

printf ("El orden de mayor a menor : %f %f\n",mayor,menor);

  printf("introduce el valor inicial: ");
  scanf("%d",&inicial);
  printf("Introduce el valor final: ");
  scanf("%d",&final);

  contador = final;

  for(contador; contador>=inicial; contador--)
  {
    if(saltos == 5){
        saltos = 0;
        printf("\n");
    }
    printf(" %d",contador);
    saltos ++;
  }

  system("PAUSE");
  return 0;
}

