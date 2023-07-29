class Point
{
protected:
    int x, y;

public:
    void afficher();
    Point(int a, int b);
    // void initialiser(int a,int b);
    void deplacer(int dx, int dy);
    float distance(Point p1, Point p2);
};

class Cercle
{
public:
    int rayon;

public:
    Point *point, *centre;

public:
    Cercle();
    float getperimetre();
    float getsurface();
    bool appartient(Point p);
    void afficher();
};
/*public:
int getRayon(){
    return this-> rayon ;
}*/