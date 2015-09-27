#include <iostream>
#include <math.h>

using namespace std;

int main() {
	unsigned long long N, M, total, r1, r2, n1, n2;
	double raiz1, raiz2;
	
	while(true) {
        total = 0;
        cin >> N >> M;
        
        if (N == 0 && M == 0) {
            break;
        }

        raiz1 = sqrt(N);
        raiz2 = sqrt(M);

        r1 = (unsigned long long)raiz1;
        r2 = (unsigned long long)raiz2;

        n1 = pow(r1, 2);
        n2 = pow(r2, 2);

        total = (n2-r2) - (n1-r1) - (N - n1) + (M - n2);

        if (raiz1 != r1) {
            total++;
        }

        cout << total << endl;
    }

	return 0;     
}
