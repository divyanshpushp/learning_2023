#include <stdio.h>

int main() {
    int rollNo;
    char Fname[50],Lname[50],title[5];
    float physicsmarks, mathsmarks, chemistrymarks;
    float totalMarks, percentage;

    // Read student information
    printf("Enter Roll No: ");
    scanf("%d", &rollNo);

    printf("Enter Title Mr./Ms.: ");
    scanf(" %[^\n]", title);

    printf("Enter First Name: ");
    scanf(" %[^\n]", Fname);

    printf("Enter Last Name: ");
    scanf(" %[^\n]", Lname);

    printf("Enter Marks in Physics out of 100: ");
    scanf("%f", &physicsmarks);

    printf("Enter Marks in Math out of 100: ");
    scanf("%f", &mathsmarks);

    printf("Enter Marks in Chemistry out of 100: ");
    scanf("%f", &chemistrymarks);

    // Calculate total marks and percentage
    totalMarks = physicsmarks + mathsmarks + chemistrymarks;
    percentage = (totalMarks / 300) * 100;

    // Display summary
    printf("\n----- Student Summary -----\n");
    printf("Roll No: %d\n", rollNo);
    printf("Name: %s %s %s\n",title, Fname,Lname);
    printf("Marks in Physics: %.2f\n", physicsmarks);
    printf("Marks in Math: %.2f\n", mathsmarks);
    printf("Marks in Chemistry: %.2f\n", chemistrymarks);
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
