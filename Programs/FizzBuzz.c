#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//NEW FUNCTION TO OPERATION
int FizzBuzz(int x){
  int i;
  // BUCLE FOR TO RUN EACH NUMBER TO LIMIT
  for(i=1; i<=x; i++){
    // FIRST EVALUATION
    if(i%3==0 && i%5==0){
        printf("FizzBuzz\n");
    }
    else{
      //SECOND EVALUATION
      if(i%3==0){
          printf("Fizz\n");
      }
      else{
        //THIRD EVALUATION
        if(i%5==0){
          printf("Buzz\n");
        }
        //PRINT THE NUMBERS
        else{
          printf("%d\n",i);
        }
      }
    }
  }
  return (0);
}
int Fizzbuzz(int x);

int main(int argc, char** argv){
  // VALUE FROM POWERSHELL
  int num=atoi(argv[1]);
  //SHOW THE RESULT
  printf("%d\n",FizzBuzz(num));

return 0;
}
