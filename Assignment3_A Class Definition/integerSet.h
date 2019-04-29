#ifndef INTEGERSET_H
#define INTEGERSET_H


class integerSet
{
    private:
        int ability;
        int* elements;
        int used;

    public:
        integerSet(int); //
        integerSet(); //

        virtual ~integerSet(); //

        void insert(int); //
        void erase(int); //
        friend bool isSubset(integerSet); //
        bool isMember(int); //
        void print(); //
        int size(); //
        int capacity(); //
        bool isEmpty(); //
        void clear(); //

};

#endif // INTEGERSET_H
