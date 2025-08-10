#include<iostream>
#include<chrono>
using namespace std;
using namespace std :: chrono ; 
 

int bsalgoritm(int arr[],int n , int goal)
{
    int low = 0 ; int high = n-1  ;

    while (low<=high)
    {
        int middle=(high+low)/2 ; 
        if(arr[middle]==goal)
         return middle; 

         else if (arr[middle]<goal )

         low = middle+1;

         else 
          high = middle -1 ; 

     }

   return -1 ; 
    
}

int main()
{
    int arr[]={2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 2 ; 

    auto start = high_resolution_clock::now();
    int result = bsalgoritm(arr, n, target);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    cout << "Execution time: " << duration.count() << " nanoseconds" << endl;

    return 0;

}