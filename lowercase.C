#include <stdio.h>

void main()
{
    char ch;
    printf("Enter the character value \n");
    scanf("%c",& ch);
    int res = (ch>='a')&&(ch<='z');
    printf("%c is a lowercase of alphabet 'a-z'i.e is:%d",ch,res);
}
    