%option noyywrap

%{
#include <stdio.h>
#include <stdlib.h>
%}

DIGIT [0-9]

%%

%%
int main() {
    char str[100];
    long int deciForm;
    printf("Enter integer constant as string:");
    scanf("%s", str);
    deciForm = strtol(str, NULL, 0);
    printf("Decimal form: %ld", deciForm);
    return 0;
}
