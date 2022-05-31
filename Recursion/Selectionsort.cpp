//selection Sort using Recursion
#include"bits/stdc++.h"
#include <iostream>

using namespace std;
//selection smallest number
int minindex(int arr[] , int s, int e){
    int mindex;
    int sml = INT_MAX;
    for(int i = s ; i<=e ; i++)
    {
        if(arr[i]<sml)
        {   
            sml = arr[i];
           
            mindex = i;
        }
    }
    return mindex;
    
    
    
}
// recursive function 
void SelectionSort(int arr[], int s , int  e )
{    // base condition
    if(s>=e) 
       return;
           // position of minu=imun element in subarray
       int a = minindex(arr, s,e);
       
  
        swaping with the minimum elemnt
       swap(arr[a],arr[s]);
       
      // recursivly paasing smaller array of n-1 size
       SelectionSort(arr, s+1,e);
       
       
       
}
// diver code here.....
int main()
{
    int arr[]= {1,5,2,3,4};
    SelectionSort(arr,0,4);
  
    
    for(int i=0; i< 5; i++)
      cout<<arr[i]<<" ";
    return 0;
}
