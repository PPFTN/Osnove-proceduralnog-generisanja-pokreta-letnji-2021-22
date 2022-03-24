/***********************************************************************
 * Smajli
************************************************************************/
#include <SGF.h>  // zaglavlje za rad sa grafickim prozorom

int main()
{
	int precnik; // velicina smajlija
	int x;
	int y; // pozicija centra smajlija

	printf("Molimo Vas unesite precnik smajlija: \n");
	scanf("%d", &precnik);

	if (precnik > 600) {
		printf("Smajli ne staje u graficki prozor!\n");
		getch();
	}
	else {
		printf("Iscrtava se smajli precnika: %d\n", precnik);
		printf("Molimo Vas unesite x koordinatu smajlija: \n");
		scanf("%d", &x);
		printf("Molimo Vas unesite y koordinatu smajlija: \n");
		scanf("%d", &y);
		openwindow(); // otvori graficki prozor

		strokeweight(5);  // zelimo da linija bude malo deblja

		// Iscrtavanje lica
		fill(YELLOW);
		ellipse(x, y, precnik / 2, precnik / 2);

		// Iscrtavanje ociju
		fill(BLACK);
		ellipse(x-precnik/5, y+precnik/5, precnik / 12, precnik / 9);
		ellipse(x+precnik/5, y+precnik/5, precnik / 12, precnik / 9);

		stroke(BLACK);
		arc(x, y, precnik / 3, 180, 360);

		// Zaustavi izvrsavanje dok korisnik u konzoli ne pritisne taster
		getch();
		closewindow(); // zatvori graficki prozor

	}

	return 0;
}