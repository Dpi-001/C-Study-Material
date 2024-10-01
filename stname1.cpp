#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    char stname[100][100], temp[100];
    int i, j, n;

    printf("\n Enter a Number of names: ");
    scanf("%d", &n);

    printf("\n Enter the names: ");
    for (i = 0; i < n; i++) {
        scanf("%s", stname[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(stname[i], stname[j]) > 0) {
                strcpy(temp, stname[i]);
                strcpy(stname[i], stname[j]);
                strcpy(stname[j], temp);
            }
        }
    }

    printf("\n Sorted names in list:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", stname[i]);
    }

    getch();
    return 0;
}

