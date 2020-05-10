#include<stdio.h>
#include<string.h>

int main()
{
    char morse[256];                                    //Declare a string array to hold code
    int i=0;                                            //Counter variable
    fgets(morse, sizeof(morse), stdin);                 //Reads the string array
    while(i<256)                                        //Loop to print array in Morse
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