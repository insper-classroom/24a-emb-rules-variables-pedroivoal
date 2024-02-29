#include "stdio.h"


void foo(int *e_a) {
    *e_a = *e_a + 1;
}

void main(void) {

    int a = 0;
    int *e_a = &a;
    int b = 0;
    
    while (1) {
        foo(e_a);
        
        if (a > 5) {
            b = 1;
        }
    }
}

