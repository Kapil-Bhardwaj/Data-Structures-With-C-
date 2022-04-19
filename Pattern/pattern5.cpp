//pattern for printing square of *
/*   if n = 4;    
                  * * * *
                    * * *
                      * *
                        *
*/
#include <iostream>

using namespace std;

int main()
{
    int n ;
    cout << "Enter n  : ";
    cin >> n;
    for(int i = 1 ; i<= n ; i++)
    {     
        for (int k = 1 ; k<i ; k++)
        {
            cout<< "   " ;
        }
        
        for(int j = 1 ; j <=n-i+1 ; j++)
        {
            cout << " * ";
        }
        cout<<endl;
    }
    

    return 0;
}
