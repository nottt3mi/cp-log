// Haven't coded in C++ in a while. Had to look up how to write a comment.
// Codeforces problem: https://codeforces.com/problemset/problem/71/A
// !!!

#include <iostream>
#include <string>
using namespace std;

string abbreviate(string word){
    int length = word.size();
    if(length <= 10) return word;
    string abb_word = word[0] + to_string(length-2) + word[length-1];
    return abb_word;
}

int main() {
    int n;
    cin >> n;
    for(int i=0; i< n; i++){
        string word, abb_word;
        cin >> word;
        abb_word = abbreviate(word);
        cout << abb_word << endl;
    }
}

