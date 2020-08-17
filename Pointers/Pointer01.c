#include<stdio.h>
#include<stdlib.h>


struct NumComplejos{ // LA ESTRUCTURA CONTIENE DATOS RELACIONADOS PARA UN TAREA EN ESPECIFICO
    float real;
    float imaginario;
};
typedef struct Medidas{ //MISMA ESTRUCTURA PERO AGREGANDO UN ALIAS PARA TRANAJAR MEJOR
    float altura;
    int peso;
}med,Med; // NUEVO ALIAS
struct Hipotenusa{ // MISMA ESTRUCTURA SIN ALIAS PERO DECLARANDO LA VARIABLE GLOBAL DE UNA VEZ
    float cat1;
    float cat2;
} problemaA; // VARIABLE GLOBAL

int funcionValor(int g, int h); // PASA DOS VALORES DE UNA FUNCION
void funcionReferencia(int *k); // PASA UN VALOR POR REFERENCIA
void funcionArreglo(int *d[]); // PASAR UN ARREGLO A OTRA FUNCION
void PunteroFuncion(int x); // HACER UN PUNTERO DE UNA FUNCION COMPLETA

int main(){
    int a=10;
    int z=80;
    int array[5]={5,6,7,9,7};
    int *pArray=array;
    int i;
    int log= sizeof(array)/sizeof(int);

    printf("\tTamano del arreglo: %d\n",log);
    printf("%d\n\n",a);

    printf("la suma es: %d\n\n",funcionValor(a,z));

    funcionReferencia(&a);
    printf("Nuevo valor: %d\n\n",a);

    funcionArreglo(pArray);

    void (*funcion)(int);
    funcion=&PunteroFuncion;
    (*funcion)(1000);

    struct NumComplejos datosA={10.10, -3.5}; //PRIMERA ESTRUCTURA
    //ACCEDEMOS A LOS VALORES DE LA ESTRUCTURA
    printf("Valores de la structura: real [%.2f] e imaginario [%.2f]\n",datosA.real,datosA.imaginario);

    /*LE CAMBIAMOS LOS VALORES YA ESTABLECIDOS
    datosA.real =50;
    datosA.imaginario=-5;
    */
    med datosB={1.80, 90}; //SEGUNDA ESTRUCTURA
    printf("Valores de la  segunda structura: altura [%.2f m] y peso [%d kg]\n",datosB.altura,datosB.peso);

    //TERCERA ESTRUCTURA
    problemaA.cat1= 15.78;
    problemaA.cat2= 10.89;
    printf("Valores de la  tercera structura: cateto 1 [%.2f ] y cateto 2 [%.2f]\n",problemaA.cat1,problemaA.cat2);



return 0;
}
int funcionValor(int g, int h){
return g+h;
}
void funcionReferencia(int *k){
    *k+=5;
}
void funcionArreglo(int *d[]){

for(int i=0;i<5;i++){
    printf("posicion[%d] es %d\n",i,d[i]);
}
}
void PunteroFuncion(int x){

printf("\nIngreso este valor: %d\n\n",x);
}
