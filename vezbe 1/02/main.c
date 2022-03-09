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

  // Iscrtavanje smajlija  
  // Iscrtavanje lica
  fill(NONE);
  ellipse(0, 0, 250, 250);

  // Iscrtavanje ociju
  ellipse(-85, 100, 35, 35);
  ellipse(+85, 100, 35, 35);

  // Iscrtavanje osmeha
  arc(0, 0, 160, 180, 360);
 
  // Zaustavi izvrsavanje dok korisnik u konzoli ne pritisne taster
  getch();
  closewindow(); // zatvori graficki prozor

  return 0;
}