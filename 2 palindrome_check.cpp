#include <bits/stdc++.h>
using namespace std;
string isPalindrome(string S)
{
	string P = S;
    reverse(P.begin(), P.end());
    if (S == P)
	{
		return "it is a palindrome";
	}
	
	else
	{	
		return "No its not a palindrome";
	}
}

int main()
{
	string S;
    cin>>S;
	cout << isPalindrome(S);

	return 0;
}
