#include <iostream>
#include <map>
using namespace std;
// using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> charCounter;
        // string dum_string;
        int left = 0, len = 0;

        // for(auto &c: s){
        for(int right = 0; right < s.size(); right++){
            if (charCounter.find(s[right]) != charCounter.end()){
                left = max(charCounter[s[right]]+1, left);
            }
            len = max(right - left + 1, len);
            charCounter[s[right]] = right;
            // charCounter.insert(pair(s[right], right));
        }
        return len;
    }
};


int main() {


    cout << "Hello, World!" << endl;
    //string input1 = "abcabcbb";
    string input1 = "abba";

    Solution mySoluion;
    int ans = mySoluion.lengthOfLongestSubstring(input1);

    return 0;
}