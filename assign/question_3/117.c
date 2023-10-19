#include <stdio.h>
#include <string.h>

int main() {
    char code[] = "*117#";
    char userCode[5];  // Make sure to allocate space for the null terminator '\0'

    printf("Enter a code: ");
    scanf("%4s", userCode);

    // Clear the input buffer to remove any extra characters, including '\n'
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
        // Empty loop to discard characters
    }

    if (strcmp(userCode, code) == 0) {
        printf("Code matched!\n");
    } else {
        printf("Code did not match.\n");
    }

    return 0;
}
