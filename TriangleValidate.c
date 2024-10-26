#include <stdio.h>
int main(){

int height, base, Hypotenuese;
/*Prompt the user for the variables needed and store them*/
    printf("Enter the lengths of the triangle sides:\n");
    printf("Height: ");
    scanf("%d", &height);
    printf("Base: ");
    scanf("%d", &base);
    printf("Hypotenuse: ");
    scanf("%d", &Hypotenuese);
/*Using if statements to validate and find the type of the triangle, then printing the type*/
if (height + base <= Hypotenuese || height + Hypotenuese <= base || base + Hypotenuese <= height) {
    printf("Invalid Triangle");
    return 0;
    } else if (height == base && base == Hypotenuese) {
    printf("Equilateral triangle.");
    } else if (height == base || height == Hypotenuese || base == Hypotenuese) {
    printf("Isosceles triangle.");
    } else {
        printf("Scalene triangle.");
    }

}
