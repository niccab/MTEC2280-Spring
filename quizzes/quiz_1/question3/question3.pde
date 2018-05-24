void setup() {
   size (500, 500);
   background(255);
   strokeWeight(1);

}

void draw() {
//background(255);
   stroke(random(255),random(255),random(255));
   line(0,0, mouseX, mouseY);
   line(width,0, mouseX, mouseY);
   line(0,height, mouseX, mouseY);
   line(width,height, mouseX, mouseY);
}