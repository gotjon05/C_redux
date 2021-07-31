// Count blanks, tabs and nls 


#include <stdio.h>

int main(){
    int tab, nl, blanks, c;
    tab = nl = blanks = 0;

    while((c = getchar()) != EOF){
        if(c == '\t'){
            ++tab;
        }
        else if(c == '\n'){
            ++nl;
        }
        else if(c == ' '){
            ++blanks;
        }
    }
   printf("tabs: %d spaces: %d blanks: %d", tab, nl, blanks);


}
