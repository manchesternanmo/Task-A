#include <stdio.h>
#include <math.h>

int main() {
    float height; // store the height
    float radius = 2.2; // give the value to radius
    float volume; // store the calculated volume in the variable

    printf("Enter the height: ");
    scanf("%f", &height);
    
    // Take the absolute value of height
    height = fabs(height);

    volume = M_PI * pow(radius, 2) * height; // Calculate volume

    printf("The volume of the cylinder is: %.2f cubic meters\n", volume);

    return 0;
}
