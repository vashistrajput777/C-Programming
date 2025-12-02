#include <stdio.h>

int main(void)
{
        int a, b, c;
        printf("Enter first number A: ");
        scanf("%d", &a);
        printf("Enter secound number B: ");
        scanf("%d", &b);
        c = a;
        a = b;
        b = c;

        printf("a: %d, b: %d\n", a, b);
}