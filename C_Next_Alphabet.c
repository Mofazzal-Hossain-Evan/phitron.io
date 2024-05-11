#include<stdio.h>

int main() {
    char input;
    //printf("Enter a character: ");
    scanf(" %c",&input); 

    if (input >= 'a' && input <= 'y') {
        
        input = input + 1;
        printf("%c\n",input);
    } 
    else if (input == 'z') {
       
        input = 'a';
        printf("%c\n",input);
    } 
    else {
       
        printf("Invalid input!\n");
    }
    
    return 0;
}
