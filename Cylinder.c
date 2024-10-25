#include <stdio.h>
/*Write the value of Pi which is a constant*/
#define Pi 3.14159265359
/*Function for surfacearea*/
float SurfaceArea(){
extern float Radius, Height;
return 2 * Pi * Radius * Height + 2 * Pi * Radius * Radius;
}
/*Function for calculating the volume*/
float Volume() {
extern float Radius, Height;
return Pi * Radius * Radius * Height;
}
/*Your global variables*/
float Radius, Height;

int main(){
    /*Asking user for the variables*/
printf("Kindly enter the radius of the circle: ");
scanf("%f", &Radius);
printf("\nKindly enter the height of the circle: ");
scanf("%f", &Height);
/*Outputing the results*/
printf("\nThe surface area and volume of a circle with radius %.2f and height %.2f is:\n %.2f and %.2f respectively\n", Radius, Height, Volume(), SurfaceArea());
}
