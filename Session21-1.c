#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    file = fopen("bt01.txt", "w");
    if (file == NULL) {
        printf("Khong the tao hoac mo tep bt01.txt!\n");
        return 1;
    }

    char input[256];
    printf("Nhap mot chuoi bat ky: ");
    fgets(input, sizeof(input), stdin);

    fprintf(file, "%s", input);
    fclose(file);
    printf("Da ghi chuoi vao tep bt01.txt thanh cong.\n");

    return 0;
}

