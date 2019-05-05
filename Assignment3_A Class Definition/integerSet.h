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
    integerSet(int); //
    integerSet(); //

    virtual ~integerSet(); //

    int* element();//
    void insert(int); //
    void erase(int); //
    bool isSubset(integerSet&); //
    bool isMember(int); //
    void print(); //
    int size(); //
    int capacity(); //
    bool isEmpty(); //
    void clear(); //
    integerSet setunion(integerSet&);//
    integerSet setintsection(integerSet&);//
    integerSet setdifference(integerSet&);//
    integerSet setsymmetricdifference(integerSet&);//
    integerSet& operator=(integerSet);

    struct bad_integerSet{
        int errnum=0;
    };
};


#endif //CPP_FILE_INTEGERSET_H
