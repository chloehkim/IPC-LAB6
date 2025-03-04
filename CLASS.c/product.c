// Structure Example
// structure.c

#include <stdio.h>
#include "product.h"

int main(void)
{
    int i;
    struct Product product[] = { {2156, 2.34}, {4633, 7.89},
                                 {3122, 6.56}, {5611, 9.32} };
    const int n = 4;

    printf("  SKU Price\n");
    for (i = 0; i < n; i++)
    {
        printf("%5d $%.2lf\n", product[i].sku, product[i].price);
    }

    return 0;
}