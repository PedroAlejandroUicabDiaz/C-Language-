#include<stdio.h>
#include<stdlib.h>
// NEW FUCTION TO KNOW IF THE YEAR IS LEAP OR NOT.
int leapyear(int x){
  //HERE, WE EVALUATE THE NUMBER REGISTERED FROM POWERSHELL
  // THE YEAR WILL BE LEAP IF ITS REMEIDER OF 4 AND 400 IS 0.
  // AND WILL BE DIFFERENT TO 100.
  //  WE RETURN 1 IF YEAR IS LEAP
  // AND 0 IF THE YEAR ISN'T LEAP
  if(x%4==0){
    if(x%100==0){
      if(x%400==0){
        return 1;
      }
      else{
        return 0;
      }
    }
    else{
      return 1;
    }
  }
  else{
    return 0;
  }

return 0;
}



int leapyear(int x);

int main(int argc, char**argv){
  // VALUE FROM POWERSHELL
    int year=atoi(argv[1]);
    //SHOW THE RESULT, CALLING THE FUNCTION
    printf("%d",leapyear(year));

return 0;
}
