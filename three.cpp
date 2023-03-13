/*I funktionen main, realisera följande instruktioner:
a) Deklarera en lokal variabel av datatypen int döpt num1 och tilldela heltalet -3.
b) Skriv ut innehållet ur variabeln num1 i terminalen.
c) Deklarera en pekare döpt ptr1 och sätt denna till att peka på variabeln num1.
d) Tilldela heltalet 4 till innehållet som pekaren ptr1 pekar på.
e) Skriv återigen ut innehållet ur variabeln num1 i terminalen. Vilket heltal skrivs ut och varför?*/

#include <iostream>

int main() 
{
  int num1 = -3;
  int* ptr1 = &num1;
  
  std::cout << "num1 = " << num1 << "\n";
  *ptr1 = 4;
  std::cout << "ptr1 =" << *ptr1;
  
}
