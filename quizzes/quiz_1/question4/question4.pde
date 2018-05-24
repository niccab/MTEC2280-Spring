void setup() {
   size (500, 500);
   background(255);
   strokeWeight(1);

}

void draw() {

}

void keyPressed() {
float r = random(255);
float g = random(255);
float b = random(255);
float w = random(width);
float h = random(height);

  if(key=='x') { 
  fill(r,g,b);
  noStroke();
  ellipse(w,h,50,50);  
  }  
  
  if(key=='b') {   
  background(r,g,b);  
  }


}