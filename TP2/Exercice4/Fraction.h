class fraction {
	
	public:
	    int num;
	    int den;
	    fraction();
	    fraction(int a, int b = 1);
	    void afficher();
	    fraction inverse();
};

 fraction operator+(fraction const& f1, fraction const& f2);
 fraction operator-(fraction const& f1, fraction const& f2);
 fraction operator*(fraction const& f1, fraction const& f2);
 fraction operator/(fraction const& f1, fraction f2);
 bool operator==(fraction const& f1, fraction const& f2);
    

