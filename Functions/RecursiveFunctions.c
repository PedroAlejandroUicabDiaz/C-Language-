#include<stdio.h>
/*------NUMERO FACTORIAL
5¡= 5*4*3*2*1 o 5*4¡= 120
4¡= 4*3*2*1 0 4*3¡=24
3¡= 3*2*1 o 3*2¡=6
2¡= 2*1 0 2*1¡= 2
1¡= 1
0¡= 1
*/
long factorial(long numero);
int main(){
    int numero;
    printf("Ingresa un numero: "); scanf("%i",&numero);

    for(int i=0;i<=numero;i++){
        printf("%ld\n",factorial(i));
    }

return 0;
} // TERMINA FUNCION MAIN PRINCIPAL

//FUNCION RECURSIVA
long factorial(long numero){
    if(numero<=1){
        return 1;
    }
    else{
        return(numero*factorial(numero-1));
    }
}
