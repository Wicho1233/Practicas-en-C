#include <stdio.h>
//en c no existe el tipo de dato booleano
//por lo que hay que definir booleanos 
//#define BOLL char
//#define FALSE 0
//#define TRUE 1
// tipo numerico como int
//int foo;//variante
//int bar = 1;//constante
//otra manera de declarar variables

int main() { 
    int a =2;
    float b =3.44;
    double c =12.12;
    float sum;
    sum = a + b + c; 
    printf("la suma es igual a %f", sum);
    return 0;
}