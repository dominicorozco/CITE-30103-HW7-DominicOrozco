#include <stdio.h>

struct Student {
    char name[40];
    int roll;
    float marks;
};

int main() {
    struct Student s[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Student %d name: ", i+1);
        scanf("%s", s[i].name);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n%-15s %-10s %-10s\n", "Name", "Roll", "Marks");
    for (i = 0; i < 5; i++) {
        printf("%-15s %-10d %-10.2f\n", s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}

