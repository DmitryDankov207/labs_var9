class Rectangle {
private:
    double _width;
    double _heigth;

    void setWidth(double);
        
    void setHeigth(double);
 
public:
    Rectangle(double, double);

    double square(double width=1, double heigth=1);

    double perimeter();

    double getWidth();
        
    double getHeigth();
};

