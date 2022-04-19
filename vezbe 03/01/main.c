#include <SGF.h>

// Otkomentarisati zeljeni zadatak pre pokretanja, a ostale zakomentarisati.
int main() 
{
  openwindow(); 
 

  // 1. Vertikalna linija
  for (int i = 0; i < 100; i++) {
	  pixel(i, 0);
  }


/*
  // 2. Horizontalna linija
  for (int i = 0; i < 100; i++) {
	  pixel(100, i);
  }
*/

/*
  // 3. Kosa linija
  for (int i = 0; i < 100; i++) {
	  pixel(i, i);
  }
*/

/*
  // 4. Koordniatni sistem
  for (int i = 0; i < 100; i++) {
	  pixel(0, i);
	  pixel(0, -i);
	  pixel(i, 0);
	  pixel(-i, 0);
  }
  

  for (int i = 0; i < 10; i++) {
	  pixel(100-i, i);
	  pixel(100- i, -i);
	  pixel(i, 100-i);
	  pixel(-i, 100-i);
  }

  text(100, -5, "x");
  text(15, 100, "y");
*/

/*
  // 5. Pravougaonik
  for (int i = 0; i < 100; i++) {
	  for (int j = 0; j < 200; j++) {
		  pixel(i, j);
	  }
  } 
*/

/*
  // 6. Pravougaonik, svaki peti piksel preko if-a
  for (int i = 0; i < 100; i++) {
	  for (int j = 0; j < 200; j++) {
		  if (i % 5 == 0 && j % 5 == 0) {
			  pixel(i, j);
		  }
	  }
  }
*/
   
/*
  //7. trougao da bude popunjen
  for (int i = 0; i < 100; i++) {
	  for (int j = 0; j < 100; j++) {
		  if (i >= j) {
			  pixel(i, i - j);
		  }
	  }
  }
*/

/*
  //8a. pravougaonik od linija
  for (int i = 0; i < 100; i++) {
	  line(-100, -50+i, 100, -50+i);
  }
*/

/*
  //8b. trougao od linija
  for (int i = 0; i < 100; i++) {
	  line(-100, -50 + i, -100-i, -50 + i);
  }
*/

/*
  //8.c jednakokraki trougao od linija
  for (int i = 0; i < 200; i++) {
	  line(0, 50, -100 + i, 0);
  }
*/
 
  getch();
  closewindow();

  return 0;
}