#include <IRremote.h>  // Include the IRremote library

int IR_Transmitter_Pin = 12;  // Set the pin number of the IR transmitter.
IRsend irsend(IR_Transmitter_Pin);  // Initialize the IRsend object with the pin number

void setup() {
}

void loop() {
  uint16_t randomData[67] = {  // Create an array of 67 16-bit random numbers.
    random(), random(), random(), random(), random(), random(), random(), random(), random(), random(),
    random(), random(), random(), random(), random(), random(), random(), random(), random(), random(),
    random(), random(), random(), random(), random(), random(), random(), random(), random(), random(),
    random(), random(), random(), random(), random(), random(), random(), random(), random(), random(),
    random(), random(), random(), random(), random(), random(), random(), random(), random(), random(),
    random(), random(), random(), random(), random(), random(), random(), random()
  };
  
  irsend.sendRaw(randomData, 67, 38);  // Utilizing the IR transmitter, the array of randomized integers is transmitted at a precisely tuned frequency of 38 kHz. This seamlessly sends the array as it is initiated and executed within the loop function.You can adjust the frequency of the IR transmission according to the frequency of the user's TV.
  
}
//This code send a bunch of random arrays to the tv continuously thus flooding the tv or the setup box.
//By Devadath Renjith(https://roboparadise.pythonanywhere.com)
