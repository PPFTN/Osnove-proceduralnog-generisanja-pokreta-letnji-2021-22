#include <SGF.h>
#include <stdlib.h>

int main() 
{
  openwindow(); 
  int matrica[2][5] = {
	  {-10, 20, 5, 0, 10},
	  {10, 10, 40, 0, 10}
  };
 
  // Korisnik sa tastature unosi elemente matrice
  /* 
  int matrica[2][5];
  for (int i = 0; i < 2; i++) {
	  for (int j = 0; j < 5; j++) {
		  printf("Unesite element u matricu na poziociji [%d][%d]", i, j);
		  scanf("%d", &matrica[i][j]);
	  }
  }*/

  // slučajan broj jelkica izmedju 1 i 10
  srand(time(0));
  int broj = rand();
  broj = broj % 10;
  broj = broj + 1;

  for(int k = 0; k < 390; k++) {
	  for (int i = 0; i < broj; i++) {
		  triangle(matrica[0][0] + 50 * i-k, matrica[1][0], matrica[0][1] + 50 * i-k, matrica[1][1], matrica[0][2] + 50 * i-k, matrica[1][2]);
		  rectangle(matrica[0][3] + 50 * i-k, matrica[1][3], matrica[0][4] + 50 * i-k, matrica[1][4]);
	  }
	  delay(10);
	  if (k != 389) {
		  clear();
	  }
  }
  
  getch();
  closewindow();

  return 0;
}