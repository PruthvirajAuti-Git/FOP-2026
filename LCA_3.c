//Assignment 19
//  Employ Details: 


#include <stdio.h>
#include <string.h>

#define MAX 100


struct Employee {
    char name[50];
    char designation[50];
    char gender;
    char doj[15]; 
    float salary;
};


int totalEmployees(int n);
void countGender(struct Employee emp[], int n);
void salaryAbove10k(struct Employee emp[], int n);
void assistantManagers(struct Employee emp[], int n);

int main() {
    struct Employee emp[MAX];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details for employee %d\n", i + 1);

        printf("Name: ");
        scanf("%s", emp[i].name);

        printf("Designation: ");
        scanf("%s", emp[i].designation);

        printf("Gender (M/F): ");
        scanf(" %c", &emp[i].gender);

        printf("Date of Joining: ");
        scanf("%s", emp[i].doj);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }


    printf("\nTotal Employees: %d\n", totalEmployees(n));
    countGender(emp, n);
    salaryAbove10k(emp, n);
    assistantManagers(emp, n);

    return 0;
}


int totalEmployees(int n) {
    return n;
}


void countGender(struct Employee emp[], int n) {
    int male = 0, female = 0;

    for(int i = 0; i < n; i++) {
        if(emp[i].gender == 'M' || emp[i].gender == 'm')
            male++;
        else if(emp[i].gender == 'F' || emp[i].gender == 'f')
            female++;
    }

    printf("\nMale Employees: %d", male);
    printf("\nFemale Employees: %d\n", female);
}


void salaryAbove10k(struct Employee emp[], int n) {
    printf("\nEmployees with salary > 10000:\n");

    for(int i = 0; i < n; i++) {
        if(emp[i].salary > 10000) {
            printf("%s\n", emp[i].name);
        }
    }
}


void assistantManagers(struct Employee emp[], int n) {
    printf("\nEmployees with designation Assistant Manager:\n");

    for(int i = 0; i < n; i++) {
        if(strcmp(emp[i].designation, "AssistantManager") == 0) {
            printf("%s\n", emp[i].name);
        }
    }
}
