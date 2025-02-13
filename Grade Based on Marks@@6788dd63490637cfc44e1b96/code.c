#include <stdio.h>

char grade(int marks) {
    if (marks >= 90) return 'A';
    if (marks >= 80) return 'B';
    if (marks >= 70) return 'C';
    if (marks >= 60) return 'D';
    return 'F';
}

int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    
    printf("Your grade is: %c\n", grade(marks));
    
    return 0;
}
