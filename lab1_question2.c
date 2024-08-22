// Write a C program that takes the height and width of a rectangle as an input from user and
// compute the perimeter and area of a rectangle

#include <stdio.h>

int main(){

    float height,width,area,perimeter;
 
    // Taking height Input
    printf("Enter Height:");
    scanf("%f" ,&height);

    // Taking width Input
    printf("Enter width:");
    scanf("%f" ,&width);
    
    // Calculating Area and perimeter
    area=height*width;

    perimeter=2*(height+width);
    
    // Print The Details
    printf("The Area of the rectangle is: %.2f\n", area);
    printf("The Perimeter of the rectangle is: %.2f\n", perimeter);




    return 0;
}