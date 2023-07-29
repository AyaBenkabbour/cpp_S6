#include "Point.h"

class Cercle{
	
    float r;
    Point centre;
    
    public:
    	
    Cercle(Point p, float a);
    
    Cercle(Point c, Point a);
    
    void afficher();
    
    float getPerimetre();
    
    float getSurface();
    
    bool appartient(Point p);
};

