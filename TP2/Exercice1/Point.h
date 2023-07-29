class Point
{
private:
	int x;
	int y;
public:
	Point();
	Point(int x_p, int y_p);
	void Affiche();
	void Deplace(int dx, int dy);
	float distance(Point p);
};
