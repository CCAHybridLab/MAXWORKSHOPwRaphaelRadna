/*
  Use Serial write instead of serial print for Max. Comnent out Serial.print and comment Serial.write to test your A0 input in the Arduino Serial Port then switch it back. 
  After uploading this code close Arduino so as not to simultaniously use the serial port.
 */



int sensorVal;
 
void setup() {
  Serial.begin(9600);
}
void loop() {
  sensorVal= analogRead(A0);
  Serial.write(sensorVal);
  // Serial.print(sensorVal);
  delay (100);
}
