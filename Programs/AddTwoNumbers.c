#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// NEW FUNCTION TO SUM
int addtwonumb(int x, int y){ //
  return x+y; // RETURN TO OPERATION
}

int main(int argc, char** argv){
    int i;
    //ASK THE VALUE FROM POWERSHELL
    int x1=atoi(argv[1]);
    int x2=atoi(argv[2]);
    // SHOW TO USE HIS NUMBERS
    printf("Your first number is: %d\n Your second number is: %d\n",x1,x2);
    //SHOW THE RESULT
    printf("The sum is %d\n",addtwonumb(x1,x2));

  return 0;
}
