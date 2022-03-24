#include <SGF.h>  // zaglavlje za rad sa grafickim prozorom

int main() 
{
  openwindow(); // otvori graficki prozor

  // Izmeni boju pozadine na plavu
  background(BLUE);

  // Iscrtaj travu
  stroke(NONE);
  fill(GREEN);
  rectangle(-400, -300, 400, -50);
  

  // Iscrtavanje kuce
  // Iscrtavanje osnove
  fill(WHITE);
  rectangle(-80,-120, 80, -20);

  // Iscrtavanje krova
  fill(RED);
  triangle(-100, -20, 0, 40, 100, -20);

  // Iscrtavanje vrata
  fill(BROWN);
  rectangle(-10, -120, 10, -80);

  // zaustavi izvrsavanje dok korisnik u konzoli ne pritisne taster
  getch();
  closewindow(); // zatvori graficki prozor

  return 0;
}