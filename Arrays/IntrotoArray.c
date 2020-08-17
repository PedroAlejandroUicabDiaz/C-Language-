/*
EXISTEN 2 TIPOS DE ARREGLOS, EL ARREGLO SENCILLO Y EL MULTI-DIMENCIONAL(MATRICES), AMBOS ARRGLOS INICIAN CON EL 0,1,3... Y AMBOS NOS
PERMITEN GUARDAR MUCHOS DATOS Y UNA VEZ DECLARADAS SU VALOR NO CCAMBIARA.


*a r r e g l o  s e n c i ll o

INT ARREGLO[4]= {3,4,1,5};
PRINTF("%i.\n",ARREGLOS[2]); -----> 1
PRINTF("%i.\n",ARREGLOS[0]); -----> 3


*a r r e g l o  m u l t i d i m e n c i o n a l

COL    0 1 2
FILA 0 5 3 1
FILA 1 6 4 2

INT MULTI[2][3]= {{5,3,1},{6,4,2};
PRINTF("%i.\n",MULTI[1][1]); -----> 4

*/
#include<stdio.h>
int main(){
    /*a r r e g l o    s e n c i ll o (UNIDIMENCIONALES)
    int arreglo[5]={2,3,7,8,10};
    printf("%i.\n",arreglo[2]);*/

    /*         e j e r c i c i o
    int sizeA;
    printf("Ingrese el tamaño del arreglo: "); scanf("%i",&sizeA);
    int age[sizeA];

    for(int i=0;i<sizeA;i++){
            printf("\nIngrese el valor: %i\n",i+1); scanf("%i",&age[i]);
    }
    printf("\nLos valores del arreglo son: \n");

    for(int i=0;i<sizeA;i++){
        printf("%i-\n",age[i]);
    } */
    // a r r e g l o   m u l t i
    int multi[2][3]={{5,3,1},{6,4,2}};
    printf("%i.",multi[0][1]);

return 0;
}
