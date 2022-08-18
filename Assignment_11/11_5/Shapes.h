/*
CH-230-A
a11 p5.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

// base class
class Shape {
	private:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  		// builds a shape with a name
		Shape();							// empty shape
		Shape(const Shape&);				// copy constructor
		void printName() const ;  			// prints the name  
		void setName(const std::string n); 	//sets the name variable
		std::string getName() const;		//returns the name property
};

// inherits from Shape
class CenteredShape : public Shape {
	private: 
		double x,y;  // the center of the shape
	public:
        // usual three constructors
		CenteredShape(const std::string&, double, double);  
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);	// moves the shape, i.e. it modifies it center
		void setX(const double nx);	//sets the x property
		void setY(const double ny);	//sets the y property
		double getX() const;			//returns the X property
		double getY() const;			//returns the Y property
};

// a regular polygon is a centered_shape with a number of edges
class RegularPolygon : public CenteredShape {
	private: 
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
		void setEdges(const int en);			//sets the EdgesNumber property
		int getEdges() const;					//returns the EdgesNumber propert
};	

// a Circle is a shape with a center and a radius
class Circle : public CenteredShape {
	private:
		double Radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);
		void setRadius(const double nr);	//sets the Radius property
		double getRadius() const;		//returns the Radius property
		double perimeter();				//return the perimeter of the circle
		double area();					//return the area of tyhe circle
};

//a Rectangle is a Regular Polygon with 4 edges, equal in opposite pairs
class Rectangle : public RegularPolygon {
    private:
        double width, height;
    public:
        // usual three constructors
        Rectangle(const std::string& n, double nx, double ny, 
                  double nwidth, double nheight);	//values constructor
        Rectangle();
        Rectangle(const Rectangle&);
		void setWidth(const double w);	//sets the Width property
		void setHeight(const double h);	//sets the Height property
		double getWidth() const;		//returns the Width propoerty
		double getHeight() const;		//returns the Height propoerty
		double perimeter();				//return the perimeter of the rectangle
		double area();					//return the area of tyhe rectangle
};

//a Square is a Rectangle where all edges are the equal
class Square : public Rectangle {
    private:
        double side;
    public:
        // usual three constructors
        Square(const std::string& n, double nx, double ny, double nside);
        Square();
        Square(const Square&);
		void setSide(const double s);	//sets the Side property
		double getSide() const;			//returns the Side property
};  
    
#endif