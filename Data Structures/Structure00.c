#include<stdio.h>
struct perror{
    char nombre[30];
    int edad;
    float peso;
}Perro1={"DEMOGORGON",10,16.78},
Perro2={"MAXIMUS",12,20.45};

int main(){
    printf("El nombre de mi mascota es: %s, tiene %i meses y pesa %.2f kg",Perro1.nombre,Perro1.edad,Perro1.peso);
    printf("\nEl nombre de mi mascota es: %s, tiene %i meses y pesa %.2f kg",Perro2.nombre,Perro2.edad,Perro2.peso);

return 0;
}
