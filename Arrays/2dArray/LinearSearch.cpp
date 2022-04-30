// 2-D ARRAY Searching element in array
#include <iostream>

using namespace std;

int main()
{ 
    //Creation and initialization
    int arr1[3][3]={5,1,3,4,5,8,10,9,11};
    
   
  int k = 11;
    
    //Search entire array 
    for(int i = 0 ; i<3 ;i++)
    {
       for(int j = 0 ; j<3 ; j++)
         {
           if(k==arr1[i][j])
             { cout<<"Match";
              exit(0);}
       }
         
    }

     cout<<"Not match";
    return 0;
}
