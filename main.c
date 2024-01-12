#include <stdio.h>

void printLogo();
void printMainMenu();
int getUserInput();
void handleBasicOperations();
float getNumInput(char[]);

int main() {
    printLogo();

    printMainMenu();
    int choice = getUserInput();

    switch (choice) {
        case 1:
            handleBasicOperations();
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
    }
}

void printLogo() {
    printf("Calculator\n");
    printf("==========\n");
}

void printMainMenu() {
    printf("1. Basic operations\n");
    printf("2. Trignometric operations\n");
    printf("3. Algebric operations\n");
    printf("4. Logarithmic operations\n");
}

int getUserInput() {
    int choice;
    printf("Choose: ");
    scanf("%d", &choice);
    return choice;
}

float getNumInput(char msg[]) {
    int num;
    printf("%s", msg);
    scanf("%d", &num);
    return num;
}

void handleBasicOperations() {
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    int choice = getUserInput();

    float n1 = getNumInput("Enter number 1: ");
    float n2 = getNumInput("Enter number 2: ");

    switch (choice) {
        case 1:
            printf("Answer: %f", n1 + n2);
            break;
        case 2:
            printf("Answer: %f", n1 - n2);
            break;
        case 3:
            printf("Answer: %f", n1 * n2);
            break;
        case 4:
            printf("Answer: %.2f", n1 / n2);
            break;

    }

};
