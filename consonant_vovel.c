#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char str[100];
    int i=0;
    int vowels=0, consonants=0, digit=0, symbols=0, spaces=0;
    FILE *fp;
    char ch;
    fp = fopen("text_demo.txt","r");

    if(fp==NULL)
    {
        printf("File not opened or found.");
        exit(1);
    }

    ch = fgetc(fp);
    printf("Your String is :\n");
    while(!feof(fp))
    {
        str[i++] = ch;
        ch = fgetc(fp);
    }

    str[i]='\0';
    printf("%s", str);
    fclose(fp);

    for(i=0; str[i]!='0'; i++)
    {
        if (str[i]=='a' || str[i]=='A' ||str[i]=='e' ||str[i]=='E' ||str[i]=='i' ||str[i]=='I' ||str[i]=='o' ||str[i]=='O' ||str[i]=='u' ||str[i]=='U' )
        {
            vowels++;
        }
        else if ((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            consonants++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digit++;
        }
        else if (str[i]==' ')
        {
            spaces++;
        }
        else
        {
            symbols++;
        }
    }

    printf("\n Vowels : %d", vowels); 
    printf("\n Consonantss : %d", consonants); 
    printf("\n Digits : %d", digit); 
    printf("\n SpecialSymbols : %d", symbols); 
    printf("\n White spaces : %d", spaces); 
    return 0;
}