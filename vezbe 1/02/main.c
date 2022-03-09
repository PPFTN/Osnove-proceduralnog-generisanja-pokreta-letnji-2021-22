/***********************************************************************
 * Projekat: primer02
 * Namena:   demonstracija upotrebe funkcija za iscrtavanje krivih linija
 *           i zatvorenih kontura
 * Modul:    main.c
 * Autor:    Srdjan Mihic
************************************************************************/
#include <SGF.h>  // zaglavlje za rad sa grafickim prozorom



int main() 
{
  openwindow(); // otvori graficki prozor


  // Zaustavi izvrsavanje dok korisnik u konzoli ne pritisne taster
  getch();
  closewindow(); // zatvori graficki prozor

  return 0;
}