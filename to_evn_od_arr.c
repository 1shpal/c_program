//	Count the total number of even and odd elements in an array
# include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,0,1,2,3,4};
    int i, size=15, even, odd;

    printf("Enter size of the array: ");
    scanf("%d", &size);


    printf("Enter %d elements in array: ", size);
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }


    even = 0;
    odd  = 0;

    for(i=0; i<size; i++)
    {

        if(arr[i]%2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Total even elements: %d\n", even);
    printf("Total odd elements: %d", odd);

    return 0;
}
