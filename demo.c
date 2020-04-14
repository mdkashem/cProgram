
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

/* A Variable declaration provides assurance to the compiler that there exists a variable with the given
type and name so that the compiler can proceed for further compilation without requiring the complete detail about the variable.
*/

extern int a, b;
extern int c;
extern float f;

#define LENGTH 10 // TO define constant 
static int count = 5; /* global variable */
void staticTest(void);// function to test static variable 



int main() {
  // Variable definition 
  int a, b;
  int c;
  float f;

  const int length = 10;
   // actual intiation 
   a =10;
   b= 20;
   c = a+b;
   char a1 = 'a';
   char a2 = 'A';
   int i = a1-a2;
   
   auto int month ; // auto, by default all auto, 
   register int mile; // stored in register instead of RAM 
   static int count =5; // exist life time of the program; 
   printf("Value of c : %d \n", c);
   f= 70.0/3.0;

   printf("Value of the i : %d \n",i);

 

   while(count--){
   	   staticTest();
   }

   
   return 0;
}

// function 
int func (){

return 20;
}
void staticTest(void){

static int i = 5; /* local static variable */
   i++;

   printf("i is %d and count is %d\n", i, count);

}