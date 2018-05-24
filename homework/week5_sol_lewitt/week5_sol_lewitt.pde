size(500,500);
colorMode(RGB, 500); //make color run from 0 -> 500 instead
strokeWeight(11);

//loop to the edge
for(int i = 0; i < width; i+=10) {
  stroke(i,0,0); // change color
  line(i,0,i, height); //draw line
  println(i); //print coordinates
}