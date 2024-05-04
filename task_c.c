#include <stdio.h>

int main() {
    
    char my_email[] = "wenbo.tao@student.manchester.ac.uk";

    printf("Enter the index of the character: ");
    int n;
    scanf("%d", &n);

    char ch = my_email[n]; // Obtain the character
    
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': // To check if the character is a vowel
            printf("Vowel\n"); // Print "Vowel" if the character is a vowel
            break;
        default:
            printf("Not vowel\n"); // Print "Not vowel" if the character is not a vowel
            break;
    }
    
    return 0;
}
