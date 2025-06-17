#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include "common.h"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <String>\n", argv[0]);
    }
    char* str = argv[1];
    while (true) {
        Spin(1);
        printf("%s\n", str);
    }
    printf("Hello, World!\n");
    return 0;
}