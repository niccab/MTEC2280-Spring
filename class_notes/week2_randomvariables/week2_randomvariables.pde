void setup() {
   size (600, 600);
   
   //noStroke();
   
   frameRate(200);
   background(0);
}

void draw() {
  //to create variable, you have to assign TYPE, NAME, and VALUE
  float x = random(width); 
  float y = random(height);

  //assigning variables to random color
  float red = random(255); 
  float green = random(255); 
  
  float blue = random(255); 
  
  fill(red, green, blue); //previously assigned variables to assign RGB values
  stroke(random(255)); //applying random stroke color too
  ellipse(x, y, 20, 20);
  rect(x-10,y+10, 20,20); //places rectangle under ellipse
  println(x,y); //print x , y positions
}