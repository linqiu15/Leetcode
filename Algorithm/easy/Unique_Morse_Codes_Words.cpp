//--------------------Description----------
// Now, given a list of words, each word can be written as a concatenation of
// the Morse code of each letter. For example, "cab" can be written as
// "-.-..--...", (which is the concatenation "-.-." + ".-" + "-..."). We'll call
// such a concatenation, the transformation of a word.

// Return the number of different transformations among all words we have.

//--------------------Results--------------
// Runtime: 12 ms, faster than 27.25% of C++ online submissions for Unique Morse
// Code Words. Memory Usage: 10.1 MB, less than 5.06% of C++ online submissions
// for Unique Morse Code Words.

#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  vector<string> morse_tale{
      ".-",   "-...", "-.-.", "-..",  ".",   "..-.", "--.",  "....", "..",
      ".---", "-.-",  ".-..", "--",   "-.",  "---",  ".--.", "--.-", ".-.",
      "...",  "-",    "..-",  "...-", ".--", "-..-", "-.--", "--.."};
  bool isin(vector<string> str, string s) {
    int i = 0;
    for (; i < int(str.size()) && s != str[i]; i++) {
    }
    return i != int(str.size());
  }
  string word_to_morse(string word) {
    // word are all lowercase
    string rstr = "";
    for (int i = 0; i < int(word.length()); i++) {
      rstr += morse_tale[word[i] - 'a'];
    }
    return rstr;
  }
  int uniqueMorseRepresentations(vector<string> &words) {
    vector<string> array_morse;
    int count = 0;
    for (int i = 0; i < int(words.size()); i++) {
      if (!isin(array_morse, word_to_morse(words[i]))) {
        count++;
        array_morse.push_back(word_to_morse(words[i]));
      }
    }
    return count;
  }
};

// Point:std::set can be useful!
