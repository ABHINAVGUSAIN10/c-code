#include <stdio.h>


struct Student {
    char name[50];
    int id;
    float m1, m2, m3;
    float avg; 
};


void calculateAverage(struct Student *student) {
    student->avg = (student->m1 + student->m2 + student->m3) / 3.0;
}

int main() {
    int n, i;

  
    printf("Enter the number of students: ");
    scanf("%d", &n);

   
    struct Student students[n];

   
    for (i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Marks of 3 subjects (m1 m2 m3): ");
        scanf("%f %f %f", &students[i].m1, &students[i].m2, &students[i].m3);

        
        calculateAverage(&students[i]);
    }

   
    printf("\nStudent Details:\n");
    for (i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("ID: %d\n", students[i].id);
        printf("Marks: %.2f %.2f %.2f\n", students[i].m1, students[i].m2, students[i].m3);
        printf("Average Marks: %.2f\n", students[i].avg);
        printf("\n");
    }

    return 0;
}
