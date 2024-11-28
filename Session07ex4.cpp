#include <stdio.h>

int main() {
    
    int length;

    printf("Please input length of the array: \n");
    scanf("%d", &length);

    int array[length];

    for(int i = 0; i <= length - 1; i = i + 1) {
        printf("Please input array[%d]: ", i);
        scanf("%d", &array[i]);
    }


    for(int i = 0; i <= length - 1; i = i + 1) {
        printf("Please input array[%d] = %d\n", i, array[i]);
    }
    	
    
    
    
   
   
   
   

    return 0;
}

