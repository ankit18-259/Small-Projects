#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{

    char arr[256];                            
    int i=0, j;
    printf("****************************************************************\n");
    printf("*************************Morse Code*****************************\n");
    printf("1. Input Morse\n2. Input English");
    printf("\n\n");
    printf("                                       Made by- Ankit Sharma\n");
    printf("****************************************************************\n");
    printf("****************************************************************\n");
    printf("Your Choice: ");
    scanf("%d",&j);
    fgets(arr, sizeof(arr), stdin);
    
  switch(j)
    {
    case 1:
            break;

                    
    case 2: 
            while(i<256)                                        
            {
                switch(arr[i])    
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
            break;
        
    }
    return 0;
}