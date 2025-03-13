#include <stdio.h>
#define MAX 3
struct Veggie
{
    char name[30];
    int stem;
    int leaves;

};

int main(void)
{
    struct Veggie salad[MAX]={{"spinach",20,20},{"borocolli",1,10},{"corn",0,8}};
    int salt = 5;
    int pepper = 6;
    int* addSalt = &salt;
    int* addSalt2 = &salt;
    int* addPepper = &pepper;
    int i;

    printf("A: %d, %d\n", salt, pepper);
    printf("B: %d, %d, %d\n", *addSalt, *addSalt2, *addPepper);

    pepper += salt;
    
    printf("A: %d, %d\n", salt, pepper);
    printf("B: %d, %d, %d\n", *addSalt, *addSalt2, *addPepper);

    *addSalt = *addSalt + 10;

    printf("A: %d, %d\n", salt, pepper);
    printf("B: %d, %d, %d\n", *addSalt, *addSalt2, *addPepper);

    for(i=0; i <MAX; i++)
    {
        printf("%s - %d, %d\n", salad[i].name, salad[i].stem, salad[i].leaves);
    
    } 
    
    for(i=0; i< MAX; i++)
    {
        salad[i].leaves *=2;
        salad[i].stem +=3;
    }
    
    for(i=0; i<MAX; i++)
    {
        printf("%s - %d, %d\n", salad[i].name, salad[i].stem, salad[i].leaves);
    }
    return 0;
}
