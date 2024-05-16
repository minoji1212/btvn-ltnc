#include <bits/stdc++.h>
#include <cctype> // Để sử dụng hàm std::isupper

using namespace std;


int camelcase(string s) {
    int count = 1;
    for (char c : s){
        if(isupper(c)) 
        count++;
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
