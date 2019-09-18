#include <iostream>

using namespace std;




    int main()
{

int n,k=0;
    cout << "write n="<< endl;
    cin >>n;
    for (int i=1;i<=n;i++)
    {
        if (n%i == 0)
            k++;
        }
        if (k==2)
            cout<<"простое";
            else
          cout<<"количество делителей=" <<k;
        return 0;
}
