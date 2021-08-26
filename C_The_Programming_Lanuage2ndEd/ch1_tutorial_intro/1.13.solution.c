
#include <stdio.h>
int main()
{
        int i, count, c;
        int nchars[21];

        count = 0;
        for (i = 1; i <= 21; ++i)
                nchars[i] = 0;

        while ((c = getchar()) != EOF) {
                if (c != ' ' && c != '\n' && c != '\t') {
                        ++count;
                } else if (count > 0 && count <= 20) {
                        ++nchars[count];
                        count = 0;
                } else if (count > 20) {
                        ++nchars[21];
                        count = 0;
                }
        }
        printf("number of chars in words \n");
        for (i = 1; i < 22; ++i) {
                printf("%2d %4d ", i, nchars[i]);
                while (nchars[i] > 0) {
                        printf("|");
                        --nchars[i];
                }
                printf("\n");
        }
}