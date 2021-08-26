
/*----copy its input to its output, replace string of one or more blanks with a single blank if there is a blank----

   --- Everything except the the 2nd blank after the first blank needs to output ----

    I need to identify the first blank
    I need to identify the blank 

    inputs a sentence: "my name is   jonathan" output should be, "my name is jonathan"

*/
#include <stdio.h>

int main(){
    int c, space;
    while((c = getchar()) != EOF){
        if(c ==  ' '){
            ++space;
            if(space < 2){
                putchar(c);
            }       
        }
        if(c != ' '){
            space = 0; 
            putchar(c);            
        }
    }
}
