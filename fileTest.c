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
int countString(const char* fileName, char *str){
    FILE *f1;
    int word_count = 0;
	char buf[300];
    f1 = fopen(fileName, "r");
	//int len = strlen(str);

    if (f1 == NULL){
        perror("Cannot open files .....");
        exit(EXIT_FAILURE);
    }

    // Insert your code here!
	char lowerStr[100];
	char lowerBuf[300];
	int k;
	int lenstr = strlen(str);

	     for(k =0; k< lenstr; k++){
			lowerStr[k] = tolower(str[k]);
			}
	    lowerStr[k] ='\0';

	 while (fscanf(f1, "%s", buf) != -1)
    {
			int lenbuff = strlen(buf);
			int i;
		    for(i =0; i<lenbuff; i++){
				lowerBuf[i]=tolower(buf[i]);
		    }

        if((strstr(lowerBuf, lowerStr)) !=NULL){
			if(lenbuff == lenstr){
				word_count++;
			}
            else if(lenbuff > lenstr){
				if(lenbuff == lenstr+1){
					word_count++;
					if((lowerBuf[lenbuff-1] >= 'a' && lowerBuf[lenbuff-1] <= 'z')||(lowerBuf[lenbuff-1] >= 'A' && lowerBuf[lenbuff-1] <= 'Z')){
					 word_count--; 
					}
		
				}
				
				
			}
			
            
        }
		
    }

    fclose(f1);
    return word_count;
}



int countEmptyLines(const char *fileName)
{
    
    int emptyLine = 0;
	char line[300];
    FILE *fp = fopen("poem.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open specified file!\n");
        return -1;
    }
    
    // Insert your code here!
	 while(fgets(line, 300, fp)) {
            int i = 0;
            int len = strlen(line);
            emptyLine++;
            for (i = 0; i < len; i++) {
                if (line[i] != '\n' && line[i] != '\t' && line[i] != ' ') {
                    emptyLine--;
                    break;
                }
            }
        }
   
     return emptyLine;
    
}
