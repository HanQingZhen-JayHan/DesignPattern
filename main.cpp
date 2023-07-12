#include "CreationalPatterns/Factory/Test/FactoryTest.h"
#include "Query/QueryResult.h"
#include "Query/Test/QueryTest.h"

#include "Base/Log.h"
int main() {
    Log::d("Hello World");

    FactoryTest test;
    // QueryTest test;
    test.Run();
    return 0;
}