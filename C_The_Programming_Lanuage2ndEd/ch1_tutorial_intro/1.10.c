/*
Copy input to output , replacing each tab by \t, each backspace by \b and each backlash by \\

Mistakes: you need to use "\\" to specify a single backslash character.


*/


#include <stdio.h>
int main(){
    int c;
      while((c = getchar()) != EOF){
        if(c == '\t'){
            putchar("\\");
            putchar("t");
        }
        if (c == '\b'){
            putchar("\\");
            putchar("b");            
        }
        if (c == '\\'){
            putchar("\\");
        }
        if(c != EOF){
            putchar(c);
        }
    }

}