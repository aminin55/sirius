/*
��� ���� ����� ������
��������� ��������� ���������� ������������������� ����� n, ��������� �� ���� �� 0 �� k?1 �����, ��� ������� ��� �������� �������� ������������������ �� ����� ���� ������������.

������� ������

������ ��� ����������� ����� N � K (2?K?10; 2?N; 4?N+K?18).

�������� ������

���������� ������� ����� ����� � ����� �� ������.

�������
����
�����
2 2
3
3 9
712
*/


#include <iostream>
#include<vector>

using namespace std;


int main() {

int k,n;
cin >> n >>k;
vector<int> null_end(n+1,0);
vector<int> not_null_end(n+1,0);
null_end[1]=1;
not_null_end[1]=k-1;

for(int i=2;i<=n;i++){
    null_end[i]=not_null_end[i-1];
    not_null_end[i]=(k-1)*(not_null_end[i-1]+null_end[i-1]);
}
cout<<not_null_end[n]+null_end[n];

return 0;
}
