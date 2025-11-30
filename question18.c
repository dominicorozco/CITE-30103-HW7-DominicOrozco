#include <stdio.h>

struct Student {
    char name[40];
    int roll;
    float marks;
};

int main() {
    struct Student s[5];
    int i, maxIndex = 0;

    for (i = 0; i < 5; i++) {
        printf("Student %d name: ", i+1);
        scanf("%s", s[i].name);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    for (i = 1; i < 5; i++) {
        if (s[i].marks > s[maxIndex].marks)
            maxIndex = i;
    }

    printf("\n--- Highest Marks ---\n");
    printf("Name: %s\n", s[maxIndex].name);
    printf("Roll: %d\n", s[maxIndex].roll);
    printf("Marks: %.2f\n", s[maxIndex].marks);

    return 0;
}

