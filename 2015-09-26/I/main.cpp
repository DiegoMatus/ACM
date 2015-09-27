#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main() {
	int n, len, coincide;
	char cadena1[100];
	char cadena2[100];

	cin >> n;

	for (int i=0; i<n; i++) {
		scanf("%s" , cadena1);
		scanf("%s" , cadena2);
		coincide = 0;

		len = strlen(cadena1);

		for (int j=0; j<len; j++) {
			if (cadena1[j] != cadena2[j]) {
				coincide++;
			}
		}
		cout << coincide << endl;
	}

	return 0;
}
