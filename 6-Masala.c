#include <stdio.h>

int main() 
{

    FILE *input_file = fopen("input.txt", "r");
    FILE *input_file2 = fopen("input.txt", "r");
    FILE *output_file = fopen("output.txt", "w");

    char uz_word[64];
    char en_word[64];
    
    while (!feof(input_file)) 
    {

        fscanf(input_file, "%s", uz_word);
        fscanf(input_file2, "%s", en_word);
        fprintf(output_file, "%s - %s\n", uz_word, en_word);
    }
}