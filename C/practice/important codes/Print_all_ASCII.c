#include <stdio.h>

int main()
{
    int i;
    for (i = 0; i <= 255; i++)
    {
        printf("\t%d = %c\t", i, i);
    }
    return 0;
}
