#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>


bool is_pangram(const char *str_in) {

    char alphabet[26]           = "abcdefghijklmnopqrstuvwxyz";
    int unique_counter = 0;
    if (strlen(str_in)< 26)
    {
        return false;
    }
    
    for(int letter_index = 0; letter_index < strlen(alphabet); letter_index++)
    {
        char alphabet_letter = alphabet[letter_index];

        for(int x=0; x < strlen(str_in); x++)
        {
            if (!isspace(str_in[x]))
            {
                char text_letter = tolower(str_in[x]);
                if(alphabet_letter == text_letter)
                {
                    unique_counter++;
                    break; //breaking second loop
                }
            }
        }
        
    }
    return unique_counter == 26;
}

int main()
{
    char  *str = "DspSaFMeQTgG(h{;ycBvdknqmAoRCKiufNXIZrUML\"Pc_bnxOjLWJ";
    bool response = is_pangram(str);
    if (response == 1)
        printf("Is Pangram\n");
    else
        printf("No Pangram\n");
}