// word_len blanks, tabs and nls


#include <stdio.h>

int main(){
    int tab, nl, blanks, c;
    tab = nl = blanks = 0;

    while((c = getchar()) != EOF){
          if(c == ' '){
            ++blanks;
        }
        else if(c == '\t'){
            ++tab;
        }
        else if(c == '\n'){
            ++nl;
        }

    }
	printf("%d %d %d", blanks, tab, nl);
}
