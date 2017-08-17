/*******************************************************************************
* Copyright (c) 2016, ROBOTIS CO., LTD.
* All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*
* * Redistributions of source code must retain the above copyright notice, this
*   list of conditions and the following disclaimer.
*
* * Redistributions in binary form must reproduce the above copyright notice,
*   this list of conditions and the following disclaimer in the documentation
*   and/or other materials provided with the distribution.
*
* * Neither the name of ROBOTIS nor the names of its
*   contributors may be used to endorse or promote products derived from
*   this software without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
* FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
* DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
* SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
* CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
* OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
* OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*******************************************************************************/
/* Analong_In_Out_Serial

 Demonstrates analog input by reading an analog sensor on analog pin
 0 and turning on and off the status LED(Light Emitting Diode).
 The amount of time the LED will be on and off depends on the
 value obtained by analogRead().
 
 */

int sensorPin = 0;   // Select the input pin for the potentiometer
int sensorValue = 0; // Variable to store the value coming from the sensor

void setup() {
  // Declare the sensorPin as INPUT_ANALOG:
  pinMode(sensorPin, INPUT_ANALOG);
  // Declare the LED's pin as an OUTPUT.  (BOARD_LED_PIN is a built-in
  // constant which is the pin number of the built-in LED.  On the
  // Maple, it is 13.)
  pinMode(BOARD_LED_PIN, OUTPUT);
}

void loop() {
  // Read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  // Turn the LED pin on:
  digitalWrite(BOARD_LED_PIN, HIGH);
  // Stop the program for <sensorValue> milliseconds:
  delay(sensorValue);
  // Turn the LED pin off:
  digitalWrite(BOARD_LED_PIN, LOW);
  // Stop the program for for <sensorValue> milliseconds:
  delay(sensorValue);
}
