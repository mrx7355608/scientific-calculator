#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function declarations
void printLogo();
void printMainMenu();
int getUserInput();
float getNumInput(char[]);
void clearScreen();
void handleBasicOperations();
void handleTrignoOperations();
void handleAlgebricOperations();
float exponentiation(float);
float nthRoot(float, float);
int factorial(int);
float absoluteValue(float);

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
        	handleTrignoOperations();
            break;
        case 3:
        	handleAlgebricOperations();
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

void handleTrignoOperations() {
	// Clear screen
	clearScreen();
	
	// Print calculator
	printLogo();
	
    printf("\n1. Sin\n");
    printf("2. Cos\n");
    printf("3. Tan\n");
    printf("4. Sin Inverse\n");
    printf("5. Cos Inverse\n");
    printf("6. Tan Inverse\n");
    int choice = getUserInput();

    float angle = getNumInput("\nEnter angle: ");
    
    switch (choice) {
        case 1:
            printf("Answer: %.4f radians\n", sin(angle));
            break;
        case 2:
            printf("Answer: %.4f radians\n", cos(angle));
            break;
        case 3:
            printf("Answer: %.4f radians\n", tan(angle));
            break;
        case 4:
            printf("Answer: %.4f radians\n", asin(angle));
            break;
        case 5:
            printf("Answer: %.4f radians\n", acos(angle));
            break;
        case 6:
            printf("Answer: %.4f radians\n", atan(angle));
            break;

    }
}

void handleAlgebricOperations() {
	// Clear screen
	clearScreen();
	
	// Print calculator
	printLogo();
	
    printf("\n1. Exponentiation\n");
    printf("2. Square root\n");
    printf("3. Cube root\n");
    printf("4. Nth root\n");
    printf("5. Factorial\n");
    printf("6. Absolute value\n");
    int choice = getUserInput();

    float n1 = getNumInput("\nEnter number: ");

    switch (choice) {
        case 1:
            printf("Answer: %.2f\n", exponentiation(n1));
            break;
        case 2:
            printf("Answer: %.2f\n", sqrt(n1));
            break;
        case 3:
            printf("Answer: %.2f\n", cbrt(n1));
            break;
        case 4: {
        	float nth = getNumInput("\nEnter number (n): ");
            printf("Answer: %.2f\n", nthRoot(n1, nth));
            break;

		}
        case 5:
            printf("Answer: %.2f\n", factorial(n1));
            break;
        case 6:
            printf("Answer: %.2f\n", absoluteValue(n1));
            break;
    }

};

/*
	@@@@@@@@@@@@@@@@@@@@@@@@@@@@
		CALCULATOR FUNCTIONS
	@@@@@@@@@@@@@@@@@@@@@@@@@@@@
*/
float exponentiation(float num) {
	/* 
		TODO: implement this function
	*/
	return 1.0;
};

float nthRoot(float num, float n) {
	float answer = pow(num, 1/n);
	return answer;
};

int factorial(int num) {
};

float absoluteValue(float num) {
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
