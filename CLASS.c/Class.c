#include <stdio.h>

struct Student
{
    int studentNum;
    float grades[4];
};

int main(void)
{
    int i;
    struct Student chloeInfo = {12345, {90.5f,43.5f,80.0f,90.0f}};

    printf("%d\n", chloeInfo.studentNum);
    
    for ( i=0; i < 4; i++)
    { 
        printf("%.2f\n", chloeInfo.grades[i]);
    }

    return 0;

}