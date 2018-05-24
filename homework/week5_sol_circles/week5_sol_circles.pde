size(500,500);
noFill();

for(int i = 0; i < width *3 ; i += 20) {
  
  ellipse(width/2, 0, i, i); //top
  ellipse(width, height/2, i, i); //right
  ellipse(width/2, height, i, i); //bottom
  ellipse(0, height/2, i, i); //left

}