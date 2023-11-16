#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the Student structure
struct Student {
    char name[50];
    double grade;
};

// Function to find students with the highest grade
void find_highest_grade(struct Student* students, int size) {
    if (size <= 0) {
        printf("No students provided.\n");
        return;
    }

    double highest_grade = 0.0;

    
    for (int i = 0; i < size; i++) {
        if (students[i].grade > highest_grade) {
            highest_grade = students[i].grade;
        }
    }

    
    printf("Students with the highest grade:\n");
    for (int i = 0; i < size; i++) {
        if (students[i].grade == highest_grade) {
            printf("Name: %s, Grade: %.2lf\n", students[i].name, students[i].grade);
        }
    }
}

int main() {
    
    struct Student students[] = {
        {"Alice", 5.7},
        {"Bob", 3.5},
        {"Charlie", 9.4},
        {"David", 9.5},
      };

    
    int size = sizeof(students) / sizeof(students[0]);

    
    find_highest_grade(students, size);

    return 0;
}
