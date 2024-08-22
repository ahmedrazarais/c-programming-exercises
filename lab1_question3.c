// Write a C program to accept the height of a person in centimeters and categorize the person
// according to his height. (Height < 150cm – Dwarf, Height=150cm – Average, Height>=165cm –
// Tall).


#include <stdio.h>

int main() {
    int height;

    // Taking height input
    printf("Enter your height in centimeters: ");
    scanf("%d", &height);

    // Categorizing based on height
    if (height < 150) {
        printf("Dwarf\n");
    } else if (height == 150) {
        printf("Average\n");
    } else if (height >= 165) {
        printf("Tall\n");
    } else {
        printf("Below Average\n");
    }

    return 0;
}
