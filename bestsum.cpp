#include <fstream>
#include <iostream>

using namespace std;

int main()
{
int n;
int ibest=0,jbest=1,imin=0;
cin >> n;
int values[n];

for (int i = 0; i<n; i++){
    cin >> values[i];
    }

for (int j=2; j<n; ++j){
    if( values[j-1] <values[imin])
        imin=j-1;
    if(values[j]-values[imin]>values[jbest]-values[ibest])
        ibest=imin,jbest=j;

}
    if(values[jbest]/values[ibest]>1)
        cout << ibest <<" "<<jbest<<endl;
    else
        cout << "0 0";
    return 0;
}
