#include <stdio.h>
void main() 
{
    int temp = 0;
    int array[] = {5,4,3,2,1};
    int size = 5;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-1;j++)
        {
            if(array[j] > array[j+1])
            {
              temp = array[j+1];
              array[j+1] = array[j];
              array[j] = temp;
            }
        }
    }
    for(int i=0;i<size;i++)
    {
        printf("%d\t", array[i]);
    }
    
}
