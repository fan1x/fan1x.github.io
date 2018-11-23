---
title: Programování I
layout: "page"
icon: fa-laptop
order: 3
---

## Obecné
- Přednášky:
  - pondělí (Holan) - [link](https://ksvi.mff.cuni.cz/~holan/)
  - pondělí (Dingle) - [link](https://ksvi.mff.cuni.cz/~dingle/2018/programming_i.html)
  - čtvrtek (Pergel) - [link](https://kam.mff.cuni.cz/~perm/programovani/NNPRG030/index.html)
- **Po domluvě** je možné programovat v jiném jazyce než Pascal (platí i pro zápočtový program). 
- IDE pro Pascal:
  - Free Pascal - [link](https://www.freepascal.org/)
  - Lazarus - [link](https://www.lazarus-ide.org/)

### ReCodex
- Web pro zadávání/odevdávání domácích úkolů
- [link](https://recodex.mff.cuni.cz/)
- Jak otestovat program podobně jako ReCodex? Postup je pro Windows, na unixu je víceméně stejný: 
  1. Naprogramujte a zkompilujte svůj program. Najděte, kam se uložila binárka/přeložený program (např.: `prg.exe`).
  2. Spusťte v adresáři s binárkou command prompt/nalistujte do adresáře (např.: [link](https://www.digitalcitizen.life/7-ways-launch-command-prompt-windows-7-windows-8)), případně pogooglete nebo se zeptejte na cvičení.
  3.  Vytvořte si vstupní soubor se všemi vstupy (např.: `in.txt`). 
  4.  Přesměrujte vstup ze souboru do programu a výstup do souboru: `prg.exe < in.txt > out.txt` ([link](http://www.ustrem.org/en/articles/redirecting-input-output-streams-en/))
  5.  Výstup je uložen v souboru `out.txt`
- Pokud chcete odevdávat v C#, můžete použít předpřipravenou knihovnu viz [FAQ](https://recodex.mff.cuni.cz/cs/faq)

### Zápočtový program
- info [zde](projects)

## Požadavky na zápočet
- Zápočtový program
  - Téma domluvené do 16.12.2018
  - První odevdání do 30.4.
- Domácí úkoly
  - 70% úspěšnost
- Zápočtová písemka
  - Poslední 2 cvičení
  - Dynamické proměnné

## Cvičení
### 1. cvičení (5.10.)
- slidy ([PDF](data/2018-19/prg1/cv1/prg1_cv1.pdf)) ([PPTX](data/2018-19/prg1/cv1/prg1_cv1.pptx))
- Organizace - požadavky na zápočet
- **Teorie:**  `Hello World`, `if-else`, `while`, `for`, I/O, Crt knihovna [link](https://www.freepascal.org/docs-html/rtl/crt/)
- **Programování:** Hello World, Hello user, Hello/Ahoj/Halo World, (Hello world)^n, Snake
- **DÚ:** Přihlásit se do ReCodexu [link](https://recodex.mff.cuni.cz/cs)

### 2. cvičení (12.10.)
- slidy ([PDF](data/2018-19/prg1/cv2/prg1_cv2.pdf)) ([PPTX](data/2018-19/prg1/cv2/prg1_cv2.pptx))
- **Teorie:** složitost (příklad: `is_prime(n)`, `find_min()`)
- **Programování:** Kreslení čtverců, trojúhelníků pomocí posloupností, Snake
- **DÚ (do středy 17.10.2018 23:59):** Analýza jednoduchého třídění čísel
  - Popište pseudokód algoritmu na setřídění pole čísel. Napište časovou a paměťovou složitost algoritmu. Dokažte/nastiňte správnost a konečnost algoritmu.

### 3. cvičení (19.10.)
- slidy ([PDF](data/2018-19/prg1/cv3/prg1_cv3.pdf)) ([PPTX](data/2018-19/prg1/cv3/prg1_cv3.pptx))
- **Teorie:** složitost, konečnost, správnost algoritmů (příklad: Bubble sort), pole
- **Programování:** Kreslení čtverců, trojúhelníků pomocí posloupností (pokračování)
- **DÚ (ReCodex, do pátku 26.10. 2:00):** Čtverce a trojúhelníky
- **DÚ (do soboty 27.10. 2:00):** Oprava DÚ1

### 4. cvičení (26.10.)
- slidy ([PDF](data/2018-19/prg1/cv4/prg1_cv4.pdf)) ([PPTX](data/2018-19/prg1/cv4/prg1_cv4.pptx))
- **Teorie:** pole, řetězce
- **Programování:** Hledání v poli, řetězci

### 5. cvičení (2.11.)
- slidy ([PDF](data/2018-19/prg1/cv5/prg1_cv5.pdf)) ([PPTX](data/2018-19/prg1/cv5/prg1_cv5.pptx))
- **Teorie:** Předávání argumentů hodnotou/referencí
- **Programování:** Hledání v poli, práce s maticemi
- **DÚ (ReCodex, do pátku 9.12. 2:00) :** Počítání králíků

### 6. cvičení (9.11.)
- slidy ([PDF](data/2018-19/prg1/cv6/prg1_cv6.pdf)) ([PPTX](data/2018-19/prg1/cv6/prg1_cv6.pptx))
-**Programování:** Hledávní v poli/stringách, práce s maticemi, začátek programování vlny
**DÚ (do pondělí 12.11. 2:00): ** Počítání králíků (odevzdat do ReCodex) nebo poslat mailem část programu s popisem problémů.

### 7. cvičení (16.11.)
- slidy ([PDF](data/2018-19/prg1/cv7/prg1_cv7.pdf)) ([PPTX](data/2018-19/prg1/cv7/prg1_cv7.pptx))
- **Teorie:** Rekurze, NSD
- **Programování:** Debugování, rekurze - fibonnaciho čísla, procházení pole, hledání palindromu, hledání prvočísel.

### 8. cvičení (16.11.)
- slidy ([PDF](data/2018-19/prg1/cv8/prg1_cv8.pdf)) ([PPTX](data/2018-19/prg1/cv8/prg1_cv8.pptx))
