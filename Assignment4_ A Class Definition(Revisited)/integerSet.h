//
// Created by wmd on 2019/5/5.
//

#ifndef ASSIGNMENT4_A_CLASS_DEFINITION_REVISTED__INTEGERSET_H
#define ASSIGNMENT4_A_CLASS_DEFINITION_REVISTED__INTEGERSET_H


class integerSet {
private:
    int ability;
    int used;
    int* elements;
public:
    explicit integerSet(int); //
    integerSet(); //
    integerSet(const integerSet&);

    virtual ~integerSet(); //

    int* element()const ;//
    int size()const ;//
    int capacity()const ;//

    bool isMember(int);//
    void insert(int); //
    bool isEmpty(); //
    void clear(); //
    void erase(int); //
    bool isSubset(integerSet&); //
    integerSet setdifference(integerSet);//
    integerSet setsymmetricdifference(integerSet);//
    integerSet setunion(integerSet);//
    integerSet setintsection(integerSet);//
    /*下面是运算符重载*/
    int operator()();//
    integerSet operator|(integerSet);//
    integerSet operator&(integerSet);//
    integerSet operator-(integerSet);//
    integerSet& operator=(integerSet);


    struct bad_integerSet{
        int errnum=0;
    };
};


#endif //ASSIGNMENT4_A_CLASS_DEFINITION_REVISTED__INTEGERSET_H
