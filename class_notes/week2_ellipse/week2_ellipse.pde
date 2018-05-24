void setup(){
  size(1000,700);
}

void draw() {
  
  println(abs(mouseX - width/2));
  background(0);
  ellipse(width/2, height/2, abs(mouseX-width/2)*2, abs(mouseX-width/2)*2);
}