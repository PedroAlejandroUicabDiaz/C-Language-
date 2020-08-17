#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int primo(int n);
// NEW FUNCTION
int main(int argc, char** argv){
    int i;
    // VALUE FROM TERMINAL
    int index = atoi(argv[1]);

    for(i=0; i<index; i++)
        if( primo(i) )
          printf("%d\t",i);
    printf("\n");

return 0;
}

int primo(int n){
    int i, raiz;
    // COMPARE N BY 2
    if(n<2) return 0;
    //compute sqrt
    raiz= sqrt(n);
    for(i=2; i<=raiz; i++)
        if(n%i==0) return 0;
    return 1;
}
