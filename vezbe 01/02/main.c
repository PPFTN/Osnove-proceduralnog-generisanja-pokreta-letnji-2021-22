/***********************************************************************
 * Smajli
************************************************************************/
#include <SGF.h>  // zaglavlje za rad sa grafickim prozorom



int main() 
{
  openwindow(); // otvori graficki prozor

  strokeweight(5);	// zelimo da linija bude malo deblja
  // Iscrtavanje smajlija  
  // Iscrtavanje lica
  fill(YELLOW);
  ellipse(0, 0, 250, 250);

  fill(BLACK);
  // Iscrtavanje ociju
  ellipse(-85, 100, 35, 50);
  ellipse(+85, 100, 35, 50);

  fill(RED);
  stroke(BLACK);
  ellipse(120, -120, 50, 50);

  // Iscrtavanje osmeha
  fill(YELLOW);
  stroke(NONE);
  pieslice(0, 0, 160, 180, 360);

  stroke(BLACK);
  arc(0, 0, 160, 180, 360);
 
  // Zaustavi izvrsavanje dok korisnik u konzoli ne pritisne taster
  getch();
  closewindow(); // zatvori graficki prozor

  return 0;
}