#include "doctest.h"
#include "sources/BinaryTree.hpp"
#include <istream>
#include <string>

using namespace std;
using namespace ariel;

TEST_CASE("int binaryTree basic case")
{
    BinaryTree<int> tree_of_ints;
    CHECK_NOTHROW(tree_of_ints.add_root(2));
    CHECK_NOTHROW(tree_of_ints.add_left(2, 9));
    CHECK_NOTHROW(tree_of_ints.add_left(9, 4));
    CHECK_NOTHROW(tree_of_ints.add_right(3, 5));
    CHECK_NOTHROW(tree_of_ints.add_right(2, 3));
    CHECK_NOTHROW(tree_of_ints.add_left(2, 1));
    CHECK_THROWS(tree_of_ints.add_right(15, 3));
    CHECK_THROWS(tree_of_ints.add_left(20, 1));
}
TEST_CASE("string tree")
{
    BinaryTree<string> tree_of_strings; 
    CHECK_NOTHROW(BinaryTree<string> tree_of_strings);
    CHECK_NOTHROW(tree_of_strings.add_root("root"));
    CHECK_NOTHROW(tree_of_strings.add_left("root", "ameer"));
    CHECK_NOTHROW(tree_of_strings.add_left("ameer", "natan"));
    CHECK_NOTHROW(tree_of_strings.add_right("ameer", "messi"));
    CHECK_NOTHROW(tree_of_strings.add_right("root", "messi"));
    CHECK_NOTHROW(tree_of_strings.add_left("root", "ronaldo"));
    
    BinaryTree<string> tree_of_stringsNumbers; //

    CHECK_NOTHROW(tree_of_stringsNumbers.add_root("15"));
    CHECK_NOTHROW(tree_of_stringsNumbers.add_left("15", "2"));
    CHECK_NOTHROW(tree_of_stringsNumbers.add_left("7", "2"));
    CHECK_NOTHROW(tree_of_stringsNumbers.add_right("7", "88"));
    CHECK_NOTHROW(tree_of_stringsNumbers.add_right("1", "88"));
    CHECK_NOTHROW(tree_of_stringsNumbers.add_left("1", "9"));
}
TEST_CASE("char tree")
{
    BinaryTree<char> tree_of_char;
    CHECK_NOTHROW(tree_of_char.add_root('a'));
    CHECK_NOTHROW(tree_of_char.add_left('r', 'f'));
    CHECK_NOTHROW(tree_of_char.add_left('f', 'g'));
    CHECK_NOTHROW(tree_of_char.add_right('f', 'h'));
    CHECK_NOTHROW(tree_of_char.add_right('a', 'y'));

    BinaryTree<char> tree_of_chars;
    CHECK_NOTHROW(tree_of_chars.add_root('A'));
    CHECK_NOTHROW(tree_of_chars.add_left('A', 'B'));
    CHECK_NOTHROW(tree_of_chars.add_left('B', 'C'));
    CHECK_NOTHROW(tree_of_chars.add_right('C', 'D'));
    CHECK_NOTHROW(tree_of_chars.add_right('D', 'E'));
    CHECK_NOTHROW(tree_of_chars.add_left('E', 'F'));

    BinaryTree<char> tree_of_chars2;
    CHECK_NOTHROW(tree_of_chars2.add_root('s'));
    CHECK_NOTHROW(tree_of_chars2.add_left('s', 'b'));
    CHECK_NOTHROW(tree_of_chars2.add_left('b', 'c'));
    CHECK_NOTHROW(tree_of_chars2.add_left('c', 'z'));
    CHECK_NOTHROW(tree_of_chars2.add_left('z', 'e'));
    CHECK_NOTHROW(tree_of_chars2.add_left('e', 'f'));
}