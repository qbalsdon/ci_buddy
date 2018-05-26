#define LEDPIN 13   

#define RED 2
#define GREEN 8
#define SPEAKER A1

#define PAUSE    0
#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978

int hoorayMelody[]        = {NOTE_C4, NOTE_E4, NOTE_G4, NOTE_C5, NOTE_G4, NOTE_C5}; // list of notes
int hoorayTempo[]         = {8      , 8      , 8      , 4      , 8      , 4      }; // note durations; 4 = quarter note, 8 = eighth note, etc. List length must match HoorayLength!

int marioMelody[] = { NOTE_E7, NOTE_E7, 0, NOTE_E7,0, NOTE_C7, NOTE_E7, 0,NOTE_G7, 0, 0,  0,NOTE_G6, 0, 0, 0,NOTE_C7, 0, 0, NOTE_G6,0, 0, NOTE_E6, 0,0, NOTE_A6, 0, NOTE_B6,0, NOTE_AS6, NOTE_A6, 0,NOTE_G6, NOTE_E7, NOTE_G7,NOTE_A7, 0, NOTE_F7, NOTE_G7,0, NOTE_E7, 0, NOTE_C7,NOTE_D7, NOTE_B6, 0, 0,NOTE_C7, 0, 0, NOTE_G6,0, 0, NOTE_E6, 0,0, NOTE_A6, 0, NOTE_B6,0, NOTE_AS6, NOTE_A6, 0,NOTE_G6, NOTE_E7, NOTE_G7,NOTE_A7, 0, NOTE_F7, NOTE_G7,0, NOTE_E7, 0, NOTE_C7,NOTE_D7, NOTE_B6, 0, 0};
int marioTempo[] =  { 12, 12, 12, 12,12, 12, 12, 12,12, 12, 12, 12,12, 12, 12, 12,12, 12, 12, 12,12, 12, 12, 12,12, 12, 12, 12,12, 12, 12, 12,9, 9, 9,12, 12, 12, 12,12, 12, 12, 12,12, 12, 12, 12,12, 12, 12, 12,12, 12, 12, 12,12, 12, 12, 12,12, 12, 12, 12,9, 9, 9,12, 12, 12, 12,12, 12, 12, 12,12, 12, 12, 12,};

int sadMelody[] = {NOTE_D1, NOTE_AS1, NOTE_A1};
int sadTempo[] =  {4, 4, 1};

int londonBridgeMelody[] = {NOTE_G4, NOTE_A4, NOTE_G4, NOTE_F4,NOTE_E4, NOTE_F4, NOTE_G4,NOTE_D4, NOTE_E4, NOTE_F4,NOTE_E4, NOTE_F4, NOTE_G4,NOTE_G4, NOTE_A4, NOTE_G4, NOTE_F4,NOTE_E4, NOTE_F4, NOTE_G4,NOTE_D4, NOTE_G4,NOTE_E4, NOTE_C4};              
int londonBridgeTempo[] = {4,4,4,4,4,4,2,4,4,2,4,4,2,4,4,4,4,4,4,2,2,2,4,2}; 

int imperialMarchMelody[] = {NOTE_A4, NOTE_A4, NOTE_A4, NOTE_F4, NOTE_C5, NOTE_A4, NOTE_F4, NOTE_C5, NOTE_A4, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_F5, NOTE_C5, NOTE_GS4, NOTE_F4, NOTE_C5, NOTE_A4, NOTE_A5, NOTE_A4, NOTE_A4, NOTE_A5, NOTE_GS5, NOTE_G5, NOTE_FS5, NOTE_F5, NOTE_FS5, PAUSE, NOTE_AS4, NOTE_DS5, NOTE_D5, NOTE_CS5, NOTE_C5, NOTE_B4, NOTE_C5, PAUSE, NOTE_F4, NOTE_GS4, NOTE_F4, NOTE_A4, NOTE_C5, NOTE_A4, NOTE_C5, NOTE_E5, NOTE_A5, NOTE_A4, NOTE_A4, NOTE_A5, NOTE_GS5, NOTE_G5, NOTE_FS5, NOTE_F5, NOTE_FS5, PAUSE, NOTE_AS4, NOTE_DS5, NOTE_D5, NOTE_CS5, NOTE_C5, NOTE_B4, NOTE_C5, PAUSE, NOTE_F4, NOTE_GS4, NOTE_F4, NOTE_C5, NOTE_A4, NOTE_F4, NOTE_C5, NOTE_A4};
int imperialMarchTempo[] = { 2,2,2,3,8,2,3,8,1,2,2,2,3,8,2,3,8,1,2,3,8,2,3,8,8,8,4,4,4,2,3,8,8,8,4,4,4,2,3,8,2,3,8,1,2,3,8,2,3,8,8,8,4,4,4,2,3,8,8,8,4,4,4,2,3,8,2,3,8,1};

bool flash_red;
bool flash_green;
bool red_value;
bool green_value;
int cnt;

char serial_value;

void setup() {
  Serial.begin(9600);
  pinMode(LEDPIN , OUTPUT);
  pinMode(RED , OUTPUT);
  pinMode(GREEN , OUTPUT);
  pinMode(SPEAKER, OUTPUT);

  flash_red = false;
  flash_green = false;
  red_value = LOW;
  green_value = LOW;

  for (int i = 0; i < 4; i++) {
      digitalWrite(GREEN, HIGH);
      digitalWrite(RED, LOW);
      delay(100);
      digitalWrite(GREEN, LOW);
      digitalWrite(RED, HIGH);
      delay(100);
  }

  digitalWrite(LEDPIN, LOW);
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, LOW);
  digitalWrite(SPEAKER, LOW);
  
  Serial.println("");
  Serial.println("READY! (SCREEN EXIT: Ctrl + A, Ctrl + D)");
  Serial.println("0 - RESET");
  Serial.println("1 - GREEN ON");
  Serial.println("2 - FLASH GREEN");
  Serial.println("3 - RED ON");  
  Serial.println("4 - FLASH RED");
  Serial.println("5 - PLAY HOORAY");
  Serial.println("6 - PLAY SAD");
  Serial.println("7 - PLAY MARIO");  
  Serial.println("8 - LONDON BRIDGE");
  Serial.println("9 - IMPERIAL MARCH");
}

void playTone(uint8_t pin, unsigned long frequency, unsigned int duration) {
  if (frequency == 0) { // If frequency are zero, just wait duration and exit.
    delay(duration);
    return;
  } 
  frequency = 1000000 / frequency;                              // Calculate the square wave length (in microseconds).
  uint32_t duty = frequency / 2;                                // Calculate the duty cycle (volume).
  uint32_t startTime = millis();                                // Starting time of note.
  while(millis() - startTime < duration) {                      // Loop for the duration.
    digitalWrite(pin,HIGH);
    delayMicroseconds(duty);                                    // Square wave duration (how long to leave pin high).
    digitalWrite(pin,LOW);
    delayMicroseconds(frequency - duty);                        // Square wave duration (how long to leave pin low).
  }
}

void playMelody(unsigned int len, unsigned int *melody, unsigned int *tempo) {
  for (int thisNote = 0; thisNote < len; thisNote++) {
      playTone(SPEAKER, melody[thisNote], 1000 / tempo[thisNote]); 
      delay(50);
  }
}

void playHooray() {
  playMelody(sizeof(hoorayMelody) / 2, hoorayMelody, hoorayTempo); 
}

void playMario() {
  playMelody(sizeof(marioMelody) / 2, marioMelody, marioTempo); 
}

void playSad() {
  playMelody(sizeof(sadMelody) / 2, sadMelody, sadTempo); 
}

void playLondonBridge() {
  playMelody(sizeof(londonBridgeMelody) / 2, londonBridgeMelody, londonBridgeTempo); 
}

void playImperialMarch() {
  playMelody(sizeof(imperialMarchMelody) / 2, imperialMarchMelody, imperialMarchTempo); 
}

void resetAll() {
  flash_red = false;
  flash_green = false;
  digitalWrite(GREEN, LOW);
  digitalWrite(RED, LOW);  
}

void loop ()
{
  cnt = (cnt + 1) % 250;
  
  if (cnt == 0 && flash_red) {
    red_value = !red_value;
    digitalWrite(RED, red_value);
  }

  if (cnt == 0 && flash_green) {
    green_value = !green_value;
    digitalWrite(GREEN, green_value);
  }
  
  if (Serial.available() > 0) {
    serial_value = Serial.read();   
    switch(serial_value){
      case '0': 
        resetAll();
        break;
      case '1': 
        digitalWrite(GREEN, HIGH);
        break;
      case '2': 
        flash_green = true;
        break;        
      case '3': 
        digitalWrite(RED, HIGH);
        break;
      case '4': 
        flash_red = true;
        break;        
      case '5': 
        playHooray();
        break;
      case '6': 
        playSad();
        break;
      case '7':         
        playMario();
        break;
      case '8': 
        playLondonBridge();
        break;
      case '9': 
        playImperialMarch();
        break;
    }
  }
  delay(1);
}
