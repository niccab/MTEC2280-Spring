 // for this sketch to work, you'll need to install the "Sound" library
// Sketch -> Import Library -> Search for "Sound"
// for more about the sound library, see https://processing.org/tutorials/sound/
// and Help -> Libraries Reference -> Sound
import processing.sound.*;

// this variable will be an instance of the SoundFile class from the sound library
// the SoundFile will hold a reference to a sound file and provide methods (functions)
// to play back the sound in different ways 
SoundFile snare;
SoundFile kick;
boolean kickFlag = true; //flag to alternate between kick and snare 

void setup() {  
  
  // follow this pattern to load a new sound file
  // files are in aif format and located in the sketch's "data" folder
  snare = new SoundFile(this, "snare.aif");
  kick = new SoundFile(this, "kick.aif");
}

void draw() {
}

void keyPressed() {
  int tempo = 200;
  int pulse = 60000 / tempo / 4; //duration of a 16th note, or 1/4 of a beat in ms
  int loopCount = 0;
  if (key == 32) { // the code in this block will execute whenever we hit the space bar
   while(loopCount<=4) {
    kick.play();
    delay(pulse * 4);
    snare.play();
    delay(pulse * 4);
    kick.play();
    delay(pulse *2);
    kick.play();
    delay(pulse *2);
    snare.play();
    delay(pulse*4);
    
    loopCount++; 
  }
  }
    if (key == 'x') { // the code in this block will execute whenever we hit the space bar
  
    // since kick is an instance of SoundFile, it has a "play" method
    // call the play method to hear the kick drum
    kick.play();  
  }
}

// EXERCISE: How would you load another sound file called "snare" from the data folder?