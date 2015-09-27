#include <iostream>
#include <math.h>

using namespace std;

int main() {
	long casos, J, C, T, i, ganadores, jugada, p;
	cin >> casos;
	for (int i = 0; i<casos; i++) {
		cin >> J >> C >> T;
		ganadores = 0;
		long players[J+1];
		long casillas[C+1];

		for (i=1; i<=J; i++) {
			players[i] = 1;
		}

		for (i=1; i<=C; i++) {
			cin >> casillas[i];
		}

		for (i = 1; i <= T; i++) {
			cin >> jugada;

			p = (i-1)%J + 1;

			while (players[p] == C) {
				p = p%J + 1;
			}

			players[p] += jugada;
			players[p] += casillas[players[p]];

			if (players[p] == C) {
				if (ganadores>0) {
					cout << " ";
				}
				cout << p;
				ganadores++;
			}
		}

		if (ganadores==0) {
			cout << -1 << endl;
		} else {
			cout << endl;
		}
	}

	return 0;
}
