#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// NEW FUNCTION TO CHANGES THE 2 NUMBERS
void swaptwonumb(int *x, int *y){
  //OPERATION TO RELIZE THAT CHANGE
  int temp=*x;
  *x=*y;
  *y=temp;
}
int main (int argc, char** argv){
    int i;
    // VALUES FROM POWERSHELL
    int first=atoi(argv[1]);
    int second=atoi(argv[2]);

    //SHOW THE NUMBERS
    printf("The first number is %d\nThe second number is %d\n",first,second);
    //CALL THE NEW FUNCTION
    swaptwonumb(&first, &second);
    //SHOW TO USE THAT CHANGES
    printf("first: %d\nsecond: %d\n", first, second);

  return 0;
}
