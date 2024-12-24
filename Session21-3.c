#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char input[256];

    file = fopen("bt01.txt", "a");
    if (file == NULL) {
        printf("Khong the mo tep bt01.txt!\n");
        return 1;
    }

    printf("Nhap mot chuoi bat ky de ghi them vao tep: ");
    fgets(input, sizeof(input), stdin);

    fprintf(file, "%s", input);
    fclose(file);
    printf("Da ghi chuoi vao tep bt01.txt thanh cong.\n");

    return 0;
}

