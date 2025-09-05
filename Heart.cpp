#include <stdio.h>
#include <math.h>
#include <string.h>

void printMessage(char *message) {
    int len = strlen(message);
    int padding = (40 - len) / 2;
    
    for (int i = 0; i < padding; i++) printf(" ");
    printf("%s\n", message);
}

int main() {
    char message[100];
    printf("Enter a message for your bestie: ");
    fgets(message, sizeof(message), stdin);

    size_t len = strlen(message);
    if (len > 0 && message[len - 1] == '\n') message[len - 1] = '\0';

    printf("\n");
    for (float y = 1.5f; y >= -1.5f; y -= 0.1f) {
        for (float x = -1.5f; x <= 1.5f; x += 0.05f) {
            float eq = pow(x * x + y * y - 1, 3) - x * x * y * y * y;
            printf(eq <= 0 ? "*" : " ");
        }
        printf("\n");
    }

    printf("\n");
    printMessage(message);
    printf("\n");
    printf("From: Your Harshittt \n");
    return 0;
}

