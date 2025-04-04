# PS2: Triangle Fractal

## Contact
Name: Ansh Patel
Section: 202

Partner Name: Mohammed Ayan
Partner Section: 201

Time to Complete: ~4 Hours


## Description
Explain what the project does.

The program takes triangle side and the recursion depth from the command line arguments, if they are not given its gives a default value of side=200 and depth(n)=3. It then uses these arguments to recursively draw child triangles on the corners of the main inverted triangle. The child triangles share a corner and also share a collinear side. The child triangles have half the side of the parent trianlge. This is done recursively to get a beautiful fractal. It is then displayed on a window that resizes based on the side and depth to fit the fractal in the center.

### Features
Describe what your major decisions were and why you did things that way.  How did you represent fractal elements and how did you compute their positions?

We took a very aggresive approach by starting to code directly which made things very confusing and hard. Later we decided to do things step by step, meaning we got the math right first which made the coding super simple. Computing the positions, required drawing the main triangle at the center and then drawing another triangle, half the size with the same center. After this it was all about moving the triangle on the x and y axis. We used the circumcircle math to find the correct positions. The radius of a circumcircle and the height of an equilateral triangle, were all provided in the assigment pdf, which made finding the right x and y positions simple. Once we got the left corner perfectly positioned, we repeated the process for right and bottom corner.

### Issues
What did you have trouble with?  What did you learn?  What doesn't work?  Be honest.  You might be penalized if you claim something works and it doesn't.

We faced troubles with resizing the window to fit the content perfectly. sqrt(3)*2*side does the job but if we increase the side length to 300 and give a depth > 3 then the fractal moves outside the screen, only half of it is visible. As long as the length is 200, the fractal is displayed perfectly but if the side length is increased to 300 then it doesnt fit as required. This might be due to the size large size of the fractal but when we give a side of 100 and 200, the window perfectly resizes according to the needs.

### Extra Credit
Anything special you did.  This is required to earn bonus points.

We added colors to each triangle that is being displayed on the window. Every triangle of the same depth share the same color. For example: all the child triangles of depth 2 will have the same color and the child triangles of depth 3 will have the same color, the two colors for depth 2 and 3 are different. There colors are computed by subtracting the depth * random number from 255, its basically done by playing around with color schemes.

## Pair Programming
How did working with a partner affect your work?

Working with a partner made this project simpler and time efficient. Putting 2 brains at work rather than 1 made it easier to figure out the math behind fractal, after which coding didn't take long. Also the coding work gets divided into half which meant we didnt have to tire ourselves out.

## Acknowledgements
List all sources of help including the instructor or TAs, classmates, and web pages.

Thinking about math of fractals: Snowflake by Dr.Daly(class)
Window Resize: https://en.sfml-dev.org/forums/index.php?topic=17747.0