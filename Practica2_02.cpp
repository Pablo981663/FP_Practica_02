#include <stdio.h>
#include <stdlib.h>

int main(){
   float a,b,c;
   char opcion;
   printf(" a.-Suma\n b.-Resta\n c.-Multiplicacion \n d.-Division\n\n");
   printf("Seleccione una opcion: ");
 opcion=getchar();
   printf("Ingrese el primer valor: ");
   scanf("%f",&a);
   printf("Ingrese el segundo valor: ");
   scanf("%f",&b);

  switch(opcion){
case 'A':
case 'a':
    c=a+b;
    break;
case 'B':
case 'b':
    c=a-b;
    break;
case 'C':
case 'c':
    c=a*b;
    break;
case 'D':
case 'd':
     while (b==0){
        printf("Error, b debe ser diferente a 0\n");
        printf("Ingrese valor de b: ");
        scanf("%f",&b);
    }
    c=a/b;
    break;
   default:
    printf("Syntax error\n");
    opcion=='R';
  }
  if(opcion!='R'){

 printf("El resultado es %0.2f",c);
  }

}
