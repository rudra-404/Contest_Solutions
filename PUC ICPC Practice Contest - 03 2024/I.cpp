#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    map<string, int> definitions;
    string line;
    while (getline(cin, line)) {
        stringstream ss(line);
        string command;
        ss >> command;
        if (command == "def") {
            string var;
            int value;
            ss >> var >> value;
            definitions[var] = value;
        } else if (command == "calc") {
            vector<string> tokens;
            string token;
            while (ss >> token) {
                tokens.push_back(token);
                if (token == "=") break;
            }
            if (tokens.back() != "=") {
                cout << "unknown\n";
                continue;
            }
            int result = 0;
            bool unknown = false;
            string lastOperator = "+";
            for (size_t i = 0; i < tokens.size() - 1; ++i) {
                const string& curr = tokens[i];
                if (curr == "+" || curr == "-") lastOperator = curr;
                else {
                    if (definitions.find(curr) == definitions.end()) {
                        unknown = true;
                        break;
                    }
                    int value = definitions[curr];
                    if (lastOperator == "+") result += value;
                    else if (lastOperator == "-") result -= value;
                }
            }
            string resultWord = "unknown";
            if (!unknown) {
                for (const auto& entry : definitions) {
                    if (entry.second == result) {
                        resultWord = entry.first;
                        break;
                    }
                }
            }
            string expression = line.substr(5);
            cout << expression << " " << resultWord << "\n";
        } else if (command == "clear") definitions.clear();
    } return 0;
}