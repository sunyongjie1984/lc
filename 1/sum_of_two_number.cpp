#include <vector>
#include <iostream>

class Solution {
public:
    std::vector<int> twoSum( std::vector<int>& nums, int target ) {
        std::vector<int> ret;
        int size = nums.size( );
        for ( int i = 0; i < size; ++i ) {
            for ( int j = i + 1; j < size; ++j ) {
                if ( target == nums[ i ] + nums[ j ] ) {
                    ret.push_back( i );
                    ret.push_back( j );
                    break;
                }
            }
            if ( !ret.empty( ) ) {
                break;
            }
        }
        return ret;
    }
};

int main() {
    Solution a;
    std::vector<int> b;
    b.push_back( 2 );
    b.push_back( 7 );
    b.push_back( 11 );
    b.push_back( 15 );
    b.push_back( 1 );
    std::vector<int> n = a.twoSum( b, 12 );
    std::vector<int>::const_iterator it = n.begin();
    for ( ; it != n.end(); ++it ) {
        std::cout << *it << std::endl;
    }
    return 0;
}
