#include <stdlib.h>

int  tat(void *x, void *y)
{
    free(x);
    free(y);
    return (0);
}
