#define CATCH_CONFIG_MAIN  
#include "catch.hpp"
#include "ShakeSort.h"  

TEST_CASE("ShakeSort: Single Element Array", "[ShakeSort]") {
    int arr[] = { 5 };
    ShakeSort(arr, 1);
    REQUIRE(arr[0] == 5);
}

TEST_CASE("ShakeSort: Already Sorted Array", "[ShakeSort]") {
    int arr[] = { 1, 2, 3, 4, 5 };
    ShakeSort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("ShakeSort: Reversed Array", "[ShakeSort]") {
    int arr[] = { 5, 4, 3, 2, 1 };
    ShakeSort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("ShakeSort: Array with Duplicates", "[ShakeSort]") {
    int arr[] = { 7, 7, 7, 7 };
    ShakeSort(arr, 4);
    int expected[] = { 7, 7, 7, 7 };

    for (int i = 0; i < 4; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("ShakeSort: Array with Negative Numbers", "[ShakeSort]") {
    int arr[] = { 3, -1, 2, -5, 0 };
    ShakeSort(arr, 5);
    int expected[] = { -5, -1, 0, 2, 3 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

