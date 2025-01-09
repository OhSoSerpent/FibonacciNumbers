#include <iostream>
#include <vector>

int fibNums(std::vector <int> numSeq, int k) {
int sizeOfNums = numSeq.size();
if(sizeOfNums == k){
return numSeq.back();
}
int currFibNum = numSeq[sizeOfNums - 1] + numSeq[sizeOfNums - 2];
numSeq.push_back(currFibNum);
//numSeq.erase(numSeq.begin());
return fibNums(numSeq, k);
}

int main() {
int givenNum;
std::cout << "What Fibonacci Number do you want? \n";
std::cin >> givenNum;
std::vector <int> numSeqGiven = {0, 1};
int finalNum = fibNums(numSeqGiven, givenNum);
std::cout << "The " << givenNum << " number in the Fibonacci Sequence is " << finalNum;
return 0;
}
