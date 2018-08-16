/*
NAME: sameerp2
TASK: ride
LANG: C++11
*/
// header

#include <bits/stdc++.h> // basically all of the packages
using namespace std;

int score(string s) 
{
    int prod = 1;
    for(char arg : s) {
        prod *= (arg - 'A' + 1);
    }
    return prod % 47;
}
int main()
{
    ifstream fin("ride.in");
    ofstream fout("ride.out"); // open input files
    
    string comet, group;
    fin >> comet >> group;
    if(score(comet) == score(group))
        fout << "GO\n"; // terminate output with a new line
    else 
        fout << "STAY\n";
}