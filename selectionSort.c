//simple Selection Sort Program
#include <stdio.h>
void main() 
{
//defining our arrays and variables
  int array[] = {5,4,3,2,1};
  int size = 5;  // you can also use the 'sizeof(array)/sizeof(array[0])' if you want the size for every custom array. We use this for simplicity
  int temp = 0; //simple temporary variable which we use for swapping
  
  for(int i=0;i<size;i++)
    {
      for(int j=i+1;j<size;j++)
        {
          if(array[i] > array[j])
          {
            temp = array[j];
            array[j] = array[i];
            array[i] = temp;              //just in case a greater number is found somewhere we perform a simple swap 
          }
        }
    }


  //printing out the sorted array
  for(int i=0;i<size;i++)
    {
      printf("%d\t", array[i]);    
}
}
