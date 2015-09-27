#include <iostream>
#include <math.h>

using namespace std;

long calc2(long k) {
	long cont = 0;
	float raiz = sqrt(k);
	long raiz_exacta = (long)raiz;

	if (raiz == raiz_exacta) {
		 return 0;
	}

	return 1;
}

int main() {
	long N, M, total;

	while (true) {
		total = 0;
		cin >> N >> M;
		if (N == 0 && M == 0)
			break;
		for (long i = N; i <= M; i++) {
			total += calc2(i);
		}
		cout << total << endl;
	}

	return 0;
}
