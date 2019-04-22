#ifndef INTEGERSET_H
#define INTEGERSET_H


class integerSet
{
    private:
        int max;
        int* elements;

    public:
        integerSet();
        integerSet(int);


        virtual ~integerSet();

        void insert(int);
        void erase(int);
        bool isSubset(integerSet);
        bool isMember(int);
        void print();
        int size();
        int capacity();
        bool isEmpty();
        void clear();

    protected:
};

#endif // INTEGERSET_H
