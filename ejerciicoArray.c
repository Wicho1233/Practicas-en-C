#include <stdio.h>

int main(){
   int grades[1][3];
    float cont;
    int i;
    int j;
    grades[0][0]=90;
    grades[0][1]=90;
    grades[0][2]=90;

    for(i=0;i<1;i++){
        cont =0;
        for ( j = 0; j < 3; j++){
            cont += grades[i][j];
        };
        cont /= 3.0;
      printf("The average marks obtained in subject %d is: %.2f\n" cont);
    };
    return 0;
}
