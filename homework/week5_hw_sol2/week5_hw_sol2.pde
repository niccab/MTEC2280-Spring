/* Wall Drawing 289
A 6-inch (15 cm) grid covering each of the four black walls. 
White lines to points on the grids. Fourth wall: twenty-four 
lines from the center, twelve lines from the midpoint of each 
of the sides, twelve lines from each corner. 
(The length of the lines and their placement are determined 
by the drafter.) (Detail: 4th wall only)
*/

size(500,500);
background(0);
stroke(255);

//center
for(int i = 0; i < 24 ; i++) {
  line(width/2, height/2, random(375), random(375)); // width * .75 = 375
}

//top left
for(int i = 0; i < 12 ; i++) {
  line(0, 0, random(375), random(375)); 
}

//top
for(int i = 0; i < 12 ; i++) {
  line(width/2, 0, random(375), random(375));
}

//top right
for(int i = 0; i < 12 ; i++) {
  line(width, 0, random(375), random(375));
}

//right
for(int i = 0; i < 12 ; i++) {
  line(width, height/2, random(375), random(375));
}

//bottom right
for(int i = 0; i < 12 ; i++) {
  line(width, height, random(375), random(375));
}

//bottom
for(int i = 0; i < 12 ; i++) {
  line(width/2, height, random(375), random(375));
}

//bottom left
for(int i = 0; i < 12 ; i++) {
  line(0, height, random(375), random(375));
}

//left
for(int i = 0; i < 12 ; i++) {
  line(0, height/2, random(375), random(375));
}