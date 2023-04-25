#include <stdio.h>

/**
 * Eligibility - Check your eligibility for institution.
 * @grade: input grade
 * description: A function that checks which institution can accept your grade.
 * Return: void
 */
void Eligibility(double grade)
{
        printf("Welcome;\n");
        printf("Let's help you check which institution you're eligible for.\n");
        printf("Enter your grade: ");
        scanf("%lf", &grade);

        if (grade < 50)
        {
                printf("Sorry, you are not eligible to proceed to any institution.\n");
        }
        else if (grade >= 50 && grade <= 69)
        {
                printf("Congratulations! You are eligible to proceed to a Polytechnic.\n");
        }
        else if (grade >= 70 && grade <= 100)
        {
                printf("Congratulations! You are eligible to proceed to a University.\n");
        }
        else
        {
                printf("Invalid input.\n");
        }
}

/**
 * main - Enter point
 * description: checking for eligibility
 * Return: 0 (success)
 */
int main(void)
{
        double grade;

        Eligibility(grade);
        return (0);
}

