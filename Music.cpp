/* 
 *  Music.cpp - Library for basic songs over a buzzer
 *  Created by Lukas Ahrens, March 17, 2020
 *  Private
 */

#include <Arduino.h>
#include "Music.h"

////////////////////////////////////////////////////////
//Noten definieren
#define A2 27.5000 
#define Ais2 29.1352 
#define B2 29.1352 
#define H2 30.8677 

#define C1 32.7032
#define Cis1 34.6478 
#define Des1 34.6478 
#define D1 36.7081 
#define Dis1 38.8909
#define Es1 38.8909
#define E1 41.2034
#define F1 43.6535
#define Fis1 46.2493
#define Ges1 46.2493
#define G1 48.9994 
#define Gis1 51.9131
#define As1 51.9131
#define A1 55.0000 
#define Ais1 58.2705 
#define _B1 58.2705 
#define H1 61.7354 

#define C 65.4064
#define Cis 69.2957 
#define Des 69.2957 
#define D 73.4162
#define Dis 77.7817
#define Es 77.7817
#define E 82.4069
#define _F 87.3071
#define Fis 92.4986 
#define Ges 92.4986 
#define G 97.9989 
#define Gis 103.826
#define As 103.826
#define A 110.000
#define Ais 116.541
#define B 116.541
#define H 123.471

#define c 130.813
#define cis 138.591 
#define des 138.591  
#define d 146.832 
#define dis 155.563
#define es 155.563
#define e 164.814
#define f 174.614
#define fis 184.997 
#define ges 184.997 
#define g 195.998 
#define gis 207.652 
#define as 207.652 
#define a 220.000
#define ais 233.082
#define b 233.082
#define h 246.942

#define c1 261.626
#define cis1 277.183 
#define des1 277.183 
#define d1 293.665
#define dis1 311.127
#define es1 311.127
#define e1 329.628
#define f1 349.228
#define fis1 369.994
#define ges1 369.994
#define g1 391.995 
#define gis1 415.305 
#define as1 415.305 
#define a1 440.000 
#define ais1 466.164 
#define b1 466.164
#define h1 493.883

#define c2 523.251 
#define cis2 554.365 
#define des2 554.365 
#define d2 587.330 
#define dis2 622.254 
#define es2 622.254 
#define e2 659.255 
#define f2 698.456
#define fis2 739.989
#define ges2 739.989
#define g2 783.991
#define gis2 830.609
#define as2 830.609
#define a2 880.000
#define ais2 932.328
#define b2 932.328
#define h2 987.767

#define c3 1046.50 
#define cis3 1108.73
#define des3 1108.73
#define d3 1174.66
#define dis3 1244.51
#define es3 1244.51
#define e3 1318.51
#define f3 1396.91
#define fis3 1479.98
#define ges3 1479.98
#define g3 1567.98
#define gis3 1661.22
#define as3 1661.22
#define a3 1760.00
#define ais3 1864.66
#define b3 1864.66
#define h3 1975.53

#define c4 2093.00
#define cis4 2217.46 
#define des4 2217.46 
#define d4 2349.32
#define dis4 2489.02
#define es4 2489.02
#define e4 2637.02
#define f4 2793.83
#define fis4 2959.96
#define ges4 2959.96
#define g4 3135.96
#define gis4 3322.44
#define as4 3322.44
#define a4 3520.00
#define ais4 3729.31
#define b4 3729.31
#define h4 3951.07 

#define c5 4186.01
////////////////////////////////////////////////////////

Music::Music(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void Music::Mplay(float note, int duration)
{
  tone(_pin, note);
  delay(duration);
  noTone(_pin);
}

void Music::Mbreak(int breakduration)
{
  noTone(_pin);
  delay(breakduration);
}