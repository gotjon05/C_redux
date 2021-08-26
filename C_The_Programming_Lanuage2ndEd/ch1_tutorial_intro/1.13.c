//Print a Histogram of the word_lens of the words in its input. Horizontal or Vertical 



#define WORD_SIZE 11
#include <stdio.h>
int main(){
    int words[10];
    int c, word_len;
    word_len = 0;


    /*Initializing all array elements to 0.*/
    for (int i = 0; i < WORD_SIZE; i++)
        words[i] = 0;


    //get input    
    while((c = getchar()) != EOF){
        ++word_len;
        //check if outside word
        if(c == " " || c == '\t' || c == '\n'){
            ++words[word_len - 1];
            word_len = 0; 
        }
    }
    
    
  for(int i = 0; i < WORD_SIZE; i++){
        printf("%d", words[i]);
  }

}