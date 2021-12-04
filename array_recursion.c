// Read and print elements of the array. – using recursion.
#include <stdio.h>
void printArray(int arr[], int start, int len);
int main()
{
    int arr[100];
    int N, i;
    printf("Enter size of the array: ");
    scanf("%d", &N);
    printf("Enter elements in the array: ");
    for(i=0; i<N; i++) 
    {
        scanf("%d", &arr[i]);
    }
        
    printf("Elements in the array: ");
    printArray(arr, 0, N);
    return 0;
    
}

