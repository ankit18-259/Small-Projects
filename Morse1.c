#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    char morse[10];                      
    int i=0;
    fgets(morse, sizeof(morse), stdin);
    while(i<sizeof(morse))                                        
    {
        switch(morse[i])    
            {
                case 'A': printf(".- ");
                      break;
                case 'B': printf("-... ");
                      break;
                case 'C': printf("-.-. ");
                      break;
                case 'D': printf("-.. ");
                      break;
                case 'E': printf(". ");
                      break;
                case 'F': printf("..- ");
                      break;
                case 'G': printf("--. ");
                      break;
                case 'H': printf(".... ");
                      break;
                case 'I': printf(".. ");
                      break;
                case 'J': printf(".--- ");
                      break;
                case 'K': printf("-.- ");
                      break;
                case 'L': printf(".-.. ");
                      break;
                case 'M': printf("-- ");
                      break;
                case 'N': printf("-. ");
                      break;
                case 'O': printf("--- ");
                      break;
                case 'P': printf(".--. ");
                      break;
                case 'Q': printf("--.- ");
                      break;
                case 'R': printf(".-. ");
                      break;
                case 'S': printf("... ");
                      break;
                case 'T': printf("- ");
                      break;
                case 'U': printf("..- ");
                      break;
                case 'V': printf("...- ");
                      break;
                case 'W': printf(".-- ");
                      break;
                case 'X': printf("-..- ");
                      break;
                case 'Y': printf("-.-- ");
                      break;
                case 'Z': printf("--.. ");
                      break;
                case ' ': printf("  ");
                      break;
        
            }   
        i++;
    }
    return 0;
}