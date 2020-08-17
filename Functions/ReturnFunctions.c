#include<stdio.h>
// f u n c i o n e s   d e   r e t o r n o
// --LAS FUNCIONES QUE INCIEN CON (VOID) NO PODRAN REALIZAR EL RETORNO DE NINGUN VALOR.--
int suma();
int num3=2; //VARIABLE GLOBAL. NO NECESITA ESTAR DEFINIDA EN LA SEGUNDA FUNCION "SUMA".
int main(){
    int num1,num2;
    printf("INGRESE LOS DOS VALORES: "); scanf("%i %i",&num1,&num2);

    printf("El resultado es: %i.\n",suma(num1,num2));
return 0;
} //FIN DE LA FUNCION MAIN PRINCIPAL
//INICIO DE LA NUEVA FUNCION
int suma(int num1, int num2){

    int suma= num1+num2+num3;

return suma;
}
