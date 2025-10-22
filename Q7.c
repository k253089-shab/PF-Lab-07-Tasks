#include <stdio.h>

int main() {
    int Arr[10];
    int freq[1000] = {0};

    printf("Enter 10 numbers: ");
    for(int i=0; i<10; i++){
        scanf("%d", &Arr[i]);
        
        if(freq[Arr[i]] == 0)
            freq[Arr[i]] = 1;
        else
            Arr[i] = -1;
    }

    printf("\nUpdated array (duplicates replaced with -1):\n");
    for(int i=0; i<10; i++)
        printf("%d ", Arr[i]);

    return 0;
}
