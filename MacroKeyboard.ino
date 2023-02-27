/**
 * This example turns the ESP32 into a Bluetooth LE keyboard that writes the words, presses Enter, presses a media key and then Ctrl+Alt+Delete
 */
#include <BleKeyboard.h>

BleKeyboard bleKeyboard("Pipe MacroKB", "Felipe Acevedo", 100);

void setup()
{
  Serial.begin(115200);
  Serial.println("Starting BLE work!");
  bleKeyboard.begin();
}

void loop()
{
  if (bleKeyboard.isConnected())
  {
    Serial.println("Sending 'Hello world'...");
    bleKeyboard.print("Hello world");
    delay(5000);
  }
}
