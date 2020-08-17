#include <stdio.h>
#include <stdlib.h>

int capicua(int x);

int main(int argc, char** argv){

    printf("%d\n",capicua(atoi(argv[1])));
   return 0;
}

int capicua(int x){
  int aux,r,numinv=0;
  aux=x;

  while(aux>0){

	r=aux%10;
	aux=aux/10;
	numinv=numinv*10+r;
  }
  //Comparison to know if they are capicua number

  if(x==numinv) return 1;
  else return 0;

}
