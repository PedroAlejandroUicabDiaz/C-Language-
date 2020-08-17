#include<stdio.h>
/*LAS ESTRUCTURAS ANIDADAS SON LAS QUE SE ENCUNETRAN DENTRO DE OTRAS ESTRUCTURAS.*/
#define length 2
struct owner{
    char nombre[20];
    char direccion[30];
};
struct dog{
    char nombre[20];
    int edad;
    struct owner ownerdog;
}dogs[length];
int main(){
    for(int i=0;i<length;i++){
            printf("Nomrbre del perro: \n"); scanf("%s",&dogs[i].nombre);
            printf("Edad del perro en meses: \n"); scanf("%i",&dogs[i].edad);
            printf("Nombre del dueño: \n"); scanf("%s",&dogs[i].ownerdog.nombre);
            printf("Direccion: \n"); scanf("%s",dogs[1].ownerdog.direccion);
            printf("\n");
    }
    for(int i=0;i<length;i++){
        printf("\nEl nombre del perro es: %s.\n",dogs[i].nombre);
        printf("La edad del perro es: %i meses.\n",dogs[i].edad);
        printf("El nombre del dueño es: %s.\n",dogs[i].ownerdog.nombre);
        printf("La direccion del dueño es: %s.\n",dogs[i].ownerdog.direccion);
    }

return 0;
}
