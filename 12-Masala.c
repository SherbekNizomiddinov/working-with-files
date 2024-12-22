#include <stdio.h>
#include <string.h>

int main()
{
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    FILE *output1 = fopen("output1.txt", "w");

    if(input == NULL)
    {
        perror("input file yo'q");
        return 1;
    }

    char word[50];
    int count;

    while(fscanf(input, "%s %d", word, &count) != EOF)
    {
        if(count >= 60)
        {
            fprintf(output, "%s  %i\n", word, count);
        }
        else
        {
            fprintf(output1, "%s  %i\n", word, count);
        }
    }
    return 0;
}