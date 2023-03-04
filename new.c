#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

void mainMenu();
void simpleCalc();
void flexMode();
double operatorSelection(char, double, double);
double addition(double, double);
double subtraction(double, double);
double multiplication(double, double);
double division(double, double);
double modulo(double, double);
void wrongInput();
void stars();
void rmline(char *string);

/**
 * main - Entry point to the calculator program
 * Return: 0 (success)
 */
int main(void)
{

    puts("THE MAESTRO CODE'S CALCULATOR PROGRAM\n");

    mainMenu();

    return (0);
}

/**
 * mainMenu - contains the direction to all the program is about
 * Users can chose a prefered calculation mode or find out about the functionality
 */
void mainMenu()
{
    puts("MAIN MENU\n");
    puts("Select your prefered mode");
    puts("1. Simple calc                  2. Flex mode");
    puts("3. Factorial of a number        4. Round up a number");
    puts("5. AI mode");
    puts("6. About the program (find out how each mode functions)");
    puts("0. Quit the program");

    int opcode;
    scanf("%d", &opcode);
    stars();

    switch (opcode)
    {

    case 1:
        simpleCalc();
        break;

    case 2:
        flexMode();
        break;

    case 3:
        // factorialMode();
        break;

    case 4:
        // roundUpANumber();
        break;

    case 5:
        // about();
        break;

    case 0:
        puts("Application closed!");
        break;

    default:
        wrongInput();
        mainMenu();
    }
}

void simpleCalc()
{
    puts("SIMPLE CALCULATION MODE\n");
    puts("Perform simple calculation");

    double current, next;
    char operator;

    printf("Figure: ");
    scanf("%lf", &current);
    printf("Operator: ");
    getchar();
    scanf("%c", &operator);

    if (operator == '(')
    {
        double next1, next2, innerCurrent;
        char innerOperator1, innerOperator2;

        printf("\tFigure: ");
        scanf("%lf", &next1);
        printf("\tOperator: ");
        getchar();
        scanf("%c", &innerOperator1);
        printf("\tFigure: ");
        scanf("%lf", &next2);
        printf("\tOperator: ");
        getchar();
        scanf("%c", &innerOperator2);

        innerCurrent = operatorSelection(innerOperator1, next1, next2);

        if (innerOperator2 == ')')
        {
            current = operatorSelection('*', current, innerCurrent);
        }

        printf("Answer: %lf", current);
    }
    else
    {
        printf("Figure: ");
        scanf("%lf", &next);

        current = operatorSelection(operator, current, next);
        printf("Answer: %lf", current);
    }
}

/**
 * flexMode - allows the user to perform calculations in a loop format
 * by specifying the operator and entering values continously
 */
void flexMode()
{
    puts("FLEX MODE\n");
    puts("Calculate in flex mode");
}

/**
 * operatorSelector - performs the basic arithmetic operations based on given operator
 * Return: value
*/
double operatorSelection(char a, double x, double y)
{
    double value;

    switch (a)
    {

    case '+':
        value = addition(x, y);
        return (value);
        break;

    case '-':
        value = subtraction(x, y);
        return (value);
        break;

    case '*':
        value = multiplication(x, y);
        return (value);
        break;

    case '/':
        value = division(x, y);
        return (value);
        break;

    case '%':
        value = modulo(x, y);
        return (value);
        break;

    default:
        printf("'%c' not a valid operator!\n", a);
    }
}

/**
 * addition - performs the + operation
 * Return: sum
 */
double addition(double x, double y)
{
    double sum = x + y;
    return (sum);
}

/**
 * subtraction - performs the - operation
 * Return: diff
 */
double subtraction(double x, double y)
{
    double diff = x - y;
    return (diff);
}

/**
 * multiplication - performs the * operation
 * Return: prod
 */
double multiplication(double x, double y)
{
    double prod = x * y;
    return (prod);
}

/**
 * division - performs the / operation
 * Return: div or x
 */
double division(double x, double y)
{
    if (y == 0)
    {
        puts("invalid expression!");
        return (x);
    }
    else
    {
        double div = x / y;
        return (div);
    }
}

/**
 * modulo - finds the remainder of x%y
 * Return: mod
*/
double modulo(double x, double y)
{
    double mod = fmod(x, y);
    return (mod);
}

/**
 * wrongInput - tells the user that the input is not valid
 */
void wrongInput()
{
    puts("Invalid option/input! Try something else...\n");
}

/**
 * stars - prints astericks character to the display as a decorative divider just for formatting and readability
 */
void stars()
{
    puts("\n***********************************************************************************************\n");
}

/**
 * rmline - removes the new line character from the end of the string when the fgets method is used
 */
void rmline(char string[])
{
    string[strcspn(string, "\n")] = '\0';
}
