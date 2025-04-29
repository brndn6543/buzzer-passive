#include <Arduino.h>
#include <pitches.h>

int scale[] = {NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_C6};
int duration = 500;

void setup() {}

void loop() {
    for (int note = 0; note < sizeof(scale); note++) {
        tone(8, scale[note], duration);
        delay(1000);
    }

    delay(2000);
}