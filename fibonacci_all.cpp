#include <math.h>
#include <vector>
#include <iostream>

using namespace std;
// recursion
int fibr(int num) {
    if (num < 2) return num;
    return fibr(num - 1) + fibr(num - 2);
    }

long long fib_dp (int num){
    vector <long long> res(num+1,-1);
    res[0]=0;
    res[1]=1;
    if(num<2) return num;
    for (int i=2;i<=num;i++){
            res[i]=res[i-1]+res[i-2];
//            cout<<"i= "<<i<<" " <<res[i] <<endl;
    }
        return res[num];
}

// the Binet formula
long long fib_binet(int num){
double n=(double) num;
    cout.setf(ios_base::fixed);
   long long result=(long long)round((pow((1+sqrt(5))/2,n)-pow((1-sqrt(5))/2,n))/sqrt(5));
    return result;
}



int main()
{

    int n;
    cin>>n;
    cout << fibr(n)<<endl;
    cout << fib_dp(n)<<endl;
    cout << fib_binet(n)<<endl;

    return 0;
}
