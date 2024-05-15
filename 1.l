%{
#include <stdio.h>
%}

%%
^((a|b)*)abb$ { printf("Valid string: %s\n", yytext); }
\n            { /* Skip newline */ }
.*             { printf("Invalid string", yytext); }
%%

int yywrap() {
    return 1;
}

int main() {
    yylex();
    return 0;
}