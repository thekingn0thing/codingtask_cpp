#include "../test/catch.hpp"
#include "single_number_3.cpp"

using namespace std;
using Catch::Matchers::VectorContains;

TEST_CASE( "Two unique number are found.", "[6,7][singleNumber]" ) {
    vector<int> in = {1,4,6,1,4,7};
    Solution solution;
    const vector<int> result = solution.singleNumber(in);
    
    REQUIRE_THAT(result, VectorContains(6));
    REQUIRE_THAT(result, VectorContains(7));
}
