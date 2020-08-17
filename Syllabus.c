// T Y P E  O F  P R O G R A M M I N G  L E N G U A G U E
//                                 LOW   LEVEL
/*   DESCRIPTION: A low-level language is a type of programming language that contains basic
                  instructions recognized by a computer.

     CHARACTERISTICS:*Low-level languages are useful because programs written in them can
                      be created to run very fast and with a minimal amount of memory usage.

                      *Low-level languages are treated as being closer to computers.  Basically
                      speaking, their prime function is to manoeuvre, administer, and execute the
                      computing hardware and assorted elements.

     APPLICATION: *Few programmers write programs in low level assembly language, but it is still
                  used for developing code for specialist hardware, such as device drivers.
                  *Programmers rarely write in machine code (binary) as it is difficult to understand.

*/

//                                  HIG   LEVEL

/*   DESCRIPTION: A high-level language is a programming language intended to streamline computer programming.
                  It is called high-level because it is quite a few steps away from the original code run on a
                  computer’s central processing unit (CPU).  High-level source code consists of easy-to-read s
                  tructures that are later translated into a low-level language, which can only be perceived and
                  run by a specific CPU.

     CHARACTERISTICS: *It is abstracted further away from the computer itself.

                      *It focuses more on programming logic rather than on basic
                       hardware elements like memory address and register usage.

                       *It is a particular programming language that allows creation
                       of a program in a much easier to understand programming framework.


     APPLICATION: Software programs are written in high-level languages, like C#, Swift, and PHP.
                  A software developer can create and edit source code in a high-level language
                  using a programming IDE or even a basic text editor. However, the code is not
                  recognized directly by the CPU. Instead, it must be compiled into a low-level
                  language.

*/


// P R O G R A M   S T R U C T U R E

// BOOKSTORE
// WE CALL SOME THE BOOKSTORE TO USE PART OF CODE
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <conio.h>

//
int main (){ // HEADBOARD

    //VARIABLES
    int a;
    float b;
    char c;
    double d;
    long z;
    short u;
    long long g;

    //BODY
    // PART WHERE YOU CAN WRITE THE CODE.
    printf("Hello word.");
    printf("Estamos en programando en c");
    printf("Vamos");
    printf("Apocalypsis");

return 0; // THE END OF FUNCTION, RETURN SOMETHING, DEPENDS OF TYPE FUCTION YUO CAN USE.
}

// RESERVED WORDS
/*Each kind of language have its own reserved words. we can't use that words, only for the function assigned.

auto-case-char-goto-while-if-static-do-
*/

// IDENTIFIERS
/*
An identifier can be composed of any combination of:
- letters (lowercase and uppercase), Except for letters with tilde, ñ, ç,…
- digits
- the underlined symbol '_'.
Unique The only restriction is that the first character cannot be a digit.
It is not limited the length of the identifiers
- Some implementations only recognize the first 8 and others
(ANSI) the first 31 characters.
Upper and lower case: There is a difference between upper and lower case
There is a set of characters that have a meaning special.
For example: x -y2 -suma_1 -_t TABLA
*/

// CONSTANTS
/*C Constants is the most fundamental and essential part of the C programming language.
Constants in C are the fixed values that are used in a program, and its value remains
the same during the entire execution of the program.

-Constants are also called literals.
-Constants can be any of the data types.

Constants are categorized into two basic types, and each of these types has its subtypes/categories. These are:

                                     Primary Constants
1.-Numeric Constants
  1.1-Integer Constants
  1.2-Real Constants
2.-Character Constants
  2.1-Single Character Constants
  2.2-String Constants
  2.3.Backslash Character Constants

                                      Secondary Constant
Array
Pointer
Structure
Union
Enum

*/

// OPERATORS

/*
          Arithmetic Operators
An arithmetic operator performs mathematical operations.

+ Addition
- Subtraction
* Product
/ Division
% Remainder

        mIncrement and Decrement Operators
C programming has two operators increment ++ and decrement -- to change the value of
an operand (constant or variable) by 1.

        mAssignment Operators
An assignment operator is used for assigning a value to a variable.
=
+=
-=
*=
/=
%=

       Relational Operators
A relational operator checks the relationship between two operands.
==	Equal to something
>	Greater than
<	Less than
!=	Not equal to
>=	Greater than or equal to
<= 	Less than or equal to

      Logical Operators
An expression containing logical operator returns either 0 or 1 depending upon
whether expression results true or false.
&&	Logical AND.
||	Logical OR.
! Logical NOT. True only if the operand is 0

     Bitwise Operators
Bitwise operators are used in C programming to perform bit-level operations.
&	Bitwise AND
|	Bitwise OR
^	Bitwise exclusive OR
~	Bitwise complement
<<	Shift left
>>	Shift right

*/

//PUNCTUATION MARKS
/* The ispunct() function checks whether a character is a punctuation mark or not.
if the argument (character) passed to the ispunct() function is a punctuation, it returns
a non-zero integer. If not, it returns 0.
The punctuation and special characters in the C character set have various uses, from
organizing program text to defining the tasks that the compiler or the compiled program
carries out. They do not specify an operation to be performed. Some punctuation symbols a
re also operators.
Syntax
punctuator: one of ( ) [ ] { } * , : = ; ... #
*/


// D E B U G G I N G   A   P R O G R A M

//                                              S Y N T A X
/*
The syntax error in computer programing differ from logical errors in that they don't follow a correct sequence in the computer
language. With compiled languages, you will run into any syntax errors before the program can run.
For interpreted languages a syntax error would pop up during run time. However, in both cases, the copiler will give you the
location of syntax error, which makes it rather easy to find and fix.
>> Syntax error are like "spelling and grammar" problems<<
*/

//                                              L O G I C

/*Logical errors are the hardest of all error types to detect. They do not cause the program to crash or simply not work at all,
the causes it " misbehave" in some way. One example of logic error is null reference. Null reference is responsible for huge chunk of
application bugs, and they are usually very simple mistakes involving missing or wrong "computer logic"
In general, syntax  error are smaller, even single-digit error, while logic error can involves large sections of code and the general flow of
the code.
*/

//                                           E X E C U T I O N
/*
Execution errors only become evident during runtime. An execution error occurs when a program is asked to do something that it
cannot, resulting in a "crash". The code contains no syntax errors or logic errors but when it run it can't perform the task that it
has been programmed to carry out.
*/
