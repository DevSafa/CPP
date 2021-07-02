
#include <string>
class Quadruped // can access name, run() and legs
{
    private:
        std::string     name; // only accessible from an Quadruped object

    protected:
        int             legs[4]; //Accessible from an Quadruped or derived object

    public:
        void            run(); // accessible from whenever
};

class Dog : public Quadruped // can access run() and legs
{

};

int main(){ // can only access run()

}

//using the right public to inherit 
// the encapsulation levels with inheritance