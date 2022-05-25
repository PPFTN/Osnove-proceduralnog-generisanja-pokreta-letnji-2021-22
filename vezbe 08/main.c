#include <SGF.h>

// Funkcija za unos broja u zadatom intervalu, korisnik unosi sve 
// dok ne unese broj u zadatom intervalu
int unos(int donjaGranica, int gornjaGranica) {
	int broj;
	do {
		printf("Unesite broj: \n");
		scanf("%d", &broj);
	} while (broj<donjaGranica || broj>gornjaGranica);
	return broj;
}


// Funkcija za crtanje smajlija na zadatoj poziciji, zadatog poluprecnika
void crtajSmajli(int x, int y, int r) {
	strokeweight(5);  // zelimo da linija bude malo deblja
	fill(YELLOW);

	ellipse(x, y, r / 2, r / 2);

	// Iscrtavanje ociju
	fill(BLACK);
	ellipse(x - r / 5, y + r / 5, r / 12, r / 9);
	ellipse(x + r / 5, y + r / 5, r / 12, r / 9);

	stroke(BLACK);
	arc(x, y, r / 3, 180, 360);
}

// Funkcija koja crta smajli nakon sto proveri da li smajli ispada van 
// okvira. Povratna vrednost 1 ako ne ispada, -1 ako ispada
int crtajSmajli2(int x, int y, int r) {
	if (abs(x) + r / 2 > 400)
		return -1;
	else if (abs(y) + r / 2 > 300)
		return -1;
	else
		crtajSmajli(x, y, r);
	return 1;
}

// Funkcija koja proverava da li se dva kruga preklapaju
int preklapajuSe(int x1, int y1, int r1, int x2, int y2, int r2) {
	if ((r1 + r2) >= (sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2))))
		return -1;
	else
		return 1;
}

// Funkcija za crtanje random izlomljene linije sa pocetkom iz -200, -200 
void crtaj() {
	int x = -200;
	int y = -200;
	pixel(0, 0);
	for (int i = 0; i < 400; i++) {
		int smer = rand() % 4;
		//levo
		if (smer == 0)
			x -= 1;
		//desno
		else if (smer == 1)
			x += 1;
		//gore
		else if (smer == 2)
			y -= 1;
		else
			y += 1;
		pixel(x, y);
	}
}

// Popunjavanje matrice random vrednostima
void generisi(int posKrugovi[][2], int brKrugova, int visina, int sirina) {
	for (int i = 0; i < brKrugova; i++) {
		int posX = rand() % 400 + 1;
		int posY = rand() % 300 + 1;
		posKrugovi[i][0] = posX;
		posKrugovi[i][1] = posY;
	}
}

int main() 
{
  srand(time(0));

  openwindow(); 
  
  // Testiranje prve funkcije
  int pom = unos(-400, 400);
  printf("Pom je: %d\n", pom);

  // Testiranje druge funkcije
  crtajSmajli(0, 0, 100);

  // Testiranje trece funkcije
  int ret = crtajSmajli2(200, 200, 300);
  if (ret == -1)
	  printf("Smajli je ispao iz opsega\n");
  else
	 printf("Smajli je iscrtan...\n");

  ret = crtajSmajli2(200, 200, 100);
  if (ret == -1)
	  printf("Smajli je ispao iz opsega\n");
  else
	  printf("Smajli je iscrtan...\n");

  // Testiranje cetvrte funkcije
  int a = preklapajuSe(0, 0, 100, 200, 200, 100);
  ellipse(0, 0, 100, 100);
  ellipse(200, 200, 100, 100);
  if(a==-1)
	  printf("Preklapaju se\n");
  else
	  printf("Ne preklapaju se\n");

  // Testiranje pete funkcije
  crtaj();

  // Testiranje seste funkcije
  int matrica[5][2];
  generisi(matrica, 5, 200, 300);
  for (int i = 0; i < 5; i++) {
	  for (int j = 0; j < 2; j++) {
		  printf("Matrica i j = %d\n", matrica[i][j]);
	  }
  }

  getch();
  closewindow();

  return 0;
}