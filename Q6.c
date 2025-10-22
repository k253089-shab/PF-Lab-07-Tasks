#include <stdio.h>

int main() {
    char str[100];
    int vowel=0, consonant=0;
    
    printf("Enter the word: ");
    scanf("%s", &str);
    
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
            vowel++;
        }
        else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            consonant++;
        }
    }
    
    printf("\nNumber of vowels: %d", vowel);
    printf("\nNumber of consonants: %d", consonant);
    
    return 0;
}
