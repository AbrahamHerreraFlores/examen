#include <iostream> 
using namespace std; 
int main(){ 
int a, b; 
bool d = true; 
cout<<"Ingrese 2 numeros"<<endl; 
cin>>a; 
cin>>b;    
cout<<"Los 2 numero son iguales? "<<endl;  
d=(a==b && b==a);
if(d==true)   
cout<<"/*********Son iguales**********/"<<endl;
if(d==false)   
cout<<"/*******No son iguales******/"<<endl;
cin.get();  
return 0; 

}

