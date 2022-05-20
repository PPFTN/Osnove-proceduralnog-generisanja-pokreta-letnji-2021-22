#include <SGF.h>
#include <stdlib.h>

void matricaKrugoviUnos() {
	const int rows = 3;
	const int cols = 4;
	int matrica[3][4];
	/*
	x	y	r	b
	x	y	r	b
	x	y	r	b
	*/
	typedef	enum {
		PLAVA = BLUE, CRVENA = RED,
		ZELENA = GREEN, ZUTA = YELLOW,
		CRNA = BLACK, BELA = WHITE
	} boje;

	for (int i = 0; i < rows; i++) {
		printf("Krug broj %d\n", i);
		for (int j = 0; j < cols; j++) {
			switch (j)
			{
			case 0:
				printf("Unesite x:");
				break;
			case 1:
				printf("Unesite y:");
				break;
			case 2:
				printf("Unesite r:");
				break;
			case 3:
				printf("Unesite boju: \n"
					"(PLAVA: %d)"
					"(CRVENA: %d)"
					"(ZELENA: %d)"
					"(ZUTA: %d)"
					"(CRNA: %d)"
					"(BELA: %d): ", PLAVA, CRVENA, ZELENA, ZUTA, CRNA, BELA
				);
				break;
			default:
				break;
			}
			scanf("%d", &matrica[i][j]);
		}
	}

	for (int i = 0; i < rows; i++) {
		fill(matrica[i][3]);
		stroke(matrica[i][3]);
		ellipse(matrica[i][0], matrica[i][1], matrica[i][2], matrica[i][2]);
	}
}


void matricaKrugoviUnosAnimacija(int sirinaProzora, int visinaProzora) {
	const int rows = 3;
	const int cols = 4;
	int matrica[3][4];
	/*
	x	y	r	b
	x	y	r	b
	x	y	r	b
	*/
	typedef	enum {
		PLAVA = BLUE, CRVENA = RED,
		ZELENA = GREEN, ZUTA = YELLOW,
		CRNA = BLACK, BELA = WHITE
	} boje;

	for (int i = 0; i < rows; i++) {
		printf("Krug broj %d\n", i);
		for (int j = 0; j < cols; j++) {
			switch (j)
			{
			case 0:
				printf("Unesite x:");
				break;
			case 1:
				printf("Unesite y:");
				break;
			case 2:
				printf("Unesite r:");
				break;
			case 3:
				printf("Unesite boju: \n"
					"(PLAVA: %d)"
					"(CRVENA: %d)"
					"(ZELENA: %d)"
					"(ZUTA: %d)"
					"(CRNA: %d)"
					"(BELA: %d): ", PLAVA, CRVENA, ZELENA, ZUTA, CRNA, BELA
				);
				break;
			default:
				break;
			}
			scanf("%d", &matrica[i][j]);
		}
	}

	//animacija
	srand(time(NULL));

	int matricaKretanja[3][2];
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < 2; j++) {
			matricaKretanja[i][j] = 0;
		}
	}
	/*
	brojacX	brojacY
	brojacX	brojacY
	brojacX	brojacY
	*/
	while (1) {
		for (int i = 0; i < rows; i++) {

			// kad krug izadje iz grafickog prozora, vrati ga na pocetnu poziciju
			if (matrica[i][0] + matricaKretanja[i][0] * 2 * matrica[i][2] > sirinaProzora / 2
				|| matrica[i][0] + matricaKretanja[i][0] * 2 * matrica[i][2] < - (sirinaProzora / 2)
				|| matrica[i][1] + matricaKretanja[i][1] * 2 * matrica[i][2] > visinaProzora / 2
				|| matrica[i][1] + matricaKretanja[i][1] * 2 * matrica[i][2] < - (visinaProzora / 2) )
			{
				matricaKretanja[i][0] = 0;
				matricaKretanja[i][1] = 0;
			}

			// generisi nasumicni pravac (gore, desno, dole, levo)
			// na osnovu njega azuriraj matricu kretanja
			int pravac = rand() % 4;
			switch (pravac)
			{
			case 0:
				matricaKretanja[i][1]++;
				break;
			case 1:
				matricaKretanja[i][0]++;
				break;
			case 2:
				matricaKretanja[i][1]--;
				break;
			case 3:
				matricaKretanja[i][0]--;
				break;
			default:
				break;
			}

			fill(matrica[i][3]);
			stroke(matrica[i][3]);
			ellipse(matrica[i][0] + matricaKretanja[i][0] * 2 * matrica[i][2], matricaKretanja[i][1] * 2 * matrica[i][2], matrica[i][2], matrica[i][2]);
		}
		delay(100);
		clear();
	}
}

int main() 
{
	int sirinaProzora = 800;
	int visinaProzora = 600;
	openwindow(sirinaProzora, visinaProzora);

	//matricaKrugoviUnos();
	matricaKrugoviUnosAnimacija(sirinaProzora, visinaProzora);

	getch();
	closewindow();

	return 0;
}