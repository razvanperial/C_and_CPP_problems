/*
CH-230-A
a11 p3.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

//base class
class Creature {
	public:
		Creature();  
		void run() const;
        ~Creature();

	protected:
		int distance;
};

//wizard - first derived class
class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;
        ~Wizard();

	private:
		int distFactor;
};

//bigfoot - second derived class
class Bigfoot : public Creature {
    public:
        Bigfoot();
        void size () const;
        ~Bigfoot();
    
    private:
        float footsize;
};

//hydra - third derived class
class Hydra : public Creature {
    public:
        Hydra();
        void headcount() const;
        ~Hydra();
    
    private:
        int heads;
};