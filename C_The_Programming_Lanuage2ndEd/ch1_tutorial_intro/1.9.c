/* copy its input to its output, replace string of one or more blanks with a single blank

if there is a blank
    



*/
#include <stdio.h>

int main(){
    int c, bl;
    bl = 0;
    while((c != getchar()) != EOF){
        if(c ==  ' '){
            ++bl;
        }
        if((bl < 2) && (c == '\n')){
        putchar(c);
        }
    }
}