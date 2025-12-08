#include <stdio.h>
struct Student {
    char name[50];
    int age;
    float marks;
};
void inputStudents(struct Student s[], int n) {
    for(int i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Age: ");
        scanf("%d", &s[i].age);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
}
float calculateAverage(struct Student s[], int n) {
    float total = 0;
    for(int i = 0; i < n; i++) {
        total += s[i].marks;
    }
    return total / n;
}
int main() {
    struct Student students[10];
    int n = 10;
    inputStudents(students, n);
    float avg = calculateAverage(students, n);
    printf("\nAverage marks of the class = %.2f\n", avg);

    return 0;
}
