#ifndef SAMPLE2_CLASS_H
# define SAMPLE2_CLASS_H

class Sample2 {

    public:
        Sample2( void );
        ~Sample2( void );

        //declare a non-member function
        static int getNbInst( void );

        private:
            //declare a non-member attribute
            static int _nbInst;
};

#endif