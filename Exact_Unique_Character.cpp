/*
Extract Unique characters

Given a string, you need to remove all the duplicates. That means, the output string should contain each character only once. The respective order of characters should remain same.
Input format :
String S
Output format :
Output String
Constraints :
0 <= Length of S <= 10^8
Sample Input 1 :
ababacd
Sample Output 1 :
abcd
Sample Input 2 :
abcde
Sample Output 2 :
abcde
*/

#include <iostream>
using namespace std;
char* uniqueChar(char *str){
    // Write your code here
    int i=0;
    int l=0;
    int f=0;
    while(str[l]!=' ')
    {
        l++;
    }
    for(int j=0;j<l;j++)
    {
        f=0;
        for(int k=0;k<j;k++)
        {
            if(str[j]==str[k])
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            str[i]=str[j];
            i++;
        }

    }
   return str;
}

int main() {

	char input[1000000];
	cin >> input;
	cout << uniqueChar(input) << endl;
}
