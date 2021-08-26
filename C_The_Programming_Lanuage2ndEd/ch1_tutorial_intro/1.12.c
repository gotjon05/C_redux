//write program that prints its input on word per line


#include <stdio.h>



int main(){
    int state, c;
    state = OUT;
    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\n' || c == '\t'){
             printf("\n");
        }
        else{
            printf("%c", c);
        }
    }

}