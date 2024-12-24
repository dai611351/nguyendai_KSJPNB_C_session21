#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    int n;
    char line[256];

    file = fopen("bt05.txt", "w");
    if (file == NULL) {
        printf("Khong the tao tep bt05.txt!\n");
        return 1;
    }

    printf("Nhap so dong: ");
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        printf("Nhap noi dung dong %d: ", i + 1);
        fgets(line, sizeof(line), stdin);
        fprintf(file, "%s", line);
    }
    fclose(file);

    file = fopen("bt05.txt", "r");
    if (file == NULL) {
        printf("Khong the mo tep bt05.txt!\n");
        return 1;
    }

    printf("Noi dung tep bt05.txt:\n");
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }
    fclose(file);
    return 0;
}

