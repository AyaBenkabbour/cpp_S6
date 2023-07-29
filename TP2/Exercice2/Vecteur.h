
class Vecteur {
	
private:
	float abscisse;
	float ordonnee;
	float hauteur;
public:
	Vecteur();
	Vecteur(float, float, float = 0);
	~Vecteur();
	void affiche(char);
	
	//Passage par valeur
	float prod_scal_valeur(const Vecteur);
	Vecteur somme_valeur(Vecteur);
	
	//Passage par référence
	float prod_scal_ref(const Vecteur&);
	Vecteur somme_ref(Vecteur&);
	
	//Passage par adresse
	float prod_scal_adr(const Vecteur*);
	Vecteur somme_adr(Vecteur*);
};

