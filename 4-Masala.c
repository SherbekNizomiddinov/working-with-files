#include <stdio.h>

int main()
{
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");

    int number;
    int natija = 0;

    for(int i = 0; i < 4; i++)
    {
        fscanf(input, "%i", &number);
        fprintf(output, "%i + ", number);
        natija += number;
    }

    fscanf(input, "%i", &number);
    natija += number;
    fprintf(output, "%i = %i", number, natija);

    return 0;
}