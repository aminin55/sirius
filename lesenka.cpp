/* 
http://proekti.ucoz.net/index/dinamicheskoe_programmirovanie/0-16
�������
���� ����� ����� �������� �� N ��������. �� ������ �� �������� �������� ������������ ����� �����. ������ ����� ���� ����� ������� �� ������ ������� ���, ����������� ����� ������, ����� ��������� �� ������. ��� �� �� ��������� � ������, ���� �� ��������� N-�� �������. ��������� ����� ���� �����, ���������� �� ��������, ����� ������� ������ ����.

��������� �������� ���������, ������� ��������� ����������� ������� ����, ��� �������, �����, �� ������� ���������� �����.

������� ������

� ������ ������ ���������� ����������� ����� N � ���������� �������� �������� (2<=N<=1000). �� ������ ������ ����� ������ ������ �����, ���������� �� �������� ��������, ������� � ������. �����, ���������� �� ��������, �� ����������� �� ������ 1000.

�������� ������

�������� ���������� �������� �����.

�������
����
�����
3
1 2 1
4

3
1 -1 1
2

*/
#include <vector>
#include <iostream>

using namespace std;


int main()
{

    int n;
    cin>>n;
vector<int> vals(n+1,0);
vector<int> cost(n+1,0);
for( int i=1;i<n+1;i++)
    cin>> vals[i];
cost[1]=vals[1];

for (int i=2; i<n+1; i++){
    cost[i]=max(cost[i-1]+vals[i],
                cost[i-2]+vals[i]);
}
    cout <<cost[n];
    return 0;
}