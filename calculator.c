#include <cs50.h>
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
    double value, running_total = 0.0;
    char operation;
    bool first_iteration = true;

    printf("Interactive Calculator (Enter 'q' to quit, '=' to get the result)\n");

    while (true)
    {
        if (first_iteration)
        {
            printf("Enter the first value: ");
            value = get_double("");
            running_total = value;
            first_iteration = false;
        }
        else
        {
            printf("Enter operation (+, -, *, /, =) followed by a value: ");
            string input = get_string("");

            if (input[0] == 'q') break;

            if (input[0] == '=')
            {
                printf("Result: %.2f\n", running_total);
                break;
            }

            // Parsing the operation and value from the input string
            if (sscanf(input, " %c %lf", &operation, &value) == 2)
            {
                switch (operation)
                {
                    case '+':
                        running_total += value;
                        break;
                    case '-':
                        running_total -= value;
                        break;
                    case '*':
                        running_total *= value;
                        break;
                    case '/':
                        if (value == 0)
                        {
                            printf("Cannot divide by zero.\n");
                        }
                        else
                        {
                            running_total /= value;
                        }
                        break;
                    default:
                        printf("Invalid operation. Use +, -, *, /, or =.\n");
                }
            }
            else
            {
                printf("Invalid input. Please enter an operation followed by a value (e.g., '+ 5').\n");
            }
        }
    }

    printf("Calculator closed.\n");
    return 0;
}
