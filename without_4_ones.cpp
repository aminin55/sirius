/*Без трёх единиц
Определите количество последовательностей из нулей и единиц длины N (длина — это общее количество нулей и единиц), в которых никакие три единицы не стоят рядом.
*/
#include <iostream>
#include <vector>


using namespace std;

int main() {
  int n, num00,num01=0,num11=0,mem00=0;
  cin >> n;

  num00=1;
  for( int i=0; i<n;i++){
    mem00=num11;
    num11=num01;
    num01=num00;
    num00=num01+num11+mem00;
  }
cout << (num11+num01+num00);

}
