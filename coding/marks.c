#include <stdio.h>
int main()
{
    float x,y;

        printf("Enter marks of subject python: ");
        scanf("%f", &x);
        printf("Enter marks of subject physic: ");
        scanf("%f", &y);




    printf("Total equvalent marks of subject c and data science : %.2f\n", ((0.3)*x + (0.7)*y));
    return 0;
}