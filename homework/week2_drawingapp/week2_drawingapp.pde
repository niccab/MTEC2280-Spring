// occurs once at the beginning of run
void setup() {
  size(700,700,P3D);
  background(255);
  strokeWeight(4); //wider stroke thickness
  fill(0,102,153);
  textSize(12);
  text("Press i for key functions / Press x to clear message", 10, 30);
}

// continuously occurs over and over again during run, after setup
void draw() {

  //circle drawing mode
  //ellipse(mouseX, mouseY,30,10);
  
  //where is my mouse? in Console
  //println(mouseX, mouseY);
}
// if the mouse is clicked and dragged
void mouseDragged() {
  //line drawing mode  
  line(mouseX,mouseY,pmouseX,pmouseY);
}

// if a key is pressed
void keyPressed() {
  println(key);
  if(key=='a') {   // if the a key is pressed then...
  strokeWeight(1);  //...set the stroke weight to 1
  }
  if(key=='s') {   //if the s key is pressed then...
  strokeWeight(5);   //...set the stroke weight to 5
  }
  if(key=='d') {   //if the d key is pressed then...
  strokeWeight(10);   //...set the stroke weight to 10
  }
  if(key=='f') {   //if the f key is pressed then...
  strokeWeight(15);   //...set the stroke weight to 15
  }
  if(key=='1') {   //if the 1 key is pressed then...
  stroke(255,0,0);   //...change color to red
  }
  if(key=='2') {   //if the 2 key is pressed then...
  stroke(0,255,0);   //...change color to green
  }
  if(key=='3') {   //if the 3 key is pressed then...
  stroke(0,0,255);   //...change color to blue
  }
  if(key=='4') {   //if the 4 key is pressed then...
  stroke(255,255,0);   //...change color to yellow
  }  
  if(key=='5') {   //if the 5 key is pressed then...
  stroke(0,0,0);   //...change color to black
  }  
  if(key=='0') {   //if the 0 key is pressed then...
  stroke(255,255,255);   //...change color to white (ERASER MODE)
  strokeWeight(30);
  }    
  if(key=='p') {   //if the p key is pressed then...
  ellipse(mouseX,mouseY,50,40);   //...draw ellipse
  }  

  if(key=='o') {   //if the o key is pressed then...
  
  stroke(255, 50);
  translate(mouseX, mouseY, 0);
  rotateX(mouseY * 0.05); //
  rotateY(mouseX * 0.05);
  fill(mouseX * 2, 0, 160); //variable red + static 160 blue = purple variations
  sphereDetail(mouseX / 50); //frequency of triangles
  sphere(50); //...draw tesselated triangles into "sphere"
  }  
  
  if(key=='k') { //if the k key is pressed, change background to gradient 
    noStroke();
colorMode(RGB, width);
for (int i = 0; i < width; i++) {
  for (int j = 0; j < width; j++) {
    stroke(i, j, 0);
    point(i, j);
  }
}
}
  
  if(key=='i') { //info text
    String s = "KEYS";
    fill(50);
    text(s, 10, 10, 70, 80);  // Text wraps within text box
    text("Colors: 1 = red / 2 = green / 3 = blue / 4 = yellow / 5 = black / 0 = white [eraser]", 20, 40);
    text("Stroke Weight: a = 1pt / s = 5pt / d = 10pt / f = 15 pt", 20, 60);
    text("Background: white = x [clear screen] / k = gradient", 20, 80);
    text("Shapes: 3D sphere = o / ellipse = p", 20, 100);
    text("Save: '=' = .gif / + = .jpg", 20, 120);
  }
  
  if(key=='x') {   //if the x key is pressed then...
  background(255,255,255);   //...clear screen
  }
  
  if(key=='=') { //if the = key is pressed then...
  save("snap.gif");  //...export .gif file 
}
  if(key=='+') { //if the + key is pressed then...
  save("snap_"+frameCount+".jpg"); //...export .jpg file
}
}