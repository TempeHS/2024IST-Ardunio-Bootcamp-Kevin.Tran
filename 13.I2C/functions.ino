void updateOLED (float theTemp) {
  u8g2.clearBuffer();                 // clear the internal memory
  u8g2.setFont(u8g2_font_ncenB08_tr); // choose a suitable font
  u8g2.setCursor(0, 10);              // Set cursor to first line
  u8g2.print("Hello World!");
  u8g2.setCursor(0, 20);              // Set cursor to second line
  u8g2.print("The temperature is: ");
  u8g2.print(theTemp);
  u8g2.sendBuffer();                  // transfer internal memory to the display
}

float sampleTemperature() {
  return myPressureSensor.getTemperature();
}