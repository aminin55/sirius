/*
������� �������

�� �������� �� �������� ������ ������� ����������� ������� �� N �������, ������ �� ������� ����� ������ 1 �����. �� ��� ������� �������� ������ ���� �����, ������� ������� ������� ��� ����� ��������, ������� ������������ ������� � ��������. ����� ��������������� ������ ��������, ���, ��� �������, ��������� ������� � ���� ���� ������ ������ �������, ��� ����� ��� �� ������ ��������� �� ������. ������� ��� ���������� ���������� ������ ������� ����� �������� ������ ������� �� ���, ����� �� ����� ������ �� ����.

������ ��� ������ �� ������������ ������ ��������� �� ����� 3 ������� � ���� ����, ������� ������������ ����� ������� ����� ����� ����� ���� 2 ��� 3 ������ ������� ��������.

��������, ��� �� ������� i-�� �������� �� ������� ������ ������ ������ ������ Ai ������, �� ������� ���� ������� � Bi ������, ��� ������� � Ci ������. �������� ���������, ������� ���������� ����������� �����, �� ������� ����� ���� ��������� ��� ����������.

�������� ��������, ��� ������ �� ������ �������������� ����� ������ �������� ������ �� ���. ����� ����� � ����� ��������� �� �������� ������ ������� (�� ���� �������, ������� ������ �� �����).

������� ������

�� ���� ��������� ��������� ������� ����� N � ���������� ����������� � ������� (1<=N<=5000). ����� ���� N ����� ����������� ����� Ai, Bi, Ci. ������ �� ���� ����� �� ��������� 3600. ���� � ������� ����������, ������� �� �����.

�������� ������

��������� ������� ���� ����� � ����������� ����� � ��������, �� ������� ����� ���� ��������� ��� ����������.

�������
����
�����
5
5 10 15
2 10 15
5 5 5
20 20 1
20 1 1
12
https://site.ada.edu.az/~medv/acm/Docs%20e-olimp/Volume%208/799.htm 

*/

#include <iostream>
#include <vector>

using namespace std;

int min3(int a,int b, int c){
        return min(min(a,b),c);

}

int main() {
  int n;
  cin >> n;
  vector<int> t(n+1,100000);
  vector<int> a(n+1,100000);
  vector<int> b(n+1,100000);
  vector<int> c(n+1,100000);
  for( int i=1;i<n+1;i++)
    cin >>a[i]>>b[i]>>c[i];

  t[0] = 0; t[1] = a[1]; t[2] = min(a[1] + a[2],b[1]);

  for(int i = 3; i <= n; i++)

  t[i] = min3(t[i-1] + a[i], t[i-2] + b[i-1], t[i-3] + c[i-2]);

  cout<< t[n];
  return 0;
}
