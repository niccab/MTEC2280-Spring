import processing.sound.*;
SoundFile kick;
SoundFile snare;

void setup() {  
  kick = new SoundFile(this, "kick.aif");
  snare = new SoundFile(this, "snare.aif");
}

void draw() {
}

void keyPressed() {
  
  int tempo = 120; // BPM
  int pulse = 60000 / tempo / 4; //duration of a 16th note, or 1/4 of the beat, in ms
    
  if (key == 32) { // space bar
    for(int i = 0; i < 4; i++) { // initialize; test; increment
      for(int p=0; p<2; p++) {
        kick.play();
        delay(pulse * 4);
        if (p==1) {
          kick.play();
        }
        
        delay(pulse * 2);
        snare.play();
        delay(pulse * 4);
    }
    }
}
}
// EXERCISE: Re-write the rhythm to using a second loop and fewer play calls.