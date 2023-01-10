#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool ifequal(int count1[], int count2[])
    {
        for (int i = 0; i < 26; i++)
        {
            if (count1[i] != count2[i])
                return 0;
        }
        return 1;
    }

    bool checkInclusion(string s1, string s2)
    {

        int size1 = s1.length(), size2 = s2.length();
        int count1[26] = {0}, count2[26] = {0};

        for (int i = 0; i < size1; i++)
        {
            int index = s1[i] - 'a';
            count1[index]++;
        }
        int i = 0;
        while (i < size2 - size1 + 1)
        {
            for (int j = i; j < size1 + i; j++)
            {
                int index = s2[j] - 'a';
                count2[index]++;
            }
            if (ifequal(count1, count2) == 1)
                return 1;
            cout << "new" << endl;
            for (int k = 0; k < 26; k++)
            {
                cout << count1[k] << " ";
            }
            cout << endl;
            for (int k = 0; k < 26; k++)
            {
                cout << count2[k] << " ";
            }
            cout << endl;
            for (int k = 0; k < 26; k++)
            {
                count2[k] = 0;
            }
            i++;
        }
        return 0;
    }
} s;

int main()
{
    string s1 = "adc", s2 = "dcda";
    cout << s.checkInclusion(s1, s2);
}