
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
extern v;
#define LENGTH 10 // TO define constant 
static int count = 5; /* global variable */
void staticTest(void);// function to test static variable 



int main() {
  // Variable definition 
  int a, b;
  int c;
  float f;
  int v;
  const int length = 10;
   // actual intiation 
   a =10;
   b= 20;
   c = a+b;
   auto int month ; // auto, by default all auto, 
   register int mile; // stored in register instead of RAM 
   static int count =5; // exist life time of the program; 
   printf("Value of c : %d \n", c);
   f= 70.0/3.0;

   printf("Value of the f : %f \n",f);

   v = func();

   printf("Value from function : %d \n", v);

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