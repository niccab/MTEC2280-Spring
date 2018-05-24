/*
  -add a second ball
  -random background change every collision
  -random fill for ball every collision
  -random size for ball every collision
  -different shape(s)
  -make the ball bounce from its side
*/


//store pong ball coordinates as GLOBAL VARIABLES!

float x;
float y;
float xSpeed;
float ySpeed;
float r;
float g;
float b;
float q;
float w;
float e;

void setup() {
  size(500,500);
  //give global vars values now that window has been created
  x = width/2;
  y=height/2;
 
  xSpeed = random(2,5); //set initial speed to random value
  ySpeed = 4;
}

void draw() {
//background(r,g,b);
  x = x + xSpeed; //change x position
  y = y + ySpeed;
  
r = random(255);
g = random(255);
b = random(255);
q = r+10;
w = r-10;
e = r+5;
  
  if(x>=width){ //did we hit right side?
    xSpeed = xSpeed*-1;
    background(r,g,b);
    fill(q,w,e);
    ellipse(x,y,30,20);
  }
  if(x<=0){ //did we hit left side?
    xSpeed = xSpeed*-1;
    background(r,g,b);
    fill(q,w,e);
    rect(x,y,20,20);
  }
  
  if(y>=height){ //did we hit top side?
    ySpeed = ySpeed*-1;
    background(r,g,b);
    fill(q,w,e);
    ellipse(x,y,50,20);
  }
  if(y<=0){ //did we hit bottom side?
    ySpeed = ySpeed*-1;
    background(r,g,b);
    fill(q,w,e);
      rect(x,y,20,20);
  }

  ellipse(x,y,20,20);

}