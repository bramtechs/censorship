#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

static const char* const WORD_FILES[] = {
    "censorship.txt",
    "censor.txt",
    ".censorship.txt",
    ".censor.txt"
};

inline bool open_word_file(ifstream& stream) {
    for (const auto file : WORD_FILES){
        stream.open(file,ifstream::in);
        if (stream.good()){
            return true;
        }
    }
    cout << "Couldn't find censorship file!" << endl;
    return false;
}

inline bool str_contains(const string& str, const string& match){
    return str.find(match) != string::npos;
}

void fill_with_words(std::vector<string>& banned){
    // search for file with forbidden words
    ifstream word_stream = ifstream();
    if (open_word_file(word_stream)){
        string word;
        while(getline(word_stream,word)){
            banned.push_back(word);
        }
        word_stream.close();
    }
}

int main(int argc, char** argv){

    // check if verbose flag present
    bool verbose = false;
    for (int i = 0; i < argc; i++){
        std::string arg = argv[i];
        if (arg == "-v" || arg == "--verbose"){
            verbose = true;
        }
    }

    std::vector<string> banned_words;
    fill_with_words(banned_words);
    
    if (verbose) {
        cout << "Showing reduced input" << std::endl;
        for (const auto& word : banned_words){
            cout << "- " << word << std::endl;
        }
        cout << "-----------------------------" << std::endl;
    }

    string line_input;
    while(getline(cin,line_input)){
        bool doShow = true;
        for (const string& word : banned_words){
            if (str_contains(line_input,word)){
                doShow = false;
                break;
            }
        }
        if (doShow) {
            cout << line_input << endl;
        }
    }

    return EXIT_SUCCESS;
}
