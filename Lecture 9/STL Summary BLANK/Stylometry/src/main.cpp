/*
 * Challenge questions and program design by Anna Zeng, Winter 2020.
 * Stylometry example taken from Ali Malik.
 */

#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <numeric>
#include <cmath>

using std::cout;    using std::endl;
using std::vector;  using std::string;
using std::ifstream;

const vector<string> FEATURE_VEC{"a", "about", "above", "after", "again", "against", "all", "am", "an", "and",
                                 "any", "are", "aren't", "as", "at", "be", "because", "been", "before", "being",
                                 "below", "between", "both", "but", "by", "can't", "cannot", "could", "couldn't",
                                 "did", "didn't", "do", "does", "doesn't", "doing", "don't", "down", "during",
                                 "each", "few", "for", "from", "further", "had", "hadn't", "has", "hasn't", "have",
                                 "haven't", "having", "he", "he'd", "he'll", "he's", "her","here", "here's", "hers",
                                 "herself", "him", "himself", "his", "how", "how's", "i", "i'd", "i'll", "i'm",
                                 "i've", "if", "in", "into", "is", "isn't", "it", "it's", "its", "itself", "let's",
                                 "me", "more", "most", "mustn't", "my", "myself", "no", "nor", "not", "of", "off",
                                 "on", "once", "only", "or", "other", "ought", "our", "ours", "ourselves", "out",
                                 "over", "own", "same", "shan't", "she", "she'd", "she'll", "she's", "should",
                                 "shouldn't", "so", "some", "such", "than", "that", "that's", "the", "their",
                                 "theirs", "them", "themselves", "then", "there", "there's", "these", "they",
                                 "they'd", "they'll", "they're", "they've", "this", "those", "through", "to", "too",
                                 "under", "until", "up", "very", "was", "wasn't", "we", "we'd", "we'll", "we're",
                                 "we've", "were", "weren't", "what", "what's", "when", "when's", "where", "where's",
                                 "which", "while", "who", "who's", "whom", "why", "why's", "with", "won't", "would",
                                 "wouldn't", "you", "you'd", "you'll", "you're", "you've", "your", "yours",
                                 "yourself", "yourselves", "!", "\"", "#", "$", "%", "&", "'", "(", ")", "*", "+",
                                 ",", "-", ".", "/", ":", ";", "<", "=", ">", "?", "@", "[", "\\", "]", "^", "_",
                                 "`", "{", "|", "}", "~"};

/*
 * STEP 1:
 * TODO: Copy your implementations of fileToString, countOccurrences, and
 * dotProduct below! After you've done so, modify them as follows:
 * - You'll need to modify fileToString to convert every
 * character to lowercase. Rather than creating an explicit lambda function for
 * that, you can use the existing tolower function within C++.
 * - Rather than searching directly for the feature in countOccurrences, search
 * for the following string: " " + feature + " ". This ensures that we don't match
 * strings that are substrings of words (e.g., "the" won't get matched in the word
 * "there").
 * -
 */
string fileToString(ifstream& file) {
    // TODO
    return "";
}

int countOccurrences(const string& text, const string& feature) {
    // TODO
    return 0;
}

int dotProduct(const vector<int>& v1, const vector<int>& v2) {
    // TODO
    return 0;
}

/*
 * STEP 2:
 * Implement a new version of createCountVec which returns a vector
 * where each element contains the count of the corresponding word in
 * FEATURE_VEC in the passed-in text.
 * Hint: How can you leverage countOccurrences here?
 */
vector<int> createCountVec(const string& text) {
    // TODO
    return {};
}

/*
 * STEP 3:
 * Implement a function that computes the magnitude of a vector.
 * Hint: You may have learned that the magnitude of a vector is the
 * square root of the dot product of the vector with itself.
 */
double mag(const vector<int>& v) {
    // TODO
    return 0;
}

/*
 * STEP 4:
 * Implement a function to determine the "closeness" between two vectors.
 * Use the equation on the slides for cosine and leverage your dotProduct
 * and mag functions.
 */
double cosineCloseness(const vector<int>& v1, const vector<int>& v2) {
    // TODO
    return 0;
}

/*
 * STEP 5:
 * You're done! Now run the program to see who wrote unknown.txt :)
 */
int main() {
    // Read in the files and convert file to a single string
    ifstream hamilton_fs("hamilton.txt");
    ifstream jj_fs("jj.txt");
    ifstream madison_fs("madison.txt");
    ifstream unknown_fs("unknown.txt");

    string hamilton_txt = fileToString(hamilton_fs);
    string jj_txt = fileToString(jj_fs);
    string madison_txt = fileToString(madison_fs);
    string unknown_txt = fileToString(unknown_fs);

    // Create our feature vector
    vector<int> hamilton_vec = createCountVec(hamilton_txt);
    vector<int> jj_vec = createCountVec(jj_txt);
    vector<int> madison_vec = createCountVec(madison_txt);
    vector<int> unknown_vec = createCountVec(unknown_txt);

    // Compute the "angle" between feature vector of unknown and each of the three authors
    cout << "Similarity - hamilton <-> unknown: " << cosineCloseness(hamilton_vec, unknown_vec) << endl;
    cout << "Similarity - jj <-> unknown: " << cosineCloseness(jj_vec, unknown_vec) << endl;
    cout << "Similarity - madison <-> unknown: " << cosineCloseness(madison_vec, unknown_vec) << endl;

    return 0;
}
