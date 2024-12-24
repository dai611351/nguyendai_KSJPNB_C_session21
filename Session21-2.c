#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char firstChar;

    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Khong the mo tep bt01.txt!\n");
        return 1;
    }

    firstChar = fgetc(file);
    printf("Ky tu dau tien trong tep: %c\n", firstChar);
    

    fclose(file);
    return 0;
}

