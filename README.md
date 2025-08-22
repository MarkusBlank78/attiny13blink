Ein kleines Beispielprojekt für den ATtiny13: Zwei LEDs blinken abwechselnd.  
Dieses Projekt zeigt die Grundlagen der Portsteuerung in C sowie den Umgang mit einem `Makefile`.

- Mikrocontroller: ATtiny13
- Takt: interner 9,6 MHz RC-Oszillator (Standard)
- 2× LED mit Vorwiderstand (z. B. 330–470 Ω)
- Steckbrett oder Platine
- Programmer (z. B. USBasp, USBtinyISP o. ä.)


| ATtiny13-Pin | Funktion | Anschluss |
|--------------|----------|-----------|
| PB0 (Pin 5)  | LED1     | LED + Widerstand nach GND |
| PB1 (Pin 6)  | LED2     | LED + Widerstand nach GND |
| VCC (Pin 8)  | +5V      | Versorgung |
| GND (Pin 4)  | GND      | Versorgung |


Die Firmware ist in **C** geschrieben und nutzt `<avr/io.h>` sowie `_delay_ms()` aus `<util/delay.h>`.


- `main.c` → Quellcode für den Wechselblinker  
- `Makefile` → zum Kompilieren und Flashen  
- `README.md` → diese Datei


Im Projektordner ausführen:

```bash
make
