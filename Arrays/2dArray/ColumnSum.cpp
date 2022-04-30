// 2-D ARRAY Column Summ
#include <iostream>

using namespace std;

void getSum(int arr[3][3],int n , int m  )
{
    int sum = 0 ;
     for(int j = 0 ; j < n ; j++){
      sum =0;    
         for(int i = 0 ; i< m ; i++)
         {
             sum += arr[i][j];
         }
         cout<<sum<<" ";
     }
     
}

int main()
{ 
    //Creation and initialization
    int arr1[3][3]={1,1,1,1,1,1,1,1,1};
    // calling sum function
      getSum(arr1, 3,3);
    return 0;
}
