#ifndef komorka_h
#define komorka_h

class Komorka
{
friend class Gra;
friend class GraKonsola;

private:
	bool isWhite;
	
	Komorka(const Komorka& k);
	Komorka& operator=(const Komorka& k1);

	Komorka();
	~Komorka();

	bool IsWhite() const;
	void setIsWhite(bool isWhite_p);
	void change();


};

#endif
