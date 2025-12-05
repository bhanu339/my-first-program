#include <stdio.h>
int stringLength(char str[]) {
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

void stringCopy(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int stringCompare(char s1[], char s2[]) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
        i++;
    }
    return s1[i] - s2[i];
}


void stringConcat(char dest[], char src[]) {
    int i = 0, j = 0;
    while (dest[i] != '\0')
        i++;
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}

int main() {
    char str1[100], str2[100], copy[100];
    int choice;

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    printf("\n--- STRING OPERATIONS ---\n");
    printf("1. Length of Strings\n");
    printf("2. Copy String 1 to copy[]\n");
    printf("3. Compare Strings\n");
    printf("4. Concatenate Strings\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Length of String 1 = %d\n", stringLength(str1));
            printf("Length of String 2 = %d\n", stringLength(str2));
            break;

        case 2:
            stringCopy(copy, str1);
            printf("Copied string = %s\n", copy);
            break;

        case 3:
            if (stringCompare(str1, str2) == 0)
                printf("Both strings are equal.\n");
            else
                printf("Strings are NOT equal.\n");
            break;

        case 4:
            stringConcat(str1, str2);
            printf("Concatenated string = %s\n", str1);
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

