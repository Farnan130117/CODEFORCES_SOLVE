#include <iostream>
#include <cstdio>
using namespace std;
long    long    int    arr[100000000],flag=0;

int isPowerOfTwo (unsigned int x)
{
 while (((x & 1) == 0) && x > 1) /* While x is even and > 1 */
   x >>= 1;
 return (x == 1);
}

// Program to print all combination of size r in an array of size n

void combinationUtil(long  long   int arr[],long  long    int data[],long  long    int start,long  long    int end,
                     long  long   int index,long  long    int r);

// The main function that prints all combinations of size r
// in arr[] of size n. This function mainly uses combinationUtil()
void printCombination(long  long    int arr[],long  long    int n,long  long    int r)
{
    // A temporary array to store all combination one by one
    long  long   int data[r];

    // Print all combination using temprary array 'data[]'
    combinationUtil(arr, data, 0, n-1, 0, r);
}

/* arr[]  ---> Input Array
   data[] ---> Temporary array to store current combination
   start & end ---> Staring and Ending indexes in arr[]
   index  ---> Current index in data[]
   r ---> Size of a combination to be printed */
void combinationUtil(long  long   int arr[],long  long    int data[],long  long    int start,long  long    int end,
                     long  long   int index,long  long    int r)
{
   long  long    int m=0;
    // Current combination is ready to be printed, print it
    if (index == r)
    {
        for (int j=0; j<r; j++){
            //    printf("%d ", data[j]);
                m=m+data[j];
        }
        if(isPowerOfTwo(m))
            flag=flag+1;

          //  cout<<flag<<endl;
        m=0;
      //  printf("\n");
        return;
    }

    // replace index with all possible elements. The condition
    // "end-i+1 >= r-index" makes sure that including one element
    // at index will make a combination with remaining elements
    // at remaining positions
    for (long  long   int i=start; i<=end && end-i+1 >= r-index; i++)
    {
        data[index] = arr[i];
        combinationUtil(arr, data, i+1, end, index+1, r);
    }
}

// Driver program to test above functions
int main()
{
    long  long   int i,j,k,l;
    cin>>j;

    for(k=0;k<j;k++)
        cin>>arr[k];

    int r = 2;
  //  int n = sizeof(arr)/sizeof(arr[0]);
    printCombination(arr, j, r);
    cout<<flag<<endl;
    return  0;
}



