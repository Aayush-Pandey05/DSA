#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;

bool containsAllVowels(vector<int>& vowelCount) {
  
    // Check if all vowels are found
    for (int i = 0; i < 5; i++) {
        if (vowelCount[i] == 0) return false;
    }
    return true;
}

// Function to count valid vowel-only substrings
int countVowelSubstrings(string& str) {
    int count = 0;
    int n = str.length();

    // Iterate over all possible starting points
    for (int i = 0; i < n; i++) {
        vector<int> vowelCount(5, 0);  
        int cnt = 0;

        // Iterate over possible ending points 
        // of substrings
        for (int j = i; j < n; j++) {
            char ch = str[j];

            // If consonant found, break the loop
            if (ch != 'a' && ch != 'e' && ch != 'i' 
                && ch != 'o' && ch != 'u') {
                break;
            }

            // Increment vowel count for the found vowel
            if (ch == 'a') vowelCount[0]++;
            else if (ch == 'e') vowelCount[1]++;
            else if (ch == 'i') vowelCount[2]++;
            else if (ch == 'o') vowelCount[3]++;
            else if (ch == 'u') vowelCount[4]++;

            // If all vowels are present, count 
            // the substring
            if (containsAllVowels(vowelCount)) {
                count++;
            }
        }
    }

    return count;
}

int main() {
  
    string str = "aeoibsddaaeiouudb";

    cout << countVowelSubstrings(str);

    return 0;
}