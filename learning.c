#include <stdio.h>
#include "addresstypes.h"
int main(void) {
int a; 
int address p; 
a = 3;
p = addressof(a);
STR(p) = 2;
printf("a is = %d\n", a);
a = LDR(p) + 3;
printf("a is changed and is now = %d\n", a);
}
