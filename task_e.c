#include <stdio.h>

int main(int argc, char *argv[]) {
    // Check if the correct number of command-line arguments is provided
    if (argc != 2) {
        printf("Usage: %s filename\n", argv[0]); // Print usage instructions if incorrect
        return 1; // Return with error status
    }
 
    // Read a number from the specified file
    double num;
    FILE *fptr;
    fptr = fopen(argv[1], "r"); // Open the file for reading
    fscanf(fptr, "%lf", &num); // Read the number from the file
    fclose(fptr); // Close the file
    
    // Print JSON output
    printf("{\n");
    printf(" \"name\": \"Wenbo Tao\",\n"); // Print name
    printf(" \"email\": \"wenbo.tao@student.manchester.ac.uk\",\n"); // Print email
    printf(" \"number1\": %.2f,\n", num); // Print the number with 2 decimal places
    printf(" \"number2\": %.3e\n", num); // Print the number in scientific notation with 3 decimal places
    printf("}\n");

    return 0; // Return with success status
}
