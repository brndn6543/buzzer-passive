#include <Arduino.h>
#include <pitches.h>

// Scale tones are defined in pitches.h.
int scale[] = {NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_C6};
int duration = 500;

void setup() {}

void loop() {
    for (int note = 0; note < sizeof(scale); note++) {
        // tone() is standard with the Arduino API.
        // It allows the generations of a square-wave
        // of a specified frequency.
        tone(8, scale[note], duration);
        delay(1000);
    }

    delay(2000);
}