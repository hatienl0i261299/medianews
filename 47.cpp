#include <bits/stdc++.h>
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

void solve() {
	string s1, s2, sub;
    getline(cin, s1);
    getline(cin, s2);
    set<string> word1, word2;
    istringstream token1(s1), token2(s2);
    while (token1 >> sub)
        word1.insert(sub);
    while (token2 >> sub)
        word2.insert(sub);
    set<string>::iterator it1, it2;
    for (it1 = word1.begin(); it1 != word1.end(); ++it1){
        bool check = false;
        for (it2 = word2.begin(); it2 != word2.end(); ++it2){
            if (*it2 == *it1)
                check = true;
        }
        if (!check)
            cout << *it1 << " ";
    }
}

int main()
{
    solve();
    return 0;
}
