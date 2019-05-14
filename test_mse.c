#include "lstmlib.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
    struct lstmlib *unit;
    int i, length = 100;
    unit = lstmlib_create(length);
    for (i = 0; i < length; i++) {
        (*unit).h[i] = 1.0;
        (*unit).halt_h[i] = 0.0;
    }
    printf("MSE:%lf\n", lstmlib_get_mse(unit));
    return 0;
}
