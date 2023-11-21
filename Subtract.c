#include <stdio.h>
#define SUBTRACT(a, b) (a-b);

int main()
{
    int x = SUBTRACT(5, 3 + 4);
    printf("%d", x);
}
