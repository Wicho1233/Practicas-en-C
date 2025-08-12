#include <stdio.h>

int main(){
   //variable
    int promedio;
   //Declarar array
    int calif[10];
   //Usar espacios de arrays
    calif[0] = 80;
    calif[1] = 90;
    calif[2] = 85;

    promedio = (calif[0] + calif[1] + calif[2])/3;
    printf("El promedio es: %d",promedio);
}



