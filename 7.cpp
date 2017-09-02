#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;


class Solution {
public:
    int reverse(int x) {
	int Number = 0;
	int last_integer = 0;
	
	while(x != 0){
		last_integer = x%10;
		Number = Number*10 + last_integer;
		x = x/10;
	}
        
	return Number;
    }
};


int main(int argc, char **argv) {
	int x = 0, num = 0;
	Solution solu;
	cout << "enter number :";
	cin >> x;

	num = solu.reverse(x);

	cout << "the result is :" << num << endl;

	return 0;
}
