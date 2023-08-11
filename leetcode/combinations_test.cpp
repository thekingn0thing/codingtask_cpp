#include "../test/catch.hpp"
#include "balanced_binary_tree.h"
#include "combinations.h"

using namespace std;

TEST_CASE( "Should return all combinations", "[combinations-basic]" ) {
    Combinations c;
    auto v = c.combine(5, 3);
    
    REQUIRE(v.size() == 10);
}