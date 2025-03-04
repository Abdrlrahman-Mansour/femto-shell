#include <stdio.h>
#include <string.h>

#define MAX_INPUT 1024  

int main() {
    char input[MAX_INPUT];


    while (1) {
        
        printf("MyFemtoShell >> ");
        fflush(stdout);

        
        if (!fgets(input, MAX_INPUT, stdin)) {
            perror("fgets error");
            continue;
        }

        
        size_t len = strlen(input);
        if (len > 0 && input[len - 1] == '\n') {
            input[len - 1] = '\0';
        }

        
        if (strcmp(input, "exit") == 0) {
            printf("Good Bye :)\n");
            break;
        }

        
        if (strncmp(input, "echo ", 5) == 0) {
            printf("%s\n", input + 5); 
        } else {
            printf("Invalid command\n");
        }
    }

    return 0;
}