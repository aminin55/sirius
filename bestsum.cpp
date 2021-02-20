#include <iostream>

using namespace std;

int main()
{
int n;
int imin = 0;
int ibest = 0;
int jbest = 1;

cin >> n;
int a[n];
for (int i=0;i<n;i++){
    cin>>a[i];
}


    for (int j = 2; j < n; ++j)
    {
        if (a[j - 1] < a[imin])
            imin =  j - 1;
        if (a[j] / a[imin] > a[jbest] / a[ibest])
        {
            jbest = j;
            ibest = imin;
        }
    }

    if(a[jbest]/a[ibest]>1)
        cout << ibest+1 <<" "<<jbest+1<<endl;
    else
        cout << "0 0";

    return 0;
}

