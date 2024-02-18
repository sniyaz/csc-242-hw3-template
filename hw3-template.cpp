/* ---------------------------------------------------------------------------
** I attest that this following code represents my own work and is subject to
** the plagiarism policy found in the course syllabus.
** 
** Class: 	CSC 242
** Assignment: 	HW3
** File: 	hw3.cpp
** Description: TODO: FILL THIS IN.
**
** Author: 	Student Name
** Date: 	Create Date
** -------------------------------------------------------------------------*/

#include <iostream>
#include <vector>

using namespace std;

// TODO: Write the body of this method/function!
int findMostCommonNumber(std::vector<int>& inputVec)
{
    // TODO: Fill your algorithm in here! Don't just return 0;
    // HINT: Think about the coin and paper clip analogy from the directions.
    // HINT: We assume that each number in the `inputVec` is between 0 - 9 (inclusive).
    // HINT: REMEMBER TO LEAVE COMMENTS explaining your reasoning!

    return 0;
}

int main () {

    // NOTE: First test array.
    // This is a vector of [1, 9, 5, 8, 5, 0, 7].
    std::vector<int> firstTest;
    firstTest.push_back(1);
    firstTest.push_back(9);
    firstTest.push_back(5);
    firstTest.push_back(8);
    firstTest.push_back(5);
    firstTest.push_back(0);
    firstTest.push_back(7);

    // This should print 5 to the terminal window.
    std::cout << "Most common in firstTest: " << findMostCommonNumber(firstTest) << std::endl;

    // NOTE: Second test array.
    // This is a vector of [1, 9, 5, 9, 5, 9].
    // HINT: The SIZE of the second test vector is different than the first! The code in your
    // `findMostCommonNumber` method should work on BOTH!
    std::vector<int> secondTest;
    secondTest.push_back(1);
    secondTest.push_back(9);
    secondTest.push_back(5);
    secondTest.push_back(9);
    secondTest.push_back(5);
    secondTest.push_back(9);

    // This should print 9 to the terminal window.
    std::cout << "Most common in secondTest: " << findMostCommonNumber(secondTest) << std::endl;

    return 0;
}