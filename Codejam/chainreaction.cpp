#include <bits/stdc++.h>
#define pb push_back
using namespace std;
long long vec1[100009], vec2[100009], vec3[100009], vec4[100009];
vector<int> arr1[100009];
queue<int> q1;
int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int temp2;
    cin >> temp2;
    for (int temp = 1; temp <= temp2; temp++)
    {
        cout << "Case #" << temp << ": ";
        long long val1, val2, val3, val4, val5 = 0;
    cin >> val1;
    for (int TIH = 0; TIH <= val1; TIH++)
    {vec1[TIH] = vec2[TIH] = vec3[TIH] = vec4[TIH] = 0;arr1[TIH].clear();
    }
    for (int tih = 1; tih <= val1; tih++){
        cin >> vec1[tih];
        }
    for (int TH = 1; TH <= val1; TH++)
    {
        cin >> val2;
        vec2[TH] = val2;
        arr1[val2].pb(TH);
        vec4[val2]++;
    }
    for (int e = 0; e <= val1; e++)
        if (vec4[e] == 0){
            q1.push(e);}
    while (!q1.empty())
    {
        val2 = q1.front();
        q1.pop();
        val3 = 1 << 30;
        for (int ep = 0; ep < arr1[val2].size(); ep++)
        {
            if (vec3[arr1[val2][ep]] < val3)
            {
                val3 = vec3[arr1[val2][ep]];
                val4 = ep;
            }
        }
        if (val3 == 1 << 30)
            val3 = 0;
        for (int temp3 = 0; temp3 < arr1[val2].size(); temp3++)
            if (temp3 != val4)
                val5 += vec3[arr1[val2][temp3]];
        vec3[val2] = max(vec1[val2], val3);
        vec4[vec2[val2]]--;
        if (vec4[vec2[val2]] == 0)
            q1.push(vec2[val2]);
    }
    cout << val5+vec3[0] <<endl;
    
    }
    return 0;
}