/* (ESTE APARTADO ES ADICIONAL AL TEMA SIGUIENTE)

f u n c i o n e s --CONTINUE & BREAK--

NOS PERMITEN MANEJAR EL FLUJO DE NUESTRO PROGRAMA COMO QUERRAMOS, BREAK: CONCLUYE EL CICLO MIENTRAS QUE CONTINUE: PAUSA
Y SALTA EL MOMENTO QUE HEMOS MARCADO.

E J E M P L O ---BREAK---            COPIAR DENTRO DEL MAIN

INT NUM=0;
WHILE(NUM<=7){
   IF(NUM==2)
     { BREAK;
     }
     PRINTF("%i\n",NUM);
     NUM++;
   }

E J E M P L O ---CONTINUE---         COPIAR DENTRO DEL MAIN

INT NUM=0;
WHILE(NUM<=7){
   NUM++;
   IF(NUM==2)
      { CONTINUE;
      }
      PRINTF("%i\n",NUM);
   }
*/

//FUNCIONES BASICAS
//NOS SERVIRA PARA CREAR NUEVAS FUNCIONES Y LLAMARLAS DENTRO DE NUESTRA FUNCION MAIN PRINCIPAL.

#include<stdio.h>
/*void saludo(){
    printf("HOLA ALEJANDRO.");
return 0;
}*/
int main(){
    //saludo();
    //printf("%i.",suma());
    printf("HI");
return 0;
}
/*
//(EN DADO CASO QUE NO PUEDA LEERLO, DECLARAR LA VARIABLE NATES DEL MAIN PRINCIPAL)
int suma(){
    int num1=12; int num2=4; int suma=num1+num2;
return suma;
} */

