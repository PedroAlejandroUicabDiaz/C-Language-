#include<stdio.h>
/*LOS ARREGLOS DE ESTRUCTURA NOS PERMITEN ALMACENAR DENTRO DE UN ARREGLO VARIAS VARIABLES DE ESTRUCTURAS.  */
struct perro{
    char nombre[30];
    int edad;
    float peso;
}perros[3];

int main(){
    for (int i=0;i<3;i++){
        printf("\n%i.-Ingresa el nombre del perro: ",i+1); scanf("%s",&perros[i].nombre);
        printf("\n%i.-Ingresa la edad del perro: ",i+1); scanf("%i",&perros[i].edad);
        printf("\n%.-Ingrese el peso del perro: ",i+1); scanf("%f",&perros[i].peso);
    }
    for (int i=0;i<3;i++){
        printf("\n%i.-El nombre del perro es %s.\n",i+1,perros[i].nombre);
        printf("%i.-La edad del perro es %i.\n",i+1,perros[i].edad);
        printf("%i.-El nombre del perro es %.2f.\n",i+1,perros[i].peso);
    }


return 0;
}
