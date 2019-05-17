//
// Created by wmd on 2019/4/23.
//

#ifndef CPP_FILE_INTEGERSET_H
#define CPP_FILE_INTEGERSET_H


class integerSet{
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
    void insert(int); //
    void erase(int); //
    bool isSubset(integerSet&); //
    bool isMember(int); //
    void print(); //
    int size()const ; //
    int capacity()const ; //
    bool isEmpty(); //
    void clear(); //
    integerSet setunion(integerSet);//
    integerSet setintsection(integerSet);//
    integerSet setdifference(integerSet);//
    integerSet setsymmetricdifference(integerSet);//
    integerSet& operator=(integerSet);

    struct bad_integerSet{
        int errnum;
    };
};


#endif //CPP_FILE_INTEGERSET_H