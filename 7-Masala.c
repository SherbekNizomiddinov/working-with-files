#include <stdio.h>

int main()
{
    FILE *input_file = fopen("1.txt", "r");
    FILE *input_file2 = fopen("2.txt", "r");
    FILE *output_file = fopen("output.txt", "w");
 
    char word1[64];
    char word2[64];

    while (!feof(input_file))
    {
        fscanf(input_file, "%s", word1);
        fprintf(output_file, "%s\n", word1);
    }

    while (!feof(input_file2))
    {
        fscanf(input_file2, "%s", word2);
        fprintf(output_file, "%s\n", word2);
    }
    return 0;
}