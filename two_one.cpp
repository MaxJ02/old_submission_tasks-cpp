/* 1. I denna uppgift skall två versioner av samma program genomföras för att demonstrera returnering av värde via stacken
jämfört med lagring av returvärde på en given adress.
a) Skriv ett program innehållande en funktion döpt subtract, som returnerar differensen av två flyttal x och y. Deklarera två
variabler a och b i funktionen main, tilldela flyttal 3.4 respektive 6.8 vid start. Anropa sedan funktionen subtract och lagra
returvärdet i en variabel döpt c. Skriv ut differensen på formen a - b = c, vilket skall resultera i utskriften ”3.4 - 6.8 = -3.4”.*/

#include <iostream>


float subtract(float x, float y) 
{
    return x - y;
}



/*b) Modifiera ovanstående program, så att funktionen subtract inte har något returvärde. I stället skall differensen x – y lagras
på en angiven adress z, som passeras vid funktionsanropet. Se till att differensen efter funktionsanropet lagras på adressen
till variabeln c i main och genomför sedan utskrift igen. */

