#include<stdio.h>
#include<stdlib.h>

void twonumb(int a, int b);
void twoptr(int *a, int *b);
void probando(int *a[], int *b);
void pedirnumb(int *a);
void shownumb(int *a[], int *b);
int main (){
    char c;
    char *ptr;

    ptr=&c;
    *ptr= 'A';

    printf("Ver valor : %c\n",*ptr);
    //-----------------------------------
    printf("-----");
    printf("\n\n");
    int y=5;
    int z=10;
    int *nptr;
    int *mptr;

    nptr=&y;
    printf("Ver valor y con un puntero: %d\n",*nptr);
    printf("Ver direccion y: %p\n",&nptr);

    z=*nptr;
    printf("Ver valor nuevo de z: %d\n",z);

    *nptr=7;
    printf("Ver valor nuevo de z & y: %d\n",*nptr);

    mptr=nptr;
    printf("pasamos el valor de puntero A to puntero B: %d\n",*mptr);

    *mptr+=27;
    printf("sumamos 27 al puntero B: %d\n",*mptr);

    y=(*mptr)+1;
    printf("sumamos 1 al puntero B y lo pasamos a la variable y: %d\n",y);

    //-----------------------------------
    printf("-----");
    printf("\n\n");

    int x=450;
    int h=900;
    int log=3;
    int array[3]={15,26,53};
    int *ptrarray=array;

    twonumb(x,h);
    printf("----\n");
    twoptr(&x,&h);
    printf("----\n");
    probando(ptrarray,&log);

    printf("----\n");
    int tamano;
    printf("\nDame el tamano del arreglo: "); scanf("%d",&tamano);
    pedirnumb(&tamano);






return 0;
}
void twonumb(int a, int b){
    int suma=a+b;
    printf("Valor A pasado: %d\n",a);
    printf("valor B pasado: %d\n",b);
    printf("valor suma: %d\n",suma);
}

void twoptr(int *a, int *b){
    int suma=*a+*b;
    printf("Valor A pasado con puntero: %d\n",*a);
    printf("valor B pasado con puntero: %d\n",*b);
    printf("valor suma realizada con punteros: %d\n",suma);

}
void probando(int *a[], int *b){
    for(int i=0;i<*b;i++){
        printf("Posicion [%d] es %d\n",i,a[i]);
    }
}
void pedirnumb(int *a){
    int arreglo[100];
    int *pArr=arreglo;
    int G=*a;

    printf("tamano dado es: %d\n",G);
    system("PAUSE");
    for(int i=0; i<*a;i++){
        printf("Valor %d: ",i+1); scanf("%d",&arreglo[i]);
    }

    printf("----\n");
    shownumb(pArr,&G);

}
void shownumb(int *a[], int *b){

    for(int i=0; i<*b;i++){
        printf("posicion[%d] es %d: \n",i+1,a[i]);
    }

}
