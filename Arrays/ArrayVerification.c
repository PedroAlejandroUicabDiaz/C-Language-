#include<stdio.h>
#include<stdlib.h>

int main(){
    int arrayA[]={'H','o','l','a','\0'};
    int arrayB[]={'H','o','l','a','\0'};
    int i;
    int tamaA= sizeof(arrayA)/sizeof(arrayA[0]);
    int tamaB= sizeof(arrayB)/sizeof(arrayB[0]);
    int valoresA;
    int valoresB;
    if(tamaA != tamaB){
        printf("No.\n");
    }
    else{
        printf("Si.\n");
        system("PAUSE");
        for(i=0;i<tamaA;i++){
            valoresA= arrayA[i];
            valoresB= arrayB[i];

            if(valoresA != valoresB){
                printf("La contrasena no coincide.\n");
                return 0;
            }
        }

    }
    printf("La contrasena coincide.\n");

return 0;
}
