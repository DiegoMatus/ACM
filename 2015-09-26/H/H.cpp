#include <iostream>
#include <math.h>

using namespace std;

unsigned long long factorial(int n) {
    unsigned long long total = 1;
    for (int i=2; i < n; i++) {
        total += i;
    }
    return total;
}

unsigned long long combinaciones(int m, int n) {
    if (n == 0) {
        if (m > 0)
            return m;
        else
            return 1;
    }
    if (m == 0) {
        return 1;
    }
    unsigned long long total = 1;
    
    for (int i=n+1; i < m; i++) {
        total *= i;
    }
    
    return total;
}

int main() {
    int pares, impares;
    unsigned long long total;
	
	while(true) {
        total = 0;
        cin >> pares >> impares;
        
        if (pares == 0 && impares == 0) {
            break;
        }

        if (pares == 1 && impares == 0) {
            cout << 9;
            continue;
        }

        if (pares > 0) {
            total += 4 * pow(5, pares+impares-1) * combinaciones(pares+impares-1, pares-1) * 2;
            cout << total << endl;
        }

        if (impares > 0) {
            total += 5 * pow(5, pares+impares-1) * combinaciones(pares+impares-1, impares-1) * 2;
            cout << total << endl;
        }

        cout << total << endl;
    }

	return 0;     
}
