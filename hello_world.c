#include <stdio.h>

int main() {
    FILE *output_stream = stdout;
    fprintf(output_stream, "Hello. My email address is:\n%s\n", "wenbo.tao@student.manchester.ac.uk");
    return 0;
}