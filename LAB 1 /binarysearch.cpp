#include<iostream>
#include<chrono>
#include<algorithm>
using namespace std;
using namespace std :: chrono ; 
 

int bsalgoritm(int arr[],int n , int goal)
{
    int low = 0 ; int high = n-1  ;

    while (low<=high)
    {
        int middle= (low+high)/2;

        if(arr[middle]==goal)
            return middle; 

        else if (arr[middle]<goal)
            low = middle+1;

        else 
            high = middle -1 ; 
    }

   return -1 ; 
    
}

int main()
{
    auto start = high_resolution_clock::now();
    //edge cases 
    int arr1[] = {};
    int arr2[] = {5};               
    int arr3[] = {1, 2};           
    int arr4[] = {1, 3, 5, 7, 9};   
    int arr5[] = {1, 3, 5, 7, 9, 11};
    int arr6[] = {-10, -5, 0, 5, 10}; 
    int arr7[] = {1, 2, 2, 2, 3, 4};
    int arr8[]= { 1,2,3,4,5}; 
    int arr9[]= {20000, 30000,68888,98888}; 

    cout << "Empty array: Index " << bsalgoritm(arr1, 0, 5) << endl;
    cout << "Single element: Index " << bsalgoritm(arr2, 1, 5) << endl;
    cout << "Two elements: Index " << bsalgoritm(arr3, 2, 1) << endl;
    cout << "Odd length: Index " << bsalgoritm(arr4, 5, 7) << endl;
    cout << "Even length: Index " << bsalgoritm(arr5, 6, 11) << endl;
    cout << "Negatives: Index " << bsalgoritm(arr6, 5, -5) << endl;
    cout << "Duplicates: Index " << bsalgoritm(arr7, 6, 2) << endl;
    cout << "element does not exist in the array" << bsalgoritm(arr8,4,6)<<endl;
    cout << "large array"<< bsalgoritm(arr9,3,30000)<<endl; 
     
    auto stop = high_resolution_clock::now();

    
    auto duration = duration_cast<nanoseconds>(stop - start);

    
    cout << "Execution time for : " << duration.count() << " nanoseconds" << endl;


    // test cases 
    // 5 best cases 
{
    int arr10[] = { 1,2,3,4,5,6,7,8,9,10};
    auto start = high_resolution_clock::now();

    cout<<" test case 1 taget element index:" << bsalgoritm(arr10,10,6);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "Execution time: " << duration.count() << " nanoseconds" << endl;
}
{
    int arr11[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    auto start = high_resolution_clock::now();
    cout<<" test case 2 taget element index:" << bsalgoritm(arr11,20,11);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "Execution time: " << duration.count() << " nanoseconds" << endl;

}
{
    int arr12[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    auto start = high_resolution_clock::now();
    cout<<" test case 3 taget element index:" << bsalgoritm(arr12,30,16);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "Execution time for : " << duration.count() << " nanoseconds" << endl;

}
{
    int arr13[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40};
    sort (arr13,arr13+40);
    auto start = high_resolution_clock::now();

    cout<<" test case 4 taget element index:" << bsalgoritm(arr13,40,21);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "Execution time for : " << duration.count() << " nanoseconds" << endl;
}
{
    int arr14[]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50};
     sort(arr14,arr14+50);
        auto start = high_resolution_clock::now();

    cout<<" test case 5 taget element index:" << bsalgoritm(arr14,50,26);
        auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "Execution time for : " << duration.count() << " nanoseconds" << endl;

}
{//worst cses 
    int arr15[] = {1,2,3,4,5,6,7,8,9,10};
    auto start = high_resolution_clock::now();
    cout<<" test case 1 taget element index:" << bsalgoritm(arr15,10,20);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "Execution time for : " << duration.count() << " nanoseconds" << endl;
}
{
    int arr16[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    auto start = high_resolution_clock::now();

    cout<<" test case 2 taget element index:" << bsalgoritm(arr16,20,80);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "Execution time for : " << duration.count() << " nanoseconds" << endl;
}
{
    int arr17[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    auto start = high_resolution_clock::now();
    cout<<" test case 3 taget element index:" << bsalgoritm(arr17,30,40);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "Execution time for : " << duration.count() << " nanoseconds" << endl;
}
{
    int arr18[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40};
    auto start = high_resolution_clock::now();
    cout<<" test case 4 taget element index:" << bsalgoritm(arr18,40,50);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "Execution time for : " << duration.count() << " nanoseconds" << endl;
}
{ 
    int arr19[]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50};
    auto start = high_resolution_clock::now();
    cout<<" test case 5 taget element index:" << bsalgoritm(arr19,5,60);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "Execution time for : " << duration.count() << " nanoseconds" << endl;
}

// average cases
 {
     int arr20[] = { 1,2,3,4,5,6,7,8,9,10};
             auto start = high_resolution_clock::now();

         cout<<" test case 1 taget element index:" << bsalgoritm(arr20,10,10);
          auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "Execution time for : " << duration.count() << " nanoseconds" << endl;
}
 {
    int arr21[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
            auto start = high_resolution_clock::now();

         cout<<" test case 2 taget element index:" << bsalgoritm(arr21,20,14);
             auto stop = high_resolution_clock::now();
     auto duration = duration_cast<nanoseconds>(stop - start);
     cout << "Execution time for : " << duration.count() << " nanoseconds" << endl;
 }

 {
     int arr22[] =  {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
     
             auto start = high_resolution_clock::now();

         cout<<" test case 3 taget element index:" << bsalgoritm(arr22,30,24);
             auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "Execution time for : " << duration.count() << " nanoseconds" << endl;
}
{
    int arr23[] =  {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40};
             auto start = high_resolution_clock::now();

         cout<<" test case 4 taget element index:" << bsalgoritm(arr23,1000,523);
             auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
     cout << "Execution time for : " << duration.count() << " nanoseconds" << endl;
 }
 {
 int arr24[]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50};
  
        auto start = high_resolution_clock::now();

     cout<<" test case 5 taget element index:" << bsalgoritm(arr24,5,40);
         auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "Execution time for : " << duration.count() << " nanoseconds" << endl;
}
    return 0;

}