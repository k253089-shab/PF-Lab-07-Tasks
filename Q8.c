#include <stdio.h>

int main() {
    char str[100];
    
    printf("Enter: ");
    scanf("%[^A-Za-z]", str);
    
    printf("\nOutput: %s", str);
    

    return 0;
}
