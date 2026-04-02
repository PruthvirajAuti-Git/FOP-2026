#include <stdio.h>
#include<string.h>
struct Student {
    char name[50];
    int rollNumber;
    float marks1;
    float marks2;
    float result;
}S[10];
void main() {
    for(int i=0;i<5;i++)
    {
       printf("enter name ");
       scanf("%s",S[i].name);
       printf("enter roll number ");
       scanf("%d",&S[i].rollNumber);
       printf("enter marks for subject 1 ");
       scanf("%f",&S[i].marks1);
       printf("enter marks for subject 2 ");
       scanf("%f",&S[i].marks2);    
    }
    
   for(int i=0;i<5;i++)
    {
        S[i].result = (S[i].marks1 + S[i].marks2) / 2; 
        printf("S[%d]: %s\n", i, S[i].name);
        printf("Roll Number: %d\n", S[i].rollNumber);
        printf("Marks for Subject 1: %.2f\n", S[i].marks1);
        printf("Marks for Subject 2: %.2f\n", S[i].marks2);
        printf("Average Marks (Result): %.2f\n", S[i].result);  
    }
}