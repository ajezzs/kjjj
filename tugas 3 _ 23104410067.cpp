#include <iostream>
using namespace std;

int angka = 0;
int bilanganprima = 0;

int inprima(int angka) {

	if (angka <= 1) {
		return false;

	}
	for (int i = 2; i <= angka / 2; i++) {
		if (angka % i == 0) {
			return false;
		}
	}
}

int main() {

	cout << "bilangan prima antara 1 sampai 50 adalah :" << endl;
	for (int i = 2; i <= 50; i++) {
		if (inprima(i)) {
			bilanganprima++;
			cout << i << " ";
			angka += i;
		}
	}

	cout << "\njumlah bilangan prima antara 1 sampai 50 adalah :" << angka << endl;

	return 0;
}