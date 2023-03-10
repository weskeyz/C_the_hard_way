#include <stdio.h>

int main() {
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("file1.txt", "r");
    if (fp1 == NULL) {
        printf("Cannot open file \n");
        return 0;
    }

    fp2 = fopen("file2.txt", "w");
    if (fp2 == NULL) {
        printf("Cannot create output file \n");
        return 0;
    }

    ch = fgetc(fp1);
    while (ch != EOF) {
        fputc(ch, fp2);
        ch = fgetc(fp1);
    }

    fclose(fp1);
    fclose(fp2);
    printf("File copied successfully.\n");

    return 0;
}