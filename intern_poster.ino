
#include <FastLED.h>

#define NUM_LEDS 65
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7
#define PIN8 8
CRGB leds1[NUM_LEDS];
CRGB leds2[NUM_LEDS];
CRGB leds3[NUM_LEDS];
CRGB leds4[NUM_LEDS];
CRGB leds5[NUM_LEDS];
CRGB leds6[NUM_LEDS];
CRGB leds7[NUM_LEDS];

int input;
int slide;
boolean first;
float hue;

void setup() {
  hue = 0;
  slide = 0;
  first = false;

  Serial.begin(9600);
  Serial.println("starting");
  LEDS.addLeds<WS2812, PIN2, RGB>(leds1, NUM_LEDS);
  LEDS.addLeds<WS2812, PIN3, RGB>(leds2, NUM_LEDS);
  LEDS.addLeds<WS2812, PIN4, RGB>(leds3, NUM_LEDS);
  LEDS.addLeds<WS2812, PIN5, RGB>(leds4, NUM_LEDS);
  LEDS.addLeds<WS2812, PIN6, RGB>(leds5, NUM_LEDS);
  LEDS.addLeds<WS2812, PIN7, RGB>(leds6, NUM_LEDS);
  LEDS.addLeds<WS2812, PIN8, RGB>(leds7, NUM_LEDS);


  LEDS.setBrightness(255);

}

void clearAll() {
  hue = 0;
  for (int i = 0; i < NUM_LEDS; i++) {
    leds1[i] = CHSV(0, 0, 0);
    leds2[i] = CHSV(0, 0, 0);
    leds3[i] = CHSV(0, 0, 0);
    leds4[i] = CHSV(0, 0, 0);
    leds5[i] = CHSV(0, 0, 0);
    leds6[i] = CHSV(0, 0, 0);
    leds7[i] = CHSV(0, 0, 0);
  }
}



void loop() {

  if (Serial.available() > 0) {
    input = Serial.read();
  } else {
    input = 0;
    first = false;
  }

  if (input == 10) {
    slide++;
    first = true;
    Serial.println("slide incremented");
    if (slide > 7) {
      slide = 0;
    }
  }


  //  float toAdd = map(inoise8(noisePos), 0, 255, 2, 10);
  //  noisePos += .03; // how fast the variablaity changes
  //  inc += toAdd; // controls speed, make it randomize between range of 1 to 4
  //  hue = inc;
  //
  //  for (int i = 0; i < NUM_LEDS; i++) {
  //    leds[i] = CHSV(hue, 255, 255);
  ////    leds2[i]=CHSV(150,255,255);
  //    hue += 5; // incremenration of hues in the strip
  //  }

  switch (slide) {
    case 0:
      all();
      break;
    case 1:
      slide1();
      break;
    case 2:
      slide2();
      break;
    case 3:
      slide3();
      break;
    case 4:
      slide4();
      break;
    case 5:
      slide5();
      break;
    case 6:
      slide6();
      break;
    case 7:
      slide7();
      break;
  }

  FastLED.show();
  //  delay(60);
}

void all() {

  for (int i = 0; i < NUM_LEDS; i++) {
    //    leds2[i] = CHSV(0, 0, 0);
    leds1[i] = CHSV((hue + i) * 20, 255, 255);
  }



  for (int i = 0; i < NUM_LEDS; i++) {
    leds1[i] = CHSV((hue + i) * 20, 255, 255);
    leds2[i] = CHSV((hue + i) * 20, 255, 255);
    leds3[i] = CHSV((hue + i) * 20, 255, 255);
    leds4[i] = CHSV((hue + i) * 20, 255, 255);
    leds5[i] = CHSV((hue + i) * 20, 255, 255);
    leds6[i] = CHSV((hue + i) * 20, 255, 255);
    leds7[i] = CHSV((hue + i) * 20, 255, 255);
  }

  hue += .2;


}

void slide1() {
  if (first) {
    clearAll();
  }
  //  for (int i = 0; i < NUM_LEDS; i++) {
  //    leds2[i] = CHSV(0, 0, 0);
  //  }
  //  FastLED.show();


  for (int i = 0; i < NUM_LEDS; i++) {
    //    leds2[i] = CHSV(0, 0, 0);
    leds1[i] = CHSV((hue + i) * 20, 255, 255);
  }
  hue += .2;
  //  FastLED.show();


}
void slide2() {
  if (first) {
    clearAll();
  }

  //  for (int i = 0; i < NUM_LEDS; i++) {
  //    leds1[i] = CHSV(0, 0, 0);
  //  }
  //  FastLED.show();


  for (int i = 0; i < NUM_LEDS; i++) {
    //    leds2[i] = CHSV(0, 0, 0);
    leds2[i] = CHSV((hue + i) * 20, 255, 255);
  }
  hue += .2;
  //  FastLED.show();

}
void slide3() {
  if (first) {
    clearAll();
  }
  //  for (int i = 0; i < NUM_LEDS; i++) {
  //    leds2[i] = CHSV(0, 0, 0);
  //  }
  //  FastLED.show();

  for (int i = 0; i < NUM_LEDS; i++) {
    //    leds2[i] = CHSV(0, 0, 0);
    leds3[i] = CHSV((hue + i) * 20, 255, 255);
  }
  hue += .2;
  //  FastLED.show();

}
void slide4() {
  if (first) {
    clearAll();
  }
  //  for (int i = 0; i < NUM_LEDS; i++) {
  //    leds3[i] = CHSV(0, 0, 0);
  //  }
  //  FastLED.show();

  for (int i = 0; i < NUM_LEDS; i++) {
    //    leds2[i] = CHSV(0, 0, 0);
    leds4[i] = CHSV((hue + i) * 20, 255, 255);
  }
  hue += .2;
  //  FastLED.show();

}
void slide5() {
  if (first) {
    clearAll();
  }
  //
  //  for (int i = 0; i < NUM_LEDS; i++) {
  //    leds4[i] = CHSV(0, 0, 0);
  //  }
  //  FastLED.show();

  for (int i = 0; i < NUM_LEDS; i++) {
    //    leds2[i] = CHSV(0, 0, 0);
    leds5[i] = CHSV((hue + i) * 20, 255, 255);
  }
  hue += .2;
  //  FastLED.show();

}
void slide6() {
  if (first) {
    clearAll();
  }
  //  for (int i = 0; i < NUM_LEDS; i++) {
  //    leds5[i] = CHSV(0, 0, 0);
  //  }
  //  FastLED.show();
  for (int i = 0; i < NUM_LEDS; i++) {
    //    leds2[i] = CHSV(0, 0, 0);
    leds6[i] = CHSV((hue + i) * 20, 255, 255);
  }
  hue += .2;
  //  FastLED.show();

}
void slide7() {
  if (first) {
    clearAll();
  }
  //  for (int i = 0; i < NUM_LEDS; i++) {
  //    leds6[i] = CHSV(0, 0, 0);
  //  }
  //  FastLED.show();

  for (int i = 0; i < NUM_LEDS; i++) {
    //    leds2[i] = CHSV(0, 0, 0);
    leds7[i] = CHSV((hue + i) * 20, 255, 255);
  }
  hue += .2;
  //  FastLED.show();

}
