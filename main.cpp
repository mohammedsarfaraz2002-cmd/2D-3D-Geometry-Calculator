#include <iostream>
#include <cmath> 
using namespace std;

void introduction(); //this is a function declaration where i will ask the user to choose 2D or 3D shapes.
void firstchoice(); //this is a function declaration where the user chose 2D shapes
void secondchoice(); //this is a function declaration where the user chose 3D shapes
void decision(); //this is a function declaration where the user decides to calculate 2D shapes or 3D shapes or end program  

void square(); //this is a function declaration to calculate a square
void rectangle(); //this is a function declaration to calculate a rectangle
void circle(); //this is a function declaration to calculate a circle
void triangle(); //this is a function declaration to calculate a triangle
void ellipse(); //this is a function declaration to calculate an ellipse

void cube(); //this is a function declaration to calculate a cube
void cuboid(); //this is a function declaration to calculate a cuboid
void sphere(); //this is a function declaration to calculate a sphere
void cylinder(); //this is a function declaration to calculate a cylinder
void cone(); //this is a function declaration to calculate a cone


int main()
{
    cout << "Hello User. I am a unique calculator.\n"; //telling the user what this program is.
    cout << "I calculate the perimeter, area, surface area, and volume of specific 2D/3D shapes.\n\n";
    cout << "Would you like to calculate 2D shapes or 3D shapes?\n";

    introduction(); //function call where the user will decide whether 2D or 3D shapes.

    return 0;
}

void introduction()
{
    int dimension; //declaring variables
    cout << "Please type 1 for 2D shapes or 2 for 3D shapes or 3 to end program:  "; //asking the user to choose either 2D or 3D shapes, or end program
    cin >> dimension;
    cout << endl;

    if (dimension == 1)
    { //if the user typed 1, the function call (firstchoice()) will take place
        firstchoice();
    }
    else if (dimension == 2)
    {//if the user typed 2, the function call (secondchoice()) will take place
        secondchoice();
    }
    else if (dimension == 3)
    {   //end program
        return;
    }
    else
    { //if the user typed something else, the program will inform the user and give another chance.
        cout << "You have not typed 1 or 2 or 3.\n";
        cout << "Please type 1 for 2D shapes or 2 for 3D shapes or 3 to end program:  ";
        cin >> dimension;
        cout << endl;

        if (dimension == 1)
        {
            firstchoice();
        }
        else if (dimension == 2)
        {
            secondchoice();
        }
        else if (dimension == 3)
        {
            return;
        }
    }
}
void firstchoice()
{  //giving an introduction on what 2D shapes are
    int shape;
    cout << "You chose 2D shapes!!!\n"; //definition of what 2D shapes are.
    cout << "A two-dimensional (2D) shape is a shape that has length and width but no depth.\n\n";

    cout << "This calculator can calculate the following 2D shapes:\n";
    cout << "1. Square\n";
    cout << "2. Rectangle\n";  
    cout << "3. Circle\n";     //listing all the shapes this program can calculate
    cout << "4. Triangle\n";
    cout << "5. Ellipse\n\n";

    cout << "Which shape would you like to calculate?\n";
    cout << "Please enter the number of the desired shape: ";
    cin >> shape;

    if (shape == 1)
    {
        square();
    }
    else if (shape == 2)
    {
        rectangle();
    }
    else if (shape == 3)
    {
        circle();
    }
    else if (shape == 4)
    {
        triangle();
    }
    else if (shape == 5)
    {
        ellipse();
    }
    else
    {
        cout << "You have not typed a number that is shown above.\n"; //telling the user that there is a problem
        cout << "1=Square, 2=Rectangle, 3=Circle, 4=Triangle, 5=Ellipse\n"; //solution for the problem
        cout << "Please enter the number of the desired shape: ";
        cin >> shape;

        if (shape == 1)
        {
            square();
        }
        else if (shape == 2)
        {
            rectangle();
        }
        else if (shape == 3)
        {
            circle();
        }
        else if (shape == 4)
        {
            triangle();
        }
        else if (shape == 5)
        {
            ellipse();
        }
    }
}
void secondchoice()
{  //giving an introduction on what 3D shapes are
    int shape;
    cout << "You chose 3D shapes!!!\n";
    cout << "A three-dimensional shape can be defined as a solid figure or an object or shape\n";
    cout << "that has three dimensions, which is length, width and height.\n";
    cout << "This calculator can calculate the surface area and volume of 3D shapes.\n\n";

    cout << "This calculator can calculate the following 3D shapes:\n";
    cout << "1. Cube\n";
    cout << "2. Cuboid\n";
    cout << "3. Sphere\n";   //listing all the 3D shapes this calculator can calculate
    cout << "4. Cylinder\n";
    cout << "5. Cone\n\n";

    cout << "Which shape would you like to calculate?\n";
    cout << "Please enter the number of the desired shape: ";
    cin >> shape;

    if (shape == 1)
    {
        cube();
    }
    else if (shape == 2)
    {
        cuboid();
    }
    else if (shape == 3)
    {
        sphere();
    }
    else if (shape == 4)
    {
        cylinder();
    }
    else if (shape == 5)
    {
        cone();
    }
}
void decision()
{ //in this function, user will decide whether to calculate 2D or 3D or end program.
    int choice; //declaring variable
    cout << "Would you like to calculate: 1. 2D shape, or 2. 3D shape, or 3. end program\n";
    cout << "Please type 1 for 2D shapes or 2 for 3D shapes or 3 to end program:  "; //giving the user a choice
    cin >> choice;

    if (choice == 1)
    { 
        firstchoice();
    }
    else if (choice == 2)
    { 
        secondchoice();
    }
    else if (choice == 3)
    {
        return;
    }
    else
    {
        cout << "You have not typed 1 or 2 or 3.\n"; //telling the user that there is a problem.
        cout << "Please type 1 for 2D shapes or 2 for 3D shapes or 3 to end program:  "; //giving a solution to the problem.
        cin >> choice;
        cout << endl;

        if (choice == 1)
        {
            firstchoice();
        }
        else if (choice == 2)
        {
            secondchoice();
        }
        else if (choice == 3)
        {
            return;
        }
    }

}

void square()
{
    int l, w, perimeter, area, choice; //declaring variables
    cout << endl; //telling the user how to calculate the area and perimeter
    cout << "To calculate the perimeter of a square, add all the sides together.\n";
    cout << "To calculate the area of a square, you multiply the length with the width. L X W.\n";
    cout << "FYI, the length and width of a square is the same.\n\n"; //giving the user basic info.

    cout << "Please enter the Length of the square: " << endl;
    cin >> l; // user will enter length of the square
    cout << "Please enter the width of the square: " << endl;
    cin >> w; // user will enter the width of the square

    perimeter = (l + w) + (l + w); //equation for perimeter
    cout << "The Perimeter of the square is: " << perimeter << endl;

    area = l * w; //equation for area
    cout << "The Area of the square is: " << area << endl;
    cout << endl;

    decision(); //function call
}
void rectangle()
{
    int l, w, perimeter, area, choice; //declaring variables
    cout << endl; //telling the user how to calculate the area and perimeter
    cout << "To calculate the perimeter of a rectangle, add all the sides together.\n";
    cout << "To calculate the area of a rectangle, you multiply the length with the width. L X W.\n";
    cout << "FYI, the length is longer than the width in a rectangle.\n\n"; //general info about rectangles

    cout << "Please enter the Length of the rectangle: " << endl;
    cin >> l; // user will enter length of the rectangle
    cout << "Please enter the width of the rectangle: " << endl;
    cin >> w; // user will enter the width of the rectangle

    perimeter = (l + w) + (l + w); //equation for perimeter
    cout << "The Perimeter of the rectangle is: " << perimeter << endl;

    area = l * w; //equation for area
    cout << "The Area of the rectangle is: " << area << endl;
    cout << endl;

    decision(); //function call
}
void circle()
{
    double perimeter, area, d, r, pi, choice; //declaring variables 
    cout << "The perimeter of a circle has its own special name, called the circumference. The symbol is a capital C.\n";
    cout << "To calculate the perimeter of a circle, you either use the equation, pi * D (D is diameter)\n ";
    cout << "or you use the equation, 2 * pi * r, (r is radius)\n"; //explaining how to calculate area and perimeter
    cout << "FYI, the diameter = r*2 and radius = D/2\n"; //very useful tip to remember when dealing with circles.
    cout << "To calculate the area of a circle, use the equation: pi * (r*r)\n\n";

    cout << "Please enter the radius of the circle: ";
    cin >> r; //user inputting radius
    cout << "Please enter the diameter of the circle: ";
    cin >> d; // user inputting diameter
    pi = 3.14; // declaring that pi is 3.14

    perimeter = pi * d; //equation for perimeter
    cout << "The perimeter of the circle is = " << perimeter << endl;

    area = pi * (r * r); //equation for area
    cout << "The area of the circle is = " << area << endl;

    decision(); //function call

}
void triangle()
{
    double a, b, c, h, area, perimeter; //declaring variables.   //telling the user how to calculate area and perimeter
    cout << "To calculate the perimeter of a triangle, you add all two sides with the base.\n ";
    cout << "Perimeter = a + b + c. a and b are the sides of the triangle. c is the base of the triangle.\n";
    cout << "To calculate the area of a triangle, you multiply base and height. Then you divide by 2. \n";
    cout << "Area = (b*h) / 2. b is base. h is height.\n\n";

    cout << "Please enter 1 side of the triangle: ";
    cin >> a;
    cout << "Please enter the other side of the triangle: "; //user inputting values to calculate the triangle
    cin >> c;
    cout << "Please enter the base of the triangle: ";
    cin >> b;
    cout << "Please enter the height of the triangle: ";
    cin >> h;

    perimeter = a + b + c; //equation to calculate the perimeter
    cout << "The Perimeter of the triangle is = " << perimeter << endl;

    area = (b * h) / 2; // equation to calculate the area
    cout << "The Area of the triangle is = " << area << endl;

    decision(); // function call.

}
void ellipse()
{
    double pi, a, b, c, perimeter, area; //declaring variables
    cout << "To calculate the perimeter of an ellipse = 2pi * square root of (a^2 + b^2)/2.\n";
    cout << "a is the major axis length. b is the minor axis length.\n"; //telling the user the equations needed
    cout << "To calculate the area of an ellipse = pi * a * b.\n\n";

    cout << "Please enter the minor axis length:\n ";
    cin >> a; //user inputting data for calculation
    cout << "Please enter the major axis length:\n ";
    cin >> b;

    pi = 3.14; //declaring that pi is 3.14
    c = ((a * a) + (b * b)) / 2; //the equation for perimeter was too complicated, so I broke it down.
    perimeter = 2 * pi * sqrt((a * a + b * b) / (2 * 1.0)); // equation for perimeter
    cout << "The Perimeter of the ellipse is = " << perimeter << endl;

    area = pi * a * b; //equation for area
    cout << "The Area of the ellipse is = " << area << endl;

    decision(); // function call.

} 

void cube()
{
    double a, surfacearea, volume; //declaring variables
    cout << "To calculate the surface area of a cube = 6 *(a*a). a is the edge of a cube.\n";
    cout << "To calculate the volume of a cube = a*a*a.\n\n"; //informing the user the equations we will use.

    cout << "Please enter the edge of the cube: \n";
    cin >> a; //asking user to input data

    surfacearea = 6 * (a * a); //equation for surface area
    cout << "The surface area of the cube is = " << surfacearea << endl;

    volume = a * a * a; //equation for volume
    cout << "The Volume of the cube is = " << volume << endl;

    decision(); //function call.

}
void cuboid()
{
    double l, w, h, surfacearea, volume;
    cout << "To calculate the surface area of a cuboid = 2(lw + wh + hl)\n";
    cout << "l is length. w is width. h is height.\n"; //informing the user the equations we will use.
    cout << "To calculate the volume of a cuboid = l * w * h.\n\n";

    cout << "Please enter the length of the cuboid.\n";
    cin >> l;
    cout << "Please enter the width of the cuboid.\n"; //user inputting data
    cin >> w;
    cout << "Please enter the height of the cuboid.\n";
    cin >> h;

    surfacearea = 2 * ((l * w) + (w * h) + (h * l)); //equation for surface area
    cout << "The surface area of the cuboid is = " << surfacearea << endl;

    volume = l * w * h; //equation for volume
    cout << "The Volume of the cuboid is = " << volume << endl;

    decision(); //function call


}
void sphere()
{
    double r, pi, surfacearea, volume; //declaring variables
    cout << "To calculate the surface area of a sphere = 4*pi*(r*r). r is radius.\n";
    cout << "To calculate the volume of a sphere = (4/3) * pi * (r*r*r).\n\n"; //informing the user the equations we will use.

    cout << "Please enter the radius of the sphere: \n";
    cin >> r; //user inputting data

    pi = 3.14; //declaring that pi is 3.14
    surfacearea = 4 * pi * (r * r); //equation for surface area
    cout << "The surface area of the Sphere is = " << surfacearea << endl;

    volume = (r * r * r) * pi * (4.0 / 3.0); //equation for volume
    cout << "The Volume of the Sphere is = " << volume << endl;

    decision(); //function call

}
void cylinder()
{
    double r, h, pi, surfacearea, volume; //declaring variables
    cout << "To calculate the surface area of a cylinder = 2*pi*r*h + 2*pi*(r*r)\n";
    cout << "r is the radius. h is the height of the cylinder.\n"; //informing the user the equations we will use. 
    cout << "To calculate the volume of a cylinder = pi * (r*r) * h\n\n";

    cout << "Please enter the radius of the cylinder: \n";
    cin >> r; 
    cout << "Please enter the height of the cylinder: \n"; //user inputting data
    cin >> h; 

    pi = 3.14; //declaring that pi is 3.14
    surfacearea = (2 * pi * r * h) + (2 * pi * (r * r)); //equation for surface area
    cout << "The surface area of the Cylinder is = " << surfacearea << endl;

    volume = pi * (r * r) * h; //equation for volume
    cout << "The Volume of the Cylinder is = " << volume << endl;

    decision(); //function call

}
void cone()
{
    double r, h, pi, a, surfacearea, volume; //declaring variables
    cout << "To calculate the surface area of a cone = pi*r * (r + square root of (h*h + r*r)).\n";
    cout << "r is radius. h is height.\n"; //giving user basic info about cones.
    cout << "To calculate the volume of a cone = pi * (r*r) * h/3\n\n";

    cout << "Please enter the radius of the cone: \n";
    cin >> r;
    cout << "Please enter the height of the cone: \n"; //user inputting data
    cin >> h;

    pi = 3.14; //declaring that pi is 3.14

    a = sqrt((h * h) + (r * r)); //this is a part of the equation. I broke it to make it easier to understand.
    surfacearea = (pi) * (r) * (r + a); //equation to calculate surface area.

    cout << "Surface area of the cone is = " << surfacearea << endl;

    volume = (pi) * (r * r) * (h / 3); //equation to calculate volume

    cout << "Volume of the cone is = " << volume << endl;

    decision(); //function call

}