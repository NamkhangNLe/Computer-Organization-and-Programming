#include <stdio.h>

int main()
{
    int a = 1;
    int b = 0;
    int c = (a&&b) || (b) ? (a&&b) : (a||b);
    printf("%d", c);
}
