/***********************************************************************
 * Projekat: primer01
 * Namena:   prikaz koordinatnih osa u koordinatnom pocetku, demonstracija
 *           upotrebe funkcija za iscrtavanje tacaka, linija i teksta
 * Modul:    main.c
 * Autor:    Srdjan Mihic
 ************************************************************************/
#include <SGF.h>  // zaglavlje za rad sa grafickim prozorom



int main() 
{
  openwindow(); // otvori graficki prozor

  // Nacrtaj koordinatni sistem - ose i koord. pocetak
  // Koord. pocetak
  pixel(0,0); // tacka u koord. pocetku
  text(-35, -5, "(0,0)"); // oznaka koord. pocetka

  // Y-osa
  stroke(RED);
  line(0, -5, 0, 30);  // y-osa
  line(-3, 18, 0, 30); // strelica y-ose 
  line(3, 18, 0, 30);  // strelica y-ose
  text(8, 35, "y");    // ispis teksta - oznake y-ose

  // X-osa
  stroke(GREEN);
  line(-5, 0, 30, 0);  // x-osa
  line(18, -3, 30, 0); // strelica x-ose 
  line(18, 3, 30, 0);  // strelica x-ose
  text(35, 0, "x");    // ispis teksta - oznake x-ose
  
  // Zaustavi izvrsavanje dok korisnik u konzoli ne pritisne taster
  getch();
  closewindow(); // zatvori graficki prozor

  return 0;
}