// 2-D ARRAY Transpose
#include <iostream>

using namespace std;

void Transpose(int arr[3][3],int n , int m  )
{
     int arr1[n][m];
    
     for(int i = 0 ; i < n ; i++){
      
         for(int j = 0 ; j< i ; j++)
         {
          
          swap(arr[i][j] , arr[j][i]) ;
             
         }
    
     }
     
     for(int i = 0 ; i < n ; i++){
      
         for(int j = 0 ; j< m ; j++)
         {
          
          cout<<arr[i][j]<<" " ;
             
         }
      cout<<endl;
     }
     
}

int main()
{ 
    //Creation and initialization
    int arr1[3][3]={1,2,3,4,5,6,7,8,9};
    // calling sum function
      Tanspose(arr1, 3,3);
    return 0;
}
