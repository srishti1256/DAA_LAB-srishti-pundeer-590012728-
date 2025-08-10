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
        int middle= low + (high - low) / 2;

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
        auto start = high_resolution_clock::now();
       //edge cases 
     int arr1[] = {};
    int arr2[] = {5};               
    int arr3[] = {1, 2};           
    int arr4[] = {1, 3, 5, 7, 9};   
    int arr5[] = {1, 3, 5, 7, 9, 11};
    int arr6[] = {-10, -5, 0, 5, 10}; 
    std :: sort (arr6,arr6+4);
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
    cout<<"  element does not exist in the array" << bsalgoritm(arr8,4,6)<<endl;
    cout<< " large array "<< bsalgoritm(arr9,3,30000)<<endl; 

     
     
    auto stop = high_resolution_clock::now();

    
    auto duration = duration_cast<nanoseconds>(stop - start);

    
    cout << "Execution time for : " << duration.count() << " nanoseconds" << endl;


    // test cases 
    // 5 best cases 
{
    int arr10[] = { 1,2,3,4,5};
            auto start = high_resolution_clock::now();

        cout<<" test case 1 taget element index:" << bsalgoritm(arr10,4,3);
            auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "Execution time for : " << duration.count() << " nanoseconds" << endl;

}
{
    int arr11[]={10,20,30,40,50,60,70};
            auto start = high_resolution_clock::now();

        cout<<" test case 2 taget element index:" << bsalgoritm(arr11,6,40);
            auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "Execution time for : " << duration.count() << " nanoseconds" << endl;

}
{
    int arr12[] = { 200,-100,560,43,97};
    std :: sort(arr12,arr12+5);
            auto start = high_resolution_clock::now();

        cout<<" test case 3 taget element index:" << bsalgoritm(arr12,4,97);
            auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "Execution time for : " << duration.count() << " nanoseconds" << endl;

}
{
    int arr13[] = { 4000,4001,4002,4003,4004,4005};
            auto start = high_resolution_clock::now();

        cout<<" test case 4 taget element index:" << bsalgoritm(arr13,5,4002);
            auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "Execution time for : " << duration.count() << " nanoseconds" << endl;
}
{
    int arr14[]= {3873,5738,4829,5739,5729,5638};
    std :: sort(arr14,arr14+5);
        auto start = high_resolution_clock::now();

    cout<<" test case 5 taget element index:" << bsalgoritm(arr14,5,5738);
        auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "Execution time for : " << duration.count() << " nanoseconds" << endl;

}
{//worst cses 
    int arr15[] = { 1,2,3,4,5};
            auto start = high_resolution_clock::now();

        cout<<" test case 1 taget element index:" << bsalgoritm(arr15,4,6);
            auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "Execution time for : " << duration.count() << " nanoseconds" << endl;
}
{
    int arr16[]={10,20,30,40,50,60,70};
            auto start = high_resolution_clock::now();

        cout<<" test case 2 taget element index:" << bsalgoritm(arr16,6,400);
            auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "Execution time for : " << duration.count() << " nanoseconds" << endl;
}
{
    int arr17[] = { 200,-100,560,43,97};
    std :: sort(arr17,arr17+4);
            auto start = high_resolution_clock::now();

        cout<<" test case 3 taget element index:" << bsalgoritm(arr17,4,80);
            auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "Execution time for : " << duration.count() << " nanoseconds" << endl;
}
{
    int arr18[] = { 4000,4001,4002,4003,4004,4005};
            auto start = high_resolution_clock::now();

        cout<<" test case 4 taget element index:" << bsalgoritm(arr18,5,902);
            auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "Execution time for : " << duration.count() << " nanoseconds" << endl;
}
{ 
    int arr19[]= {3873,5738,4829,5739,5729,5638};
    std :: sort(arr19,arr19+5);
        auto start = high_resolution_clock::now();

    cout<<" test case 5 taget element index:" << bsalgoritm(arr19,5,5730);
        auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "Execution time for : " << duration.count() << " nanoseconds" << endl;
}

// average cases
{
    int arr20[] = { 1,2,3,4,5};
            auto start = high_resolution_clock::now();

        cout<<" test case 1 taget element index:" << bsalgoritm(arr20,4,5);
            auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "Execution time for : " << duration.count() << " nanoseconds" << endl;
}
{
    int arr21[]={10,20,30,40,50,60,70};
            auto start = high_resolution_clock::now();

        cout<<" test case 2 taget element index:" << bsalgoritm(arr21,6,50);
            auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "Execution time for : " << duration.count() << " nanoseconds" << endl;
}

{
    int arr22[] = { 200,-100,560,43,97};
    std :: sort(arr22,arr22+4);
            auto start = high_resolution_clock::now();

        cout<<" test case 3 taget element index:" << bsalgoritm(arr22,4,97);
            auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "Execution time for : " << duration.count() << " nanoseconds" << endl;
}
{
    int arr23[] = { 4000,4001,4002,4003,4004,4005};
            auto start = high_resolution_clock::now();

        cout<<" test case 4 taget element index:" << bsalgoritm(arr23,5,902);
            auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "Execution time for : " << duration.count() << " nanoseconds" << endl;
}
{
int arr24[]= {3873,5738,4829,5739,5729,5638};
    std :: sort(arr24,arr24+5);
        auto start = high_resolution_clock::now();

    cout<<" test case 5 taget element index:" << bsalgoritm(arr24,5,5638);
        auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "Execution time for : " << duration.count() << " nanoseconds" << endl;
}
    return 0;

}