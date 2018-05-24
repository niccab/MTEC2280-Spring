/* Wall Drawing 56
A square is divided horizontally and vertically 
into four equal parts, each with lines in four directions 
superimposed progressively. 
*/

size(500,500);
noFill();

//quad1
for(int i = 0; i < width ; i+=10) {
 line(i, 0, i, height);
}

//quad2

for(int i = 0; i < height ; i+=10) {
  line(width/2,i,height,i);
}

//quad3

for(int i = 0; i < height ; i+=10) {
  line(0,height,i,height/2);
}

//quad4

for(int i = 0; i < height ; i+=10) {
  line(width,height/2,i,height);
}