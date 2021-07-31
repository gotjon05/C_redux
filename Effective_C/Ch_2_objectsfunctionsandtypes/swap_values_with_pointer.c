#include <stdio.h>


void swap(int *pa, int *pb){

    int t = *pa;   // dereferences the pointer pa, reads referenced value and puts it in variable t 
    *pa = *pb;     // dereferences pb, reads referened value, dereferences pointer, overwrites the value at location referenced by pa with value rerfenenced by pb   
    *pb = t;
}

int main(void){
    int a = 21;
    int b = 17;
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}