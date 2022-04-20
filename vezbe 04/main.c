/***********************************************************************
 * Projekat: primer01
 * Namena:   prikaz koordinatnih osa u koordinatnom pocetku, demonstracija
 *           upotrebe funkcija za iscrtavanje tacaka, linija i teksta
 * Modul:    main.c
 * Autor:    Srdjan Mihic
 ************************************************************************/
#include <SGF.h>  // zaglavlje za rad sa grafickim prozorom
#include <stdio.h>

void iscrtajOsnovnuSahovskuTablu() {
	openwindow();

	int brojKvadrata = 8;
	int dimenzijaTable = 240;
	int stranica = dimenzijaTable / brojKvadrata;

	for (int i = 0; i < brojKvadrata; i++) {
		for (int j = 0; j < brojKvadrata; j++) {
			if (i % 2 == 0) {
				if (j % 2 == 0) {
					fill(YELLOW);
				}
				else {
					fill(BLACK);
				}
			}
			else {
				if (j % 2 == 0) {
					fill(BLACK);
				}
				else {
					fill(YELLOW);
				}
			}

			rectangle(j * stranica, i * stranica, (j + 1) * stranica, (i + 1) * stranica);
		}
	}

	getch();
	closewindow();
}

void iscrtajSTProzorSaParametrima() {

	int brojKvadrata = 8;
	int dimenzijaTable = 500;
	int stranica = dimenzijaTable / brojKvadrata;

	// isti su poceci, jer je graficki prozor kvadrat
	int pocetakX = -dimenzijaTable / 2;
	int pocetakY = -dimenzijaTable / 2;

	openwindow(dimenzijaTable, dimenzijaTable);

	for (int i = 0; i < brojKvadrata; i++) {
		for (int j = 0; j < brojKvadrata; j++) {
			if (i % 2 == 0) {
				if (j % 2 == 0) {
					fill(YELLOW);
				}
				else {
					fill(BLACK);
				}
			}
			else {
				if (j % 2 == 0) {
					fill(BLACK);
				}
				else {
					fill(YELLOW);
				}
			}

			rectangle(pocetakX + j * stranica, pocetakY + i * stranica, pocetakX +(j + 1) * stranica, pocetakY + (i + 1) * stranica);
		}
	}

	getch();
	closewindow();
}

void iscrtajSTSaKrugovima() {
	int brojKvadrata = 8;
	int dimenzijaTable = 500;
	int stranica = dimenzijaTable / brojKvadrata;

	// isti su poceci, jer je graficki prozor kvadrat
	int pocetakX = -dimenzijaTable / 2;
	int pocetakY = -dimenzijaTable / 2;

	int poluprecnikKruga = 25;

	openwindow(dimenzijaTable, dimenzijaTable);

	for (int i = 0; i < brojKvadrata; i++) {
		for (int j = 0; j < brojKvadrata; j++) {
			if (i % 2 == 0) {
				if (j % 2 == 0) {
					fill(YELLOW);
				}
				else {
					fill(BLACK);
				}
			}
			else {
				if (j % 2 == 0) {
					fill(BLACK);
				}
				else {
					fill(YELLOW);
				}
			}

			rectangle(pocetakX + j * stranica, pocetakY + i * stranica, pocetakX + (j + 1) * stranica, pocetakY + (i + 1) * stranica);
			fill(RED);
			ellipse(pocetakX + j * stranica + stranica/2, pocetakY + i * stranica + stranica/2, poluprecnikKruga, poluprecnikKruga);
		}
	}

	getch();
	closewindow();
}


void iscrtajSTSaSmajlijimaNaizmenicno() {
	int brojKvadrata = 8;
	int dimenzijaTable = 500;
	int stranica = dimenzijaTable / brojKvadrata;

	// isti su poceci, jer je graficki prozor kvadrat
	int pocetakX = -dimenzijaTable / 2;
	int pocetakY = -dimenzijaTable / 2;

	int poluprecnikGlave = 25;
	int poluprecnikOka = 4;

	int pomerajOkaX = 20;
	int pomerajOkaY = 40;
	int duzinaOsmeha = 14;

	openwindow(dimenzijaTable, dimenzijaTable);

	// samo na zutim poljima smajliji
	// ako je polje crno vrednost 'zutoPolje = 0', ako je zuto vrednost 'zutoPolje = 1'
	int zutoPolje = 0;
	for (int i = 0; i < brojKvadrata; i++) {
		for (int j = 0; j < brojKvadrata; j++) {
			if (i % 2 == 0) {
				if (j % 2 == 0) {
					fill(YELLOW);
					zutoPolje = 1;
				}
				else {
					fill(BLACK);
					zutoPolje = 0;
				}
			}
			else {
				if (j % 2 == 0) {
					fill(BLACK);
					zutoPolje = 0;
				}
				else {
					fill(YELLOW);
					zutoPolje = 1;
				}
			}

			rectangle(pocetakX + j * stranica, pocetakY + i * stranica, pocetakX + (j + 1) * stranica, pocetakY + (i + 1) * stranica);
			
			//ako je polje zuto, crtaj smajli
			if (zutoPolje == 1) {
				fill(WHITE);
				ellipse(pocetakX + j * stranica + stranica / 2, pocetakY + i * stranica + stranica / 2, poluprecnikGlave, poluprecnikGlave);
				fill(BLACK);
				ellipse(pocetakX + j * stranica + pomerajOkaX, pocetakY + i * stranica + pomerajOkaY, poluprecnikOka, poluprecnikOka);
				ellipse(pocetakX + j * stranica + 2 * pomerajOkaX, pocetakY + i * stranica + pomerajOkaY, poluprecnikOka, poluprecnikOka);
				arc(pocetakX + j * stranica + stranica / 2, pocetakX + i * stranica + stranica / 2, duzinaOsmeha, 180, 360);
			}
		}
	}

	getch();
	closewindow();
}

int main() 
{
	//otkomentarisati funkciju zeljenog zadatka

	//iscrtajOsnovnuSahovskuTablu();

	//iscrtajSTProzorSaParametrima();

	//iscrtajSTSaKrugovima();

	iscrtajSTSaSmajlijimaNaizmenicno();

	return 0;
}