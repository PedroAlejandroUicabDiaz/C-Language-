#include<stdio.h>
#include<stdlib.h>
#include<math.h>
// NEW FUNCTION TO HIPOTENUSA
float hipotenusa(float cat1, float cat2){
    float hip;
    // OPERATIONS
    hip=sqrt(pow(cat1,2)+pow(cat2,2));
    return hip; // RETURN THE VALUE
}
int main (int argc, char**argv){
    int i;
    float hip,cat1,cat2;

    // ASK THE VALUES FROM POWERSHELL
    cat1=atof(argv[1]);
    cat2=atof(argv[2]);

    //READ THE VALUES
    for(i=0;i< argc;i++){
      printf("argv[%d] is %s \n",i,argv[i]);
    }
    // CALL THE FUNCTION OF HIPOTENUSA AND SHOW THE RESULT
    printf("%f\n",hipotenusa(cat1,cat2));

  return 0;
}
