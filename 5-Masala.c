#include <stdio.h>

int main()
{
    FILE* input = fopen("input.txt", "r");
    FILE* output_juft = fopen("output.juft", "w");
    FILE* output_toq = fopen("output.toq", "w");

    int number, juft, toq;

    for(int i = 0; i < 8; i++)
    {
        fscanf(input, "%i", &number);

        if(number % 2 == 0)
        {
           fprintf(output_juft, "%i", number);
        }

        else if(number % 2 == 1)
        {
            fprintf(output_toq, "%i", number);
        }
    }
    
    return 0;
}