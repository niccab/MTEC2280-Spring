/* Wall Drawing 1112 ATTEMPT
Square with broken bands of color.

Question #1: how do you set up global variable to store 
random coordinates of rectangle starting point?
i.e. laying bricks...

Question #2: how to store color information so 
that future random rect will never border same color

Question #3: alternative solution? 
how to create loop to draw rectangles with perforated stroke colors
There is 5 separate iterations, all adding/decreasing coordinates by 50.
Storing global values...
(This is messy and a WIP.)
*/

color[] c = { #FF0000, #00ff00, #0000ff, #ffff00, #7800B4, #FF6400 };
//float startw = startw+10;

// = startw + random(width);

size(500,500);
background(255);
noStroke();

//perimeter
for (int count = 0; count < 20; count++) {
         for (int i = 0; i < 6; i++) {

           float Color = map(i, 0, 6, 0,255);
           fill(c[i]);
           rect(random(width), 0,random(100,200), 50);
         }
}

for (int count = 0; count < 20; count++) {
         for (int i = 0; i < 6; i++) {
           float Color = map(i, 0, 6, 0,255);
           fill(c[i]);
           rect(width-50, random(height),50, random(100,200));
         }
}

for (int count = 0; count < 20; count++) {
         for (int i = 0; i < 6; i++) {
           float Color = map(i, 0, 6, 0,255);
           fill(c[i]);
           rect(0, random(height),50, random(100,200));
         }
}
for (int count = 0; count < 20; count++) {
         for (int i = 0; i < 6; i++) {
           float Color = map(i, 0, 6, 0,255);
           fill(c[i]);
           rect(random(width), height-50,random(100,200), 50);
         }
}

//perimeter - 50

//top
for (int count = 0; count < 20; count++) {
         for (int i = 0; i < 6; i++) {

           float Color = map(i, 0, 6, 0,255);
           fill(c[i]);
           rect(random(50,450), 50,random(100,200), 50);
         }
}

//right
for (int count = 0; count < 20; count++) {
         for (int i = 0; i < 6; i++) {
           float Color = map(i, 0, 6, 0,255);
           fill(c[i]);
           rect(width-100, random(50,450),50, random(100,200));
         }
}


//left
for (int count = 0; count < 20; count++) {
         for (int i = 0; i < 6; i++) {
           float Color = map(i, 0, 6, 0,255);
           fill(c[i]);
           rect(50, random(50,450),50, random(100,200));
         }
}

//bottom
for (int count = 0; count < 20; count++) {
         for (int i = 0; i < 6; i++) {
           float Color = map(i, 0, 6, 0,255);
           fill(c[i]);
           rect(random(50,450), height-100,random(100,200), 50);
         }
}

//perimeter - 100

//top
for (int count = 0; count < 20; count++) {
         for (int i = 0; i < 6; i++) {

           float Color = map(i, 0, 6, 0,255);
           fill(c[i]);
           rect(random(100,400), 100,random(100,200), 50);
         }
}

//right
for (int count = 0; count < 20; count++) {
         for (int i = 0; i < 6; i++) {
           float Color = map(i, 0, 6, 0,255);
           fill(c[i]);
           rect(width-150, random(100,400),50, random(100,200));
         }
}


//left
for (int count = 0; count < 20; count++) {
         for (int i = 0; i < 6; i++) {
           float Color = map(i, 0, 6, 0,255);
           fill(c[i]);
           rect(100, random(100,400),50, random(100,200));
         }
}

//bottom
for (int count = 0; count < 20; count++) {
         for (int i = 0; i < 6; i++) {
           float Color = map(i, 0, 6, 0,255);
           fill(c[i]);
           rect(random(100,400), height-150, random(100,200), 50);
         }
}


//perimeter - 150

//top
for (int count = 0; count < 20; count++) {
         for (int i = 0; i < 6; i++) {

           float Color = map(i, 0, 6, 0,255);
           fill(c[i]);
           rect(random(150,350), 150,random(100,200), 50);
         }
}

//right
for (int count = 0; count < 20; count++) {
         for (int i = 0; i < 6; i++) {
           float Color = map(i, 0, 6, 0,255);
           fill(c[i]);
           rect(width-200, random(150,350),50, random(100,200));
         }
}


//left
for (int count = 0; count < 20; count++) {
         for (int i = 0; i < 6; i++) {
           float Color = map(i, 0, 6, 0,255);
           fill(c[i]);
           rect(150, random(150,350),50, random(100,200));
         }
}

//bottom
for (int count = 0; count < 20; count++) {
         for (int i = 0; i < 6; i++) {
           float Color = map(i, 0, 6, 0,255);
           fill(c[i]);
           rect(random(150,350), height-200, random(100,200), 50);
         }
}

//cream filling

//top
for (int count = 0; count < 20; count++) {
         for (int i = 0; i < 6; i++) {

           float Color = map(i, 0, 6, 0,255);
           fill(c[i]);
           rect(random(200,300), 200,random(100,200), 50);
         }
}

//right
for (int count = 0; count < 20; count++) {
         for (int i = 0; i < 6; i++) {
           float Color = map(i, 0, 6, 0,255);
           fill(c[i]);
           rect(width-250, random(200,300),50, random(100,200));
         }
}


//left
for (int count = 0; count < 20; count++) {
         for (int i = 0; i < 6; i++) {
           float Color = map(i, 0, 6, 0,255);
           fill(c[i]);
           rect(200, random(200,300),50, random(100,200));
         }
}

//bottom
for (int count = 0; count < 20; count++) {
         for (int i = 0; i < 6; i++) {
           float Color = map(i, 0, 6, 0,255);
           fill(c[i]);
           rect(random(200,300), height-250, random(100,200), 50);
         }
}