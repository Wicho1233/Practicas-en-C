#include <stdio.h>

//Arreglos multidimensionales 
//sintaxis: type name [size1][size2]....[sizeN];
//ejemplo:
int foo[1][2][3];
//ejemplo2:
char letters[1][5] = {
    {'a','b','c','d','e'}
};
//ejemplo3 
char vowels[][5] = {
    {'A','B','C','D','E'},
    {'a','b','c','d','e'}
};



int a[3][4] = {  
   {0, 1, 2, 3} ,   /*  initializers for row indexed by 0 */
   {4, 5, 6, 7} ,   /*  initializers for row indexed by 1 */
   {8, 9, 10, 11}   /*  initializers for row indexed by 2 */
};

int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
