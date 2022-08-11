#include<stdio.h>
char Mifrase(char *Frase)
{
 
unsigned int i;

char Codigo_ascii[17];	


printf("**************************************************\n");
scanf("%s",Frase);
printf("Subo la palabra: [%s], a memoria:\n",Frase);
	
//++++++++++++++++++++++++++++++++++

for (i = 0; i < 128; ++i) {
    //byte = Frase[i];
        printf("%02X ", ((unsigned char*)Frase)[i]);
        if (((unsigned char*)Frase)[i] >= ' ' && ((unsigned char*)Frase)[i] <= '~')
         {
            Codigo_ascii[i % 16] = ((unsigned char*)Frase)[i];
        } else {
            Codigo_ascii[i % 16] = '.';
        }
        if ((i+1) % 8 == 0 || i+1==128) {
            printf(" ");
            if ((i+1) % 16 == 0) {
 
                printf(" |  %s \n", Codigo_ascii);
 
            }
            }
            }
 






//*****************************************
	return 0;
}