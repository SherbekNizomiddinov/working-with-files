#include <stdio.h>
#include <string.h>

int main(){
    FILE *input_file;
    FILE *output_file;

    char word[64] , max_word[64], min_word[64];
    int longlength = 0, shortlength = 64; 


    input_file = fopen("input.txt","r");
        if (input_file  ==  NULL){
            printf("Faylni o'qib bo'lmadi ");
            return 1;
        }

         while (fscanf(input_file,"%s",word) == 1){
            int wordlength = strlen(word);
            
            if(wordlength > longlength){
                longlength = wordlength;
                strcpy(max_word,word);
                }

            if(wordlength < shortlength){
                shortlength = wordlength;
                strcpy(min_word,word); 
                }
          
          
        } 

    fclose(input_file);
     
    output_file = fopen("output.txt", "w");

        if (output_file == NULL){
            printf("Faylni yozib bo'lmadi !");
            return 1;
        }

        fprintf(output_file,"Min = : %s \n",max_word);
        fprintf(output_file,"Max = : %s \n",min_word);

}