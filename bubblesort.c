# bubblesort

#include <stdio.h>
void bubblesort(int array[], int size)
{
    for(int i = 0; i < size -1; i++)
    {
        for(int j = 0; j < size -1; j++)
        {
            // var swap
            if(array[j] < array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
        
    }
    
}
void print(int array[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        printf("%d", array[i]);
    }
    
}

int main()
{
    int array[8] = {13, 17, 11, 12, 6, 2, 8, 16};
    int size = sizeof(array) / sizeof(array[0]);

    //printf("%d", size);
    bubblesort(array, size);
    print(array, size);
    return 0;
}
