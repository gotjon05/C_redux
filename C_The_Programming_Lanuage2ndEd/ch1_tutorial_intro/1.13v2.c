//Print a Histogram of the word_lens of the words in its input. Horizontal or Vertical 

/*  1. word_len characters until space, tab or newline 
    2. begin word_len from 0 if a new word

*/

#include <stdio.h>
int main(){
    int c, word_len;
    word_len = 0;
    while((c= getchar()) != EOF){
        //Current Word
        if(c !=  ' ' || c != '\t' || c != '\n'){
            printf("*");         
        }      
        else{
            printf("\n");        
        }     

    }
    
}