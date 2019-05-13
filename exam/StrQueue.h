#ifndef STRINGQUEUE_H
#define STRINGQUEUE_H
#include <cstring>
#include <iostream>
using namespace std;


class StringQueue
{
    public:
        int ability;
        char* strings;
        int used;
        int num;
        StringQueue(int);
        virtual ~StringQueue();
        StringQueue(StringQueue&);
        void enqueue(string);
        struct bad_op
        {
            string type;
        };
        bool isEmpty();
        bool isFull();
        string dequeue();
        StringQueue& operator=(StringQueue);
};

#endif // STRINGQUEUE_H
