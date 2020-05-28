/***********
This is Md Abul Kashem. I am a computer science student at Easter Washington University. I like to learn new stuff.
I love computer programming with c. 
This is a Program to create a text file for writing. Using the function fprintf(), write a simple text message such as “Hello\n” to the file and close it. 
Now re-open it for read mode and determine the following: 
(a) Whether or not the ‘\n’ character is translated into a line feed sequence.  
******************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <ctype.h>
#include "fileTest.h"




int main(int argc, char *argv[]){

   if (argc != 3){
       printf("Incorrect Parameters.\n");
       exit(0);
   }

   int word_count = countString(argv[1], argv[2]);
   int empty_line = countEmptyLines(argv[0]);

   printf("The string \"%s\" occurs %d times in File \"%s\".\n", argv[2],  word_count, argv[1]);
   printf("File \"%s\" has %d empty lines.\n", argv[1], empty_line);

   return 0;

}


