#include <iostream>
#include <string>
#include <vector>
using namespace std;


vector<string> split(const string &text, char sep) {
   vector<string> tokens;
   size_t start = 0, end;
    while ((end = text.find(sep, start)) != string::npos) {
        tokens.push_back(text.substr(start, end - start));
        start = end + 1;
    }
    tokens.push_back(text.substr(start));
    return tokens;
}


int main() {

    string text = "10 20 30";

    vector<string> vec = split(text, ' ');

    vector <int> nums1;

    for (string & pos : vec) {
       int ctonum = stoi(pos);
       nums1.push_back(ctonum);
    }

    // print out the sum of nums1

    int sum=0;
    for (int &i : nums1){
        sum=sum+i;
    }
    cout << sum;

    return 0;
}

