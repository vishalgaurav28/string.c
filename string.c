/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int x;
    char s1[100],s2[100];
    //clrscr();
    printf("enter first string\n");
    scanf("%s",s1);
    printf("enter second string\n");
    scanf("%s",s2);
    strcat(s1,s2);
    printf("%s\n",s1);
    x=strlen(s1);
    printf("%d",x);
    getch();
}


