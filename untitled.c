//Write a C program to convert the uppercase latter to lowercase latter using library function.

#include<stdio.h>
#include<ctype.h>

int main(){
    char lowercase_character, uppercase_character;

    printf("Enter the uppercase character:");
    scanf("%c", &uppercase_character);

    if(isupper(uppercase_character)){
        lowercase_character = tolower(uppercase_character);
        printf("\nThe converted lowercase character is: %c \n", lowercase_character);
    }
    else{
        printf("\nThe given character is not an uppercase character.\n");
    }
    return 0;
}