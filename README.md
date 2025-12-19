# Metoda Eliminacji Gaussa - Projekt Zespołowy

Projekt zrealizowany w ramach laboratorium JIMP. Program rozwiązuje układy równań liniowych przy użyciu metody eliminacji Gaussa z częściowym wyborem elementu głównego (pivoting).

## Zespół i podział prac
* **Osoba A (Kateryna Vorobiova):** Implementacja etapu eliminacji (procedura sprowadzania macierzy do postaci trójkątnej).
* **Osoba B (Ryhor Aliferchyk):** Implementacja podstawienia wstecznego (wyliczanie niewiadomych) oraz opracowanie testów.
* **Razem:** Implementacja wyboru elementu głównego (pivot), co pozwoliło na przećwiczenie rozwiązywania konfliktów w systemie kontroli wersji Git.

## Funkcje programu
- [x] Eliminacja Gaussa (Forward Elimination)
- [x] Wybór elementu głównego (Partial Pivoting) - zapewnia stabilność numeryczną.
- [x] Podstawienie wsteczne (Backward Substitution)
- [x] Obsługa macierzy osobliwych.

## Jak uruchomić i testować
Program zawiera wbudowany zestaw danych testowych (układ 3x3).

### Kompilacja
Aby skompilować program, użyj kompilatora `gcc`:
bash
gcc main.c -o gauss -lm


### Uruchomienie
bash
./gauss


### Oczekiwany wynik testu
Dla wbudowanej macierzy:
A = [[2, 1, -1], [-3, -1, 2], [-2, 1, 2]], b = [8, -11, -3]
Program powinien zwrócić:
x1 = 3.0000
x2 = 1.0000
x3 = -1.0000
