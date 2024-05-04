#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES 

int main() {
    float height; //store the height
    float radius = 2.2; // give the value to radius
    float volume; //store the calculated volume in the variable

    
    printf("enter the height: ");
    scanf("%f", &height);

    
    volume = M_PI * pow(radius, 2) * height; // Calculate volume 

    printf("The volume of cylinder is: %f cubic meters\n", volume);

    return 0;
}