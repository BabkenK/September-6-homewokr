#include <stdio.h>

int main() {
    int num_lines;
    
    printf("Enter the number of lines: ");
    scanf("%d", &num_lines);

    for (int i = 1; i <= num_lines; i++) {
        // Print the number i repeated i times
        for (int j = 0; j < i; j++) {
            printf("%d", i);
        }
        
        // Move to the next line for the next iteration
        printf("\n");
    }

    return 0;
}