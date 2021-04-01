#include <string>

#ifndef CREATE_H
#define CREATE_H
class CreateAndDestroy{
private:
    int objectID;
    std::string message;
public:
    CreateAndDestroy(int, std::string);
    ~CreateAndDestroy();
};
#endif CREATE_H