#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int prn;
    float marks1, marks2, marks3;
    float avg;
};

int main() {
    struct Student s[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("\n--- Student %d ---\n", i + 1);

        printf("Enter student name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter PRN: ");
        scanf("%d", &s[i].prn);

        printf("Enter marks of subject 1: ");
        scanf("%f", &s[i].marks1);

        printf("Enter marks of subject 2: ");
        scanf("%f", &s[i].marks2);

        printf("Enter marks of subject 3: ");
        scanf("%f", &s[i].marks3);

        s[i].avg = (s[i].marks1 + s[i].marks2 + s[i].marks3) / 3;
    }

    printf("\n--- Student Details ---\n");
    for (i = 0; i < 3; i++) {
        printf("\nName: %s", s[i].name);
        printf("\nRoll No: %d", s[i].roll_no);
        printf("\nPRN: %d", s[i].prn);
        printf("\nAverage Marks: %.2f\n", s[i].avg);
    }

    return 0;
}