#include <stdio.h>

int main() {
    int Arr[10];
    
    printf("Enter 10 numbers: ");
    
    for(int i=0; i<=9; i++){
        scanf("%d", &Arr[i]);
        
        for(int j=0; j<i; j++){
            if(Arr[i]==Arr[j]){
                Arr[i]=-1;
                break;
            }
        }
    }
    printf("\nUpdated array (duplicates replaced with -1):\n");
    for(int i=0; i<=9; i++){
        printf("%d ", Arr[i]);
    }
    
    return 0;
}
