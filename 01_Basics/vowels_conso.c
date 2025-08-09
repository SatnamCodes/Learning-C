#include <stdio.h>
int main(){
    char Character;
    printf("Enter your character: ");
    scanf(" %c", &Character);
    if (Character == 'A'|| Character == 'E' || Character == 'I' || Character == 'O' || Character == 'U'){
        printf("The character %c is a vowel.", Character);
}
    else{
        printf("The character you entered is a constant");
    }
}