#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printPattern(char ch) {
    int i,j;
    if (ch == 'A'||ch=='a') {
        // Print pattern for 'A'
        for (i = 0; i < 7; i++) {
            for (j = 0; j < 5; j++) {
                if ((i == 0 && (j == 1 || j == 2 || j == 3)) || (i == 3 && j >= 1) || (i >= 1 && j == 0) || (j == 4 && i >= 1)) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    } else if (ch == 'B'||ch=='b') {
        // Print pattern for 'B'
        for (i = 0; i < 7; i++) {
            for (j = 0; j < 5; j++) {
                if ((i == 0 || i == 6 || i == 3) && j <= 3 || (i < 7 && j == 0) || ((i == 1 || i == 2 || i == 4 || i == 5) && j == 4)) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    } else if (ch == 'C'||ch=='c') {
        // Print pattern for 'C'
        for (i = 0; i < 7; i++) {
            for (j = 0; j < 5; j++) {
                if ((i < 7 && j == 0) || (i == 0 || i == 6) && j <= 4) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    } else if (ch == 'D'||ch=='d') {
        // Print pattern for 'D'
        for (i = 0; i < 7; i++) {
            for (j = 0; j < 5; j++) {
                if ((i == 0 || i == 6) && j <= 3 || i < 7 && j == 0 || j == 4 && i > 0 && i < 6) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    } else if (ch == 'E'||ch=='e') {
        // Print pattern for 'E'
        for (i = 0; i < 7; i++) {
            for (j = 0; j < 5; j++) {
                if ((i == 0 || i == 6 || i == 3) && j <= 4 || i < 7 && j == 0) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    } else if (ch == 'F'||ch=='f') {
        // Print pattern for 'F'
        for (i = 0; i < 7; i++) {
            for (j = 0; j < 5; j++) {
                if ((i == 0 || i == 3) && j <= 4 || i < 7 && j == 0) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    } else if (ch == 'G'||ch=='g') {
        // Print pattern for 'G'
        for (i = 0; i < 7; i++) {
            for (j = 0; j < 5; j++) {
                if (j == 0 && i <= 6 || i == 0 && j <= 4 || i == 6 && j < 4 || j == 4 && i >= 3 || i == 3 && j == 3) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    } else if (ch == 'H'||ch=='h') {
        // Print pattern for 'H'
        for (i = 0; i < 7; i++) {
            for (j = 0; j < 5; j++) {
                if (i == 3 || j == 0 || j == 4) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    } else if (ch == 'I'||ch=='i') {
        // Print pattern for 'I'
        for (i = 0; i < 7; i++) {
            for (j = 0; j < 5; j++) {
                if (i == 0 || i == 6 || j == 2) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    } else if (ch == 'J'||ch == 'j') {
        // Print pattern for 'J'
        for (i = 0; i < 7; i++) {
            for (j = 0; j < 5; j++) {
                if (i == 0 && j <= 4 || i < 6 && j == 2 || i == 6 && (j == 0 || j == 1)) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    } else if(ch=='k'||ch=='k'){
//for letter K
for(i=0;i<7;i++){
    for(j=0;j<5;j++){
       if(i<7&&j==0||i==3&&j==1||j==2&&(i==2||i==4)||j==3&&(i==1||i==5)||j==4&&(i==0||i==6)){
            printf("*");
        }
            else
            {
                printf(" ");
            }
    }
    printf("\n");
}
} else if (ch == 'L'||ch=='l') {
        // Print pattern for 'L'
        for (i = 0; i < 7; i++) {
            for (j = 0; j < 5; j++) {
                if (j == 0 || i == 6) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    } else if (ch == 'M'||ch=='m') {
        // Print pattern for 'M'
        for (i = 0; i < 7; i++) {
            for (j = 0; j < 7; j++) {
                if (j == 0 || j == 6 || i == j && i <= 3 || i + j == 6 && i <= 3) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    } else if (ch == 'N'||ch=='n') {
        // Print pattern for 'N'
        for (i = 0; i < 7; i++) {
            for (j = 0; j < 7; j++) {
                if (j == 0 || j == 6 || i == j) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    } else if (ch == 'O'||ch=='o') {
        // Print pattern for 'O'
        for (i = 0; i < 7; i++) {
            for (j = 0; j < 5; j++) {
                if ((i == 0 || i == 6) && (j > 0 && j < 4) || (j == 0 || j == 4) && (i > 0 && i < 6)) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    } else if (ch == 'P'||ch=='p') {
        // Print pattern for 'P'
        for (i = 0; i < 7; i++) {
            for (j = 0; j < 5; j++) {
                if ((i == 0 || i == 3) && j <= 3 || (i < 7 && j == 0) || ((i == 1 || i == 2) && j == 4)) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    } else if(ch=='q'||ch=='Q'){
    //for letter Q
for(i=0;i<7;i++){
    for(j=0;j<6;j++){
       if(i<6&&(j==0||j==4)||i==0&&j<5||i==4&&j==2||i==5&&(j==1||j==2||j==4)||i==5&&j==4||i==6&&j==5){
            printf("*");
        }
            else
            {
                printf(" ");
            }
    }
    printf("\n");
}
} else if (ch == 'R'||ch=='r') {
        // Print pattern for 'R'
        for (i = 0; i < 7; i++) {
            for (j = 0; j < 5; j++) {
                if ((i == 0 || i == 3) && j <= 3 || (i < 7 && j == 0) || ((i == 1 || i == 2) && j == 4) || (i == 4 && j == 2) || (i == 5 && j == 3) || (i == 6 && j == 4)) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    } else if (ch == 'S'||ch=='s') {
        // Print pattern for 'S'
        for (i = 0; i < 7; i++) {
            for (j = 0; j < 5; j++) {
                if ((i == 0 || i == 3 || i == 6) && j < 5 || (i < 3 && j == 0) || (i > 3 && j == 4)) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    } else if (ch == 'T'||ch=='t') {
        // Print pattern for 'T'
        for (i = 0; i < 7; i++) {
            for (j = 0; j < 5; j++) {
                if (i == 0 || j == 2) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    } else if (ch == 'U'||ch=='u') {
        // Print pattern for 'U'
        for (i = 0; i < 7; i++) {
            for (j = 0; j < 5; j++) {
                if ((i == 6 && j > 0 && j < 4) || (j == 0 || j == 4) && i < 6) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    } else if (ch == 'V'||ch=='v') {
        // Print pattern for 'V'
        for (i = 0; i < 7; i++) {
            for (j = 0; j < 13; j++) {
                if ((i == 0 && (j == 0 || j == 12)) || (i == 1 && (j == 1 || j == 11)) || (i == 2 && (j == 2 || j == 10)) || (i == 3 && (j == 3 || j == 9)) || (i == 4 && (j == 4 || j == 8)) || (i == 5 && (j == 5 || j == 7)) || (i == 6 && j == 6)) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    } else if (ch == 'W'|| ch=='w') {
        // Print pattern for 'W'
        for (i = 0; i < 7; i++) {
            for (j = 0; j < 7; j++) {
                if ((j == 0 || j == 6) && i <= 6 || (i == 3 && j == 3) || (i == 4 && (j == 2 || j == 4)) || (i == 5 && (j == 1 || j == 5))) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    } else if (ch == 'X'||ch=='x') {
        // Print pattern for 'X'
        for (i = 0; i < 7; i++) {
            for (j = 0; j < 7; j++) {
                if ((i == j || i + j == 6) || (i == 1 && j == 5) || (i == 5 && j == 1)) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    } else if(ch=='y'||ch=='Y'){
    //for letter Y
for(i=0;i<7;i++){
    for(j=0;j<7;j++){
        if(i==0&&(j==0||j==6)||i==1&&(j==1||j==5)||i==2&&(j==2||j==4)||i>=3&&j==3){
            printf("*");
        }
            else
            {
                printf(" ");
            }
    }
    printf("\n");
}
} else if (ch == 'Z' || ch=='z') {
        // Print pattern for 'Z'
        for (i = 0; i < 7; i++) {
            for (j = 0; j < 6; j++) {
                if (i == 0 || i == 6 || (i + j == 6)) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    } else {
        // Default case for unsupported characters
        printf("Pattern not defined for '%c'\n", ch);
    }
}

int main() {
    int i;
    char name[100];
    printf("Enter the name:\t");
    fgets(name, sizeof(name), stdin); // Read input including spaces

    printf("\nPrinting patterns for each character:\n");
    for (i = 0; i < strlen(name); i++) {
        if (name[i] == '\n') {
            continue; // Skip newline characters if present
        }
        printPattern(name[i]);
        printf("\n"); // Separate patterns for different characters
    }

    return 0;
}
