#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    char *word = "anyword";
    char *userword = malloc(sizeof(word)+1);
    int size=0;
    char *newword = malloc(sizeof(word)+1);
    char *suffix = "ay";
    
    printf("Input your Word: ");
    scanf("%s", userword);
    printf("***************\n The word was: %s\n", userword);
    for(int i=0; userword[i] != '\0'; i++)
    size++;

    for (int j = 1; j<size; j++){
        newword[j-1]=userword[j];
    }
    newword[size-1] = userword[0];
    strcat(newword, suffix);

    printf("Pig Latin word was: %s\n", newword);

    getchar();
    printf("\n\n\n");
}