#include <stdio.h>
#include <stdlib.h>

// Function declarations
void printLogo();
void printMainMenu();
int getUserInput();
void handleBasicOperations();
float getNumInput(char[]);
void clearScreen();

// Main function
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

/*
	@@@@@@@@@@@@@@@@@@@@@@@@@@
		HANDLING FUNCTIONS
	@@@@@@@@@@@@@@@@@@@@@@@@@@
*/
void handleBasicOperations() {
	// Clear screen
	clearScreen();
	
	// Print calculator
	printLogo();
	
	// Print basic operations menu
    printf("\n1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    int choice = getUserInput();

    float n1 = getNumInput("\nEnter number 1: ");
    float n2 = getNumInput("Enter number 2: ");

    switch (choice) {
        case 1:
            printf("Answer: %.2f\n", n1 + n2);
            break;
        case 2:
            printf("Answer: %.2f\n", n1 - n2);
            break;
        case 3:
            printf("Answer: %.2f\n", n1 * n2);
            break;
        case 4:
            printf("Answer: %.2f\n", n1 / n2);
            break;

    }

};

/*
	@@@@@@@@@@@@@@@@@@@@@@@@@@
		DISPLAY FUNCTIONS
	@@@@@@@@@@@@@@@@@@@@@@@@@@
*/
void printLogo() {
    printf("Calculator\n");
    printf("==========\n");
}

void printMainMenu() {
    printf("\n1. Basic operations\n");
    printf("2. Trignometric operations\n");
    printf("3. Algebric operations\n");
    printf("4. Logarithmic operations\n");
}

void clearScreen() {
	system("cls");
}

/*
	@@@@@@@@@@@@@@@@@@@@@@@@
		INPUT FUNCTIONS
	@@@@@@@@@@@@@@@@@@@@@@@@
*/
int getUserInput() {
    int choice;
    printf("Choose: ");
    scanf("%d", &choice);
    return choice;
}

float getNumInput(char msg[]) {
    float num;
    printf("%s", msg);
    scanf("%f", &num);
    return num;
}
