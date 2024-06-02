#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

string timeConversion(string s) {
      string hourString = s.substr(0, 2);
      int hourInt = stoi(hourString);
      size_t pos = s.find("PM");
      if (pos != string::npos) {
          if (hourInt + 12 < 24) 
             hourString = to_string(hourInt+12);
      } else if (hourInt == 12) {
          hourString = "00";
      } 
      s.replace(0,2,hourString);
      s.erase(s.size() - 2);
      return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
