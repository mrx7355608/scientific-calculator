#include <stdio.h>

void printLogo();
void printMainMenu();
int getUserInput();

int main() {
    printLogo();
}

void printLogo() {
    printf("Calculator");
    printf("==========");

    printMainMenu();
    int choice = getUserInput();
}

void printMainMenu() {
    printf("1. Basic operations");
    printf("2. Trignometric operations");
    printf("3. Algebric operations");
    printf("4. Logarithmic operations");
}

int getUserInput() {
    int choice;
    printf("Choose: ");
    scanf("%d", &choice);
    return choice;
}
