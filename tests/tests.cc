#include <gtest/gtest.h>
#include <polynomial/polynomial.h>
using namespace std;
using namespace Polynomial;

TEST(FunctionsTests, ConstuctorByCopy) {
    DoubleLinkedList b;
    b.insert_at_tail(2, 3);
    b.insert_at_head(1, 2);
    b.insert_at_head(1, 3);
    b.insert_at_tail(2, 2);
    DoubleLinkedList a(b);
    a.insert_at_head(2, 0);
    a.insert_at_tail(2, 0);
    a = b;
    cout << a;
    cout << b;
    // Assert
}
TEST(FunctionsTests, ConstuctorByRandom) {
    DoubleLinkedList b(10, 10);
    cout << b;
    // Assert
}