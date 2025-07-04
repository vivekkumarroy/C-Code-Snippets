
/*  A very old diary, said to be cursed, once belonged to a powerful black magician named Taran Tantrik. People believe that anyone whose name is written in the diary slowly comes under his control.

One day, the diary mysteriously reached the town of Darbhanga, where it fell into the hands of college students. Tired of attending never-ending lectures, the students came up with a wicked idea — they started writing the names of professors who gave long, boring classes into the diary, hoping that Taran Tantrik would take control of them and give everyone a break!

Nikita, a clever person from the college, found the diary and became curious. She wants to check if any professor’s name was written more than once.

You are given a list of names, showing the order in which the names were written in the diary. For each name, you need to say whether that name was already written before or not.

Input
First line of input contains an integer n
 (1≤n≤100
) — the number of names in the list.

Next n
 lines each contain a string si
, consisting of lowercase English letters. The length of each string is between 1
 and 100
.

Output
Output n
 lines each containing either "YES" or "NO" (without quotes), depending on whether this string was already present in the stream or not.

You can print each letter in any case (upper or lower).

Examples
InputCopy
8
zabi
nithin
satyasai
zabi
gopal
nithin
kaibalya
zabi
OutputCopy
NO
NO
NO
YES
NO
YES
NO
YES  */




#include <iostream>
#include <unordered_set>
#include <vector>
#include <string>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<string> names(n);
    for (int i = 0; i < n; ++i) {
        cin >> names[i];
    }
 
    unordered_set<string> hs;
 
    for (auto name : names) {
        if (hs.find(name) != hs.end()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
            hs.insert(name);
        }
    }
 
    return 0;
}



