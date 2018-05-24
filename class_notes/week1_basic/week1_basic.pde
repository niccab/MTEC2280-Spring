//0,0 is top left

//the size function creates a window
//that is width, height pixels big
size(500,500);
background(255,0,0);

// don't put an outline on the following shapes
noStroke();

//fill function applies color to "paint brush"
//parameters are r, g, b
fill(50,100,100);

//rect function creates a rectangle that is drawn from the upper left corner. 
//The parameters are x, y, width, height
rect(10,40,60,60);

fill(60,100,100);
rect(20,50,60,60);

fill(70,100,100);
rect(30,60,60,60);

stroke(255,255,255);
strokeWeight(5); //thickness in pixels your stroke is
fill(80,100,100);
rect(40,70,60,60);

// main category of circle. (x,y...) starts at center of circle.
//(...x,y) determines width, height
ellipse(300,300,100,100); 

//line beginning x, line beginning y, line end x, line end y
//x1,y1,x2,y2
//width is a system variable stored
line(300,300,width,0);
line(300,250,width,0);
line(300,200,width,0);
line(300,150,width,0);

//width returns the width of size
//height is height of size
//line from bottom left to top right
line(0,height,width,0); 

line(0,0,width,height);