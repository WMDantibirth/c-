//
// Created by Administrator on 2019/4/30 0030.
//

#ifndef CPP_FILE_INTEGERSET_H
#define CPP_FILE_INTEGERSET_H


class integerSet
{
private:
    int ability;
    int used;

public:
    int* elements;
    integerSet(int); //
    integerSet(); //

    virtual ~integerSet(); //

    void insert(int); //
    void erase(int); //
    bool isSubset(integerSet); //
    bool isMember(int); //
    void print(); //
    int size(); //
    int capacity(); //
    bool isEmpty(); //
    void clear(); //

};


#endif //CPP_FILE_INTEGERSET_H
