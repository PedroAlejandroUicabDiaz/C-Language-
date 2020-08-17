#include<stdio.h>
/*------APUNTADORES
LOS APUNTADORES SON VARIABLES CUYOS VALORES SON DIRECCIONES DE MEMORIAS POR LO GENEREAL CONTIENEN VALORES ESPECIFICOS, POR EJEMPLO
INT A=2;
PERO UN APUNTADOR CONTIENE LA DIRRECION DE UNA VARIABLE QUE CONTIENE UN VALOR ESPECIFICO, INFROMANDO AL COPILADOR SOBRE DOS COSAS,
EL NOMBRE DE LA VARIABLE Y EL TIPO DE DATO (EMTERO,FLOAT,CHAR). CUANDO EL COPILADOR ENCUNETRA LA VARIABLE RESERVADA (INT)
RESERVA 4 BYTES DE MEMORIA PARA ALMACENAR EL VALOR Y NOSOTROS AL ASIGANAR EL VALOR ESPECIFICAMOS UN ESPACIO EN MEMORIA PARA GUARDAR
LA VARIABLE A.
EN C NOSOTROS PODEMOS REFERIRNOS A UN AVARIABLE COMO UN OBJETO PEPRO NO SE TRATA DEL PARADIGMA ORIENTADOS EN OBJETOS SI NO
QUE SIMPLEMNETE ES EL CONJUNTO QUED DEFINE LA VARIABLE , ES DECIRR QUE TIENE UN VALOR, UNA DIRECCION DE MEMROIA Y UN NOMBRE.  */
 //EJEMPLO DE APUNTADOR
 /*
    int *apt =&a;
    printf("%i.\n",*apt);
    printf("%p\n",apt);
*/
/*  //--------------APUNTADORES LLAMADAS POR VALOR-----------------------
int cubo(int n);
int main(){
    int a=2;
    int num=5;
    printf("El valor original es: %i.\n",num);
    num =cubo(num);
    printf("El nuevo valor es : %i",num);
return 0;
}

int cubo(int n){

return n*n*n;
}
*/
//----------------APUNTADORES LLAMDAS POR REFERENCIA-----------------------
void cubo(int *n);
int main(){
    int num=5;
    printf("El valor original es: %i.\n",num);
    cubo(&num);
    printf("El nuevo valor es : %i.",num);
return 0;
}

void cubo(int *n){
*n= *n * *n * *n;
}
