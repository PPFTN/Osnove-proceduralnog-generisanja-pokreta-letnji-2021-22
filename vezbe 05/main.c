#include <SGF.h>

int main() 
{
  openwindow(); 

  int precnik = 100;
  int izabranaBoja;
  int pocetnaX = -400 + precnik / 2;
  int pocetnaY = 300 - precnik / 2;

  do {
	  printf("Ponudjene boje: \n");
	  printf("1. zuta\n");
	  printf("2. zelena\n");
	  printf("3. plava\n");
	  printf("4. crvena\n");
	  printf("5. srebrna\n");
	  printf("6. ljubicasta\n");
	  printf("Unesite opciju ->\n");

	  scanf("%d", &izabranaBoja);
	
	  if (izabranaBoja < 1 || izabranaBoja>6)
		  printf("NEpostojeca opcija, probajte ponovo...\n");
  
  } while (izabranaBoja <1 || izabranaBoja>6);
  
  // Kretanje ka desno
  for (int i = 0; i < 800 - precnik; i++) {

	  // Postavljanje boje
	  switch (izabranaBoja) {
	  case 1:
		  fill(YELLOW);
		  break;
	  case 2:
		  fill(GREEN);
		  break;
	  case 3:
		  fill(BLUE);
		  break;
	  case 4:
		  fill(RED);
		  break;
	  case 5:
		  fill(SILVER);
		  break;
	  case 6:
		  fill(VIOLET);
		  break;
	  default:
		  printf("Nepostojeca opcija...\n");
		  break;
	  }

	  // Iscrtavanje lica
	  strokeweight(2);
	  ellipse(pocetnaX + i, pocetnaY, precnik / 2, precnik / 2);

	  // Iscrtavanje ociju
	  fill(BLACK);
	  ellipse(pocetnaX - precnik / 5+i, pocetnaY + precnik / 5, precnik / 12, precnik / 9);
	  ellipse(pocetnaX + precnik / 5+i, pocetnaY + precnik / 5, precnik / 12, precnik / 9);

	  // Iscrtavanje osmeha
	  stroke(BLACK);
	  arc(pocetnaX +i, pocetnaY, precnik / 3, 180, 360);

	  delay(5);
	  clear();

  }

  // Kretanje ka dole
  for (int i = 0; i < 600 - precnik; i++) {

	  // Postavljanje boje
	  switch (izabranaBoja) {
	  case 1:
		  fill(YELLOW);
		  break;
	  case 2:
		  fill(GREEN);
		  break;
	  case 3:
		  fill(BLUE);
		  break;
	  case 4:
		  fill(RED);
		  break;
	  case 5:
		  fill(SILVER);
		  break;
	  case 6:
		  fill(VIOLET);
		  break;
	  default:
		  printf("Nepostojeca opcija...\n");
		  break;
	  }

	  // Iscrtavanje lica
	  strokeweight(2);
	  ellipse(pocetnaX + 800 - precnik, pocetnaY - i, precnik / 2, precnik / 2);

	  // Iscrtavanje ociju
	  fill(BLACK);
	  ellipse(pocetnaX - precnik / 5 + 800 - precnik, pocetnaY - i + precnik / 5, precnik / 12, precnik / 9);
	  ellipse(pocetnaX + precnik / 5 + 800 - precnik, pocetnaY - i + precnik / 5, precnik / 12, precnik / 9);

	  // Iscrtavanje osmeha
	  stroke(BLACK);
	  arc(pocetnaX + 800 - precnik, pocetnaY - i, precnik / 3, 180, 360);

	  delay(5);

	  if( i != 600 - precnik - 1)
		  clear();

  }

  getch();
  closewindow();

  return 0;
}