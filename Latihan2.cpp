#include <iostream>
using namespace std;

int perbandingan ( int a, int b);

int main () {
	int nilai1, nilai2;
	cout << " Nilai 1 : " ;
	cin  >> nilai1;
	cout << " Nilai 2 : " ;
	cin  >> nilai2;
	cout << " Nilai Maksimun : " << perbandingan (nilai1,nilai2);
}

int perbandingan (int a, int b) {
	return max(a,b);
}