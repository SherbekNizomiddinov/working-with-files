#include <stdio.h>

int main()
{
    FILE *input_file = fopen("input.txt", "r");
    FILE *output_file = fopen("output.txt", "w");

    int word;

    while(!feof(input_file))
    {
        fscanf(input_file, "%i", &word);
        fprintf(output_file, "%c", word);
    }
    
    return 0;
}