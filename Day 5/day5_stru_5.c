#include <stdio.h>

struct Student {
    char name[50];
    int age;
};

void swapFields(struct Student* student1, struct Student* student2);

int main() {
    struct Student student1, student2;

    printf("Enter details for student 1:\n");
    printf("Name: ");
    scanf("%s", student1.name);
    printf("Age: ");
    scanf("%d", &(student1.age));

    printf("\nEnter details for student 2:\n");
    printf("Name: ");
    scanf("%s", student2.name);
    printf("Age: ");
    scanf("%d", &(student2.age));

    printf("\nBefore swapping:\n");
    printf("Student 1:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Student 2:\n");
    printf("Name: %s\n", student2.name);
    printf("Age: %d\n", student2.age);

    swapFields(&student1, &student2);

    printf("\nAfter swapping:\n");
    printf("Student 1:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Student 2:\n");
    printf("Name: %s\n", student2.name);
    printf("Age: %d\n", student2.age);

    return 0;
}

void swapFields(struct Student* student1, struct Student* student2) {
    struct Student temp;

    temp = *student1;
    *student1 = *student2;
    *student2 = temp;
}
