#include "CreationalPatterns/Factory/Test/FactoryTest.h"
#include "Decorator/Test/DecoratorTest.h"
#include "IO/IOTest.h"
#include "Query/Test/QueryTest.h"

#include "Base/Log.h"
int main() {
    Log::d("Hello World");

    // FactoryTest test;
      QueryTest test;
    // IOTest test;
    //DecoratorTest test;
    test.Run();
    return 0;
}