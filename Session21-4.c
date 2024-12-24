#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char line[256];

    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Khong the mo tep bt01.txt!\n");
        return 1;
    }

    if (fgets(line, sizeof(line), file) != NULL) {
        printf("Dong dau tien trong tep: %s", line);
    } else {
        printf("Tep rong hoac khong doc duoc!\n");
    }

    fclose(file);
    return 0;
}

