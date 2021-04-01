#include <iostream>
#include "CreateAndDestroy.h"
using namespace std;
CreateAndDestroy::CreateAndDestroy(int ID, string messageString){
    objectID = ID;
    message = messageString;
    cout << "Object " << objectID << " constructor runs " << message <<endl;
}
CreateAndDestroy::~CreateAndDestroy(){
    cout << "Object " << objectID << " destructor runs " << message <<endl;
}