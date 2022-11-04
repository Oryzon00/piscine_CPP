- Les namespace
a == ::a

namepace foo{
	int a = 1;
	int b = 2;
	int c = 3;
}
foo::a

--------------------------------------------------------------------------------

- stdio stream

#include <iostream>
cout -> STDOUT
cin -> STDIN

std::cout << "Hello world!" << std::endl;

char buff[256];
std::cout << "input a word: ";
std::cin >> buff;
std::cout << "You entered " << buff << std::endl

--------------------------------------------------------------------------------

- Classes

//declaration 
class Myclass{

public:
	Myclass(void); //--> constructeur
	~Myclass(void);	//--> destructeur
};

//instanciation
Myclass::Myclass(void){
	std::cout << "Constructor called" << std::endl;
}

Myclass::~Myclass(void){
	std::cout << "Destructor called" << std::endl;
}

int main()
{
	MyClass instance;//constrcteur est appele automatiquement quand la var est declare

	return (0);//destructeur est appele automatiquement a la fin de la fonction (scope) ou la var est declare

}
--------------------------------------------------------------------------------

- Attribut et fonctions membres

//declaration de classe et des attributs et fonctions membres
class Myclass{

public:
	Myclass(void); //--> constructeur
	~Myclass(void);	//--> destructeur

	int		foo; //--> attribut membre
	void	bar(void); //--> fonction membre
};

//instanciation de la fonction membre
void	Myclass::bar(void) //prends toujours un param cache --> pointeur sur instance courante
{
	std::cout << "fonction member bar called" << std::endl;
}

--------------------------------------------------------------------------------

- this

Myclass::Myclass(void){
	std::cout << "Constructor called" << std::endl;

	//this pointe sur l'instance courante, 
	//ici c'est un pointeur sur la classe MyClass
	this->foo = 42;
	std::cout << "foo = " << this->foo << std::endl;

	//On appelle la fonction bar de MyClass
	this->bar();

}


--------------------------------------------------------------------------------

- initialization list 

class Myclass{

public:
	Myclass(int param1, int param2);
	~Myclass(void);

	int		attribute1;
	int		attribute2;
};

Myclass::Myclass(int param1, int param2) : attribute1(param1), attribute2(param2)
{

}
int main(void)
{
	Myclass instance(42, -42)
}

--------------------------------------------------------------------------------

- const

int const a; //var est constante: peut pas changer de valeur apres initialization

void bar(void) const //fonction const --> read only pour les var | NO assignation
{

}

--------------------------------------------------------------------------------

- Visibility

public // accessible a interieur et exterieur de la classe

private //accessible seulement depuis l'interieur de la classe
--> attribut commence par '_' par convention


--------------------------------------------------------------------------------

- Class vs struct 

Tout est pareil SAUF
--> struct: scope par defaut public
--> class: scope par defaut private 

--------------------------------------------------------------------------------

- Accessors

fonction qui fait lien entre attribut et le programme
get_var(); //fonction pour lire valeur
set_var(); //fonction pour assigner nouvelle valeur

--------------------------------------------------------------------------------

- Comparaison

On peut comparer 2 nstances de la meme class en creant une fonction membre.

--------------------------------------------------------------------------------

- Non member attributes and non member functions

-attribut et fonction d'instance (= membre)

				VS 
-attribut et fonction de classe (= non membre)

classe-->static 
Ex: static int _nb_instance 
--> donne nombre de fois que instance de cette classe a ete cree
--> PAS POSSIBLE DE FIRE APPEL au pointeur THIS
--> Pour l'appeler: Myclass::_nb_instance
--> init dans le .CPP de la classe en dehors de toute fonction: int Myclass::_nb_instance = 0;
--> STATIC seulement dans le HPP pas le CPP
--------------------------------------------------------------------------------

Pointeur
Pointeur sur fonction

- NEW Pointeur sur membre


Myclass	instance1;
int Myclass::*p = NULL; --> pointur sur entier membre de Myclass
p = &Myclass::foo; --> Je ne sais pas de quel instance je parle -> on utilise .* ou ->* pour preciser l'instance
instance1.*p = 21; --> assigne 21 a foo de instance1

Myclass	*instance_pointeur = &instance1;
instance_pointeur->*p = 21; --> assigne 21 a foo de instance1 nen passant par le pointeur instance_pointeur


- NEW Pointeur sur fonction membre

void		Myclass::bar(void) const; --> fonction membre bar de Myclass
void		(Myclass::*f)(void) cost; --> pointeur f sur fonction membre de My class

f  = &Myclass::bar; --> on assigne f a la fonction bar
--> on ne sait toujours pas a quelle instance de Myclass on fait reference

(instance1.*f)(); --> on utilise le pointeur sur foncion membre de Myclass sur l'instance instance1

fonction de classe peut etre apele sans abvoir besoin d'instance

--------------------------------------------------------------------------------

- New and delete:

Ex: 
Student	*jim = new Student(param) 
delete jim

Student		*tab_student = new Student[42]; //--> attention ne prends pas de params
delete [] tab_student;

--------------------------------------------------------------------------------

- References

--> ref = pointeur CONSTANT toujours DEREFERENCE et JAMAIS NULL

int myVar = 42;
int&	REF = my var; --> reference pointe sur cette var --> ne peut plus changer sur quoi cette ref pointe
int& REF2; --> IMPOSSIBLE --> ne peut pas creer de ref non initialise --> ne peut pas pointer sur NULL

--> pas besoin de dereferencer la referennce
REF = 84 --> affecte 84 a myVar

void ft_ft(std::string &str) --> on peut passer une reference en param de fonction
{
	str += " et au revoir"; 
}
ft_ft(str) --> pas besoin d'envoyer l'adresse comme avec un pointeur

std::string&	getvar(void)--> on peut avoir une valeur de retour qui est une reference
{
	return (this->_str); --> encore une fois pas de syntax partiuliere
}

instance.getvar = "nouveau nom" --> on peut changer une var en assignant a une reference

Si ca n'exite pas ou changer a un moment --> POINTEUR
Si ca existe toujours et ne change jamais --> REFERENCE

--------------------------------------------------------------------------------

- Filesream 
#include <fstream>

iostream --> Input - Output stream
ifstream --> Input - File stream 
ofstream --> Output - File stream
--> remplace les open et close

std::ifstream	ifs("numbers"); -->ouverture d'un ifstream qui va lire le fichier numbers
ifs.close(); --> fermeture du ifstream

std::ofstream ofs("test.out"); --> ouverture ofstream qui va ecriire dans test.out
ofs.close() --> fermeture

--------------------------------------------------------------------------------

- Ad-hoc Polymorphisme

surchage de fonction --> meme nom, param different
--> n'importe quel fonction

void	bar(char c);
void	bar(int i);
void	bar(float z);

--> a declarer dans .hpp
--> a implementer dans .c

--------------------------------------------------------------------------------

- Operator Overload

1 + 1
+ 1 1 
+(1, 1) --> notation foncionnelle (ca ressemble a une fonction)
1.+(1) --> fonction membre

operator binaire et operator unaire

class Integer

Integer &	operator=(integer const & rhs);
Integer		operator+(Integer const & const rhs) const;

rhs --> right hand side
lhs --> left hand side

pour operator= --> on renvoie reference sur l'instance courante

Integer & Integer::operator=(Integer const & rhs)
{
	this->_n = rhs.getValue();
	return (*this); --> this est un pointeur sur instance courante, on 
						le dereferenc pour ne pas avoir un pointeur
}

Integer	Integer::operator+(Integer const & rhs) const 
{
	return (Integer(this->_n + rhs.geValue());)
} --> on appelle constructor pour creeer une nouvelle instance avec nouvelle
	valeur additionné



std::ostream &	operator<<(std::ostream & o, Integer const & rhs);
--> operateur redirection vers la gauche
--> Surcharge de fonction classique (en dehors de la classe)

std::ostream & o --> une instance de ostream
Integer const & rhs --> instance de classe

std::ostream &	operator<<(std::ostream & o, Integer const & rhs)
{
	o << rhs.getValue();
	return (o);
}

- surcharge doit etre naturelle --> si comportement est bizarre --> pas bon

-  surcharge doit avoir un rapport avec le comportement naturelle

- la plupart du temps, ne PAS faire de surcharge d'operateur
--> cas ou c'est justifié de le faire existe, mais sont rares

--------------------------------------------------------------------------------

- forme canonique

class Sample
{
	public:
		Sample(void) 				--> un constructeur par defaut
		Sample(Sample const & src)	--> constructeur par copie
		~Sample(void)				--> destructor

	Sample & operator=(Sample const & rhs); --> surcharge operator = (assignation)

	private:
		Sample(void) 				--> constructeur par default peut etre en private
}

--------------------------------------------------------------------------------

- Heritage

Class Animal
{
	blabla
}

Class Cat: public Animal
{

}

Cat HERITE de toute les attributs private et public de Animal
--> on doit refaire les constructeurs, destructeur, operator
--> on peut redefinir les attributs de Animal dans Cat
--> Cat peut voir des attributs en plus

Niveau d'encapsulation:

public: --> accessible n'importe ou
private: --> accessible seulement depuis la classe MERE et PAS dans une classe derivee
protected: --> accessible  depuis la classe MERE ou classe derivee d'un heritage

Heritage multiple? Heritage de plusieurs classes? --> Conflit? Heritage en diamant?

une classe fille peut override une fonction d'une classe mere en la redeclarant

--------------------------------------------------------------------------------

- SUB TYPING POLYMORPHISME

Class Character
{
	void	sayHello(void);
}
Class Warrior : public Character
{
	void	sayHello(void);
}

-Warrior* a = new Warrior(); --> Normal
-Character* b = new Warrior(); --> c'est OK: Warrior est un Character
-Warrior* c = new Character(); --> PAS OK: Charactere n'est pas forcement un Warrior

-a.sayHello() --> sayHello du Warrior
-b.sayHello() --> sayHello du Character --> c'est un warrior mais il a été declaré en Character

Class Character
{
	virtual void	sayHello(void);
}
Class Warrior : public Character
{
	virtual void	sayHello(void);
}

virtual --> linkage sera dynamique et non plus statique
statique --> determiner statiquement par le type de la var
dynamique --> regarde a l'execution quel est le type reel de l'objet

-a.sayHello() --> sayHello du Warrior
-b.sayHello() --> sayHello du Warrior

fonction membre virtuel = METHODE

--------------------------------------------------------------------------------

- Abstract classes and interfaces

fonction membre virtuel = METHODE

Class character{
	virtual void	attack(void) = 0; --> methode pure
}


- Methode pure
--> ne peut pas etre implementer --> = 0
	--> classe ne peut pas etre instancier
		--> classe est ABSTRAITE si elle contient une methode pure
Class Acharacter{ --> A pour ABSTRAITE
	virtual void	attack(void) = 0; --> methode pure
}

--> classe fille de ACharacter vont devoir implementer attack
	--> sinon classe fille sera elle aussi abstraite

Class Warrior: public ACharacter
{
	virtual void	attack(void);
}

ACharacter*	a = new Warrior(); --> C'est ok car warrior est un character
ACharacter*	b = new Character(); --> Pas ok car character est abstrait

- Interface
Class qui ne contient que  des comportement abstrait/methode pure

class ICoffeeMaker --> I pour interface
{
	public:
		virtual void		fillWaterTank(void) = 0;
		virtual ICoffee*	makeCoffee(void) = 0;
}

Pas d'attribut dans un contrat


--------------------------------------------------------------------------------

- Classe nested

On peut implementer classe dans une classe
Cette sous classe est liée a sa classe

Ex:
Cat::Leg != Dog::Leg

--------------------------------------------------------------------------------

- exceptions try catch

try
{
	//Do stuff
	If (error)
	{
		throw std::exception();
	}
	else
	{
		//do more stuff
	}
}
catch (std::exception e)
{
	//handle error
}
ex: e.what();


class myException : public std::exception
{
	public:
		virtual const char* what() const throw() --> on peut mettre une value dans throw pour la catch plus tard
		{
			return ("message d'erreur");
		}
}

try
{
	blabla
}

catch (myException& e) --> specifique
{
	//handle precise error
}
catch (std::exception& e) --> catch generique
{
	//handle other error
}


--------------------------------------------------------------------------------

- Cast en C

type précis --> plus petit
type general --> plus large

- type conversion
On change les bytes car conversion d'un type a l'autre taille différente
int (4) into double (8)
Implicit promotion --> OK
Explicit promotion --> OK

double (8) into int (4)
Implicit demotion --> Danger
Explicit demotion --> C'est moi qui gere


- type reinterpretation
void* --> general --> contient adresse sur n'importe quel type
on reinterprete les bits sans les changer de taille a une certaine adresse
Ex: float (4) to int (4)

- type qualifier 
Ex: const, volatil, etc...

--------------------------------------------------------------------------------

- Cast en C++

- upcast, downcast

class parent --> plus generique que classe enfant

Parent	*a = Child(); --> ok --> Promotion

Upcast (promotion) --> OK 
Downcast implicit --> NO impossible
Downcast explicit --> OK mais pourquoi?

C:
-conversion type
-reinterpretation type
-type qualifier

C++:
-upcast, downcast (reinterpretation dans arbre heritage class)

--------------------------------------------------------------------------------

NE PLUS UTILISER LE C CAST

- static cast

int a = 42;
double b = a; --> implicit promo
int d = static_cast<int>(b); --> explicit demo 
--> static cast de b vers int

explicit downcast --> utiliser static_cast
--> cast "classique" de c++
--> a utiliser pour cast une variable d'un type a l'autre
--> static cast: cast marche uniquement dans un meme arbre d'heritage pour les classes

- dynamic cast 

virtual ~Class(void) --> active les rtti

-->Seule cast qui est fait a l'execution et pas a la compilation

--> fonctionne uniquement sur instance polymorphique (fonction membre ddoit etre virtuelle == methode)
--> uniquement sur des cast de pointeur ou de reference
--> permet de verifier si downcast explicit est realisable

Child1	a;
Parent*	b = &a;

Child1*	c = dynamic_cast<Child1 *>(b); --> cast reussit car child1 est le type reel
if (c == NULL)
	cast n'est pas possible
else
	cast est possible

try{
	Child2&	d = dynamic_cast<Child2 &>(*b); --> va echouer car child 2 n'est pas type reel
	conversion is ok
}
catch (std::bad_cast &bc) {
	conversion is not ok
	return 1;
}

- reinterpret cast

--> compilo fait confiance, reinterpret n'importe quel adresse en une autre
--> pas de check semantique, on peut faire rentrer un elephant dans une souris
void* b = mystere
int* *c = reinterpret_cast<int *>(b);
int& = reinterpret_cast<int &>(b);

- const cast

--> permet de passer d'un type constant a un type non constant == mutable
--> mauvais signe de code pas propre

int			a = 42;
int const * b = &a
int	*		d = const_cast<int *>(b);

- cast operator

class foo;

operator int() --> a definir dans la classe
{
	return this->_num;
}

Foo a = Foo(nb);

int b = a; --> b va etre initialisé a l'aide de operator int();

--> permet de cast instance de classe a un type a l'aide du mot clé operator

- explicit keyword

explicit constructor();
--> interdit les constructions par conversions implicit de l'instance
