#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//bir xarakter ve bir reqem daxil edildiyinde ne qeder oldugunu tapan proqram

int main(int argc, char *argv[])
{
    char ch;
    int number;

    printf("Enter character: "); scanf("%c", &ch);
    printf("Enter number: "); scanf("%d", &number);

    int i;

    for(i=0; i<number; i++)
    printf(" %c ", ch);
    return 0;
}