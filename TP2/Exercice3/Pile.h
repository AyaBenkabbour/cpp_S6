#include <vector>


class pile_entier{
    public:
       vector <int> pile;
       int top;
       
    public:
       pile_entier(int);
       pile_entier( );
       ~pile_entier( );
	   void empile(int p); 
       int depile(); 
       bool vide(); 
       bool pleine();
       pile_entier(const pile_entier &p);
};
