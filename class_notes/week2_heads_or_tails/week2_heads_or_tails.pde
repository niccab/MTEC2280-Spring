void setup() {
  size(600,600);
  
  textAlign(CENTER,CENTER); //caps letter = mode
  textSize(100);
}

void draw() {

}

void keyPressed() {

  //create a variable of type INTEGER (int), name it coin, assign random value either 0 or 1
  //random returns float, needs to be converted into integer 
  int coin = int(random(2)); 
  println(coin);
  
  if(coin==0) {
  background(255,0,0);
  text("TAILS", width/2, height/2);
  println("TAILS");
  }

  if(coin==1) {
  background(0,0,255);
  text("HEADS", width/2, height/2);
  println("HEADS");
  }
}