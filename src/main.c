#include <zephyr/kernel.h>
#include <stdio.h>
#include <string.h>

void simple_hash(const char *input, char *output) {
    for(int i = 0; i < strlen(input); i++) {
        sprintf(output + (i * 2), "%02x", input[i] ^ 0xFF);
    }
}

int main(void) {
    const char *msg = "Hello MCX A153!";
    char encoded[128] = {0};

    simple_hash(msg, encoded);
    printf("Input: %s\n", msg);
    printf("Encoded: %s\n", encoded);

    return 0;
}