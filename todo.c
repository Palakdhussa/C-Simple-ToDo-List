#include <stdio.h>

int main() {
    char task[100];

    printf("===== SIMPLE TO-DO LIST =====\n");

    printf("Enter your task: ");
    fgets(task, sizeof(task), stdin);

    printf("\nYour Task:\n");
    printf("[ ] %s", task);

    printf("\nTask added successfully!\n");

    return 0;
}
