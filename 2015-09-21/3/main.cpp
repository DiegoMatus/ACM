#include <stdio.h>

int main() {
	int max, npiedras, i, j, salida = 0, tmp=0, suma=0;

	scanf("%d %d", &max, &npiedras);

	int piedras[npiedras];

	for (i = 0; i < npiedras; ++i) {
		scanf("%d", &piedras[i]);
	}

	for (i = 0; i < npiedras; ++i){
		for (j = i; j < npiedras; ++j){
			suma += piedras[j];
			if (suma > max)
				break;
			tmp++;
		}
		if (tmp>salida) salida = tmp;
		suma = 0;
		tmp = 0;
	}
	printf("%d\n",salida );

}
