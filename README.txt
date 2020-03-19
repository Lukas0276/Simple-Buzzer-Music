A simple library that lets you play music with a buzzer.

You can simply define the buzzer or speaker pin:

Music music(pinNumber);

Note: "music" can be any word as long as you change the following commands
depending on your new name.
#############################################################################

Now you can play sounds through your speaker by simply typing:

music.Mplay(c1, 1000);

The c1 is the tone on a keyboard and 1000 is the duration of that tone.
The scale goes from A2 to c5. Exceptions are: B1 -> _B1 / F -> _F 
#############################################################################
If you need a delay, just enter the following:

music.Mbreak(1000);

In this case 1000 is the duration of the delay.
#############################################################################

Have fun with your favorite songs!