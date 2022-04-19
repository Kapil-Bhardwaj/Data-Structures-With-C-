//pattern for printing square of *
/*   if n = 3;     * 
                   * *
                   * * *
     
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
        for(int j = 1 ; j <=i ; j++)
        {
            cout << " * ";
        }
        cout<<endl;
    }
    

    return 0;
}
