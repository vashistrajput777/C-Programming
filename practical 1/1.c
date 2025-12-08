#include <stdio.h>

    int x(int a[10][10], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += a[i][i];
    }
    return sum;
}

int main() {
    int mat[10][10], n;
    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);
    printf("Enter matrix elements:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    int sum = x(mat, n);

    printf("\nSum of diagonal elements = %d\n", sum);

    if(sum % 2 == 0)
        printf("The sum is EVEN.\n");
    else
        printf("The sum is ODD.\n");

    return 0;
}
