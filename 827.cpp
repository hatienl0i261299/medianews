#include <bits/stdc++.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string.h>
#include <algorithm>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

bool check(string s) {
	for (int i = 0;i < s.length();i++) {
		if (s[i] >= 'a' and s[i] <= 'z') {
			return false;
		}
	}
	return true;
}

int main() {
	string s;
	getline(cin,s);
	vector<string> words;
	string word = "";
	for (int i = 0;i < s.length();i++) {
		if (s[i] != ' ') {
			word += s[i];
		}
		if ( (s[i] == ' ' and s[i-1] != ' ' and i != 0) or i == s.length() - 1 ) {
			words.push_back(word);
			word.clear();
		}
	}
	for (int i = 0;i < words.size();i++) {
		if (check(words.at(i)))
		cout << words.at(i) << " ";
	}
	return 0;
}
