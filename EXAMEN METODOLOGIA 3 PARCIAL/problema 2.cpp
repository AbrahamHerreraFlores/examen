#include <iostream>

/* Pedir un número entero, pero solo se aceptan numero no pares, una ves que se ha capturado el número se tendré 
que mostrar un mensaje donde se indique  si es positivo o negativo. */
 using namespace std;
int main(int argc, char** argv)
 {

 int numero ;  
   cout << "ingrese el numero entero: "; 
      cin>>numero ; 
 
 if( numero < 0 )
     
     {
   cout<<"el numero ingresado es negativo";
                 
      }
 else
  if( numero > 0)
                  
        {
   cout<<"el numero ingresado es positivo";

   }
 	return 0;
}




 
 
                  
                  

