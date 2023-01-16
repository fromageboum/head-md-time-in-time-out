#include <IRremote.h>
#define buzzer 4

int NOTE_A1 = 220;
int NOTE_B1 = 244;
int NOTE_C = 261;
int NOTE_Cd = 277;
int NOTE_D = 294;
int NOTE_Dd = 311;
int NOTE_E = 330;
int NOTE_F = 349;
int NOTE_Fd = 370;
int NOTE_G = 392;
int NOTE_Gd = 415;
int NOTE_A = 440;
int NOTE_Ad = 457;
int NOTE_B = 474;
int NOTE_C1 = 492;
int NOTE_G1 = 500;
int REST = 0;

int tempo = 0;
int IRpin = 5;
IRrecv irrecv(IRpin);
decode_results results;



/*int melody1[] = {

  NOTE_C, 5, NOTE_E, 10, NOTE_C, 6, NOTE_E, 4, REST, 10, NOTE_G, 6, NOTE_E, 1, NOTE_D, 10, NOTE_G, 10, NOTE_E, 2, NOTE_D, 2, NOTE_E, 6, NOTE_C, 1

};

int melody1[] = {

  NOTE_E, 1, NOTE_A1, 1, NOTE_B1, 1, NOTE_C, 1, NOTE_D, 1,NOTE_E,1, NOTE_G1, 1, NOTE_E, 1, NOTE_A1, 1, NOTE_B1, 1, NOTE_C, 1, NOTE_D, 1,

};*/

int melody1[] = {

  NOTE_E,
  1.7,
  REST,
  7,
  NOTE_A1,
  6,
  NOTE_B1,
  6,
  NOTE_C,
  6,
  NOTE_D,
  6,
  NOTE_E,
  5,
  NOTE_G,
  2,
  NOTE_E,
  2,
  REST,
  2,
  NOTE_A1,
  4,
  NOTE_B1,
  3,
  NOTE_C,
  5,
  NOTE_B1,
  3,
  NOTE_A1,
  3,
  NOTE_D,
  3,
  NOTE_E,
  6,
  NOTE_A1,
  6,
  NOTE_B1,
  2,
  REST,
  2,
  NOTE_C,
  6,
  NOTE_D,
  6,
  NOTE_E,
  6,
  NOTE_G,
  2,
  NOTE_A,
  1,
  NOTE_G,
  3,
  NOTE_E,
  2,
  REST,
  7,
  NOTE_A1,
  6,
  NOTE_B1,
  6,
  NOTE_C,
  4,
  NOTE_B1,
  1,
  NOTE_A1,
  1,
  REST,
  1,

};

// sizeof gives the number of bytes, each int value is composed of two bytes (16 bits)
// there are two values per note (pitch and duration), so for each note there are four bytes
int notes = sizeof(melody1) / sizeof(melody1[0]) / 2;

// this calculates the duration of a whole note in ms
int wholenote = (60000 * 4) / tempo;

int divider = 0, noteDuration = 0;
//float mood =

void setup() {
  Serial.begin(9600);
  //irrecv.enableIRIn();  // Start the receiver
  //  Serial.println("mood:"mood)
  Serial.print("Hello");
}

void loop() {

  if (irrecv.decode(&results)) {
    Serial.println(results.value, DEC);  // Print the Serial ‘results.value’
    Serial.println(tempo);
    // Serial.println(IRdecodedIRData.decodedRawData, HEX);
    //delay(1500);
    irrecv.resume();  // Receive the next value






    /*for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {

      // calculates the duration of each note
      divider = melody1[thisNote + 1];
      if (divider > 0) {
        // regular note, just proceed
        noteDuration = (wholenote) / divider;
      } else if (divider < 0) {
        // dotted notes are represented with negative durations!!
        noteDuration = (wholenote) / abs(divider);
        noteDuration *= 1.5;  // increases the duration in half for dotted notes
      }

      // we only play the note for 90% of the duration, leaving 10% as a pause
      tone(buzzer, melody1[thisNote], noteDuration * 0.9);

      // Wait for the specief duration before playing the next note.
      delay(noteDuration);

      // stop the waveform generation before the next note.
      noTone(buzzer);
      }*/
  }

  delay(1);
}

void moodled() {
  if (results.value = 16248847) {
    tempo = 180;

  } else {
    tempo = 180;
    int NOTE_A1 = 25;
    int NOTE_E = 30;
  }
}

void moodDVD() {
  if (results.value = 2155819215) {
    tempo = 130;

  } else {
    tempo = 200;
    int NOTE_A1 = 35;
    int NOTE_E = 15;
  }
}
void moodTV() {
  if (results.value = 2152626311) {
    tempo = 100;

  } else {
    tempo = 150;
    int NOTE_A1 = 40;
    int REST = 25;
  }
}
