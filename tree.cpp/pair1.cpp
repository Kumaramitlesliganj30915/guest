#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, string> p;
    p = make_pair(2, "Amit kumar");
    pair<int, string> p1 = p;

    cout << p.first << endl;
    cout << p.second << endl;
    // int a[] = {1, 2, 3};
    // int b[] = {2, 3, 4};
    // pair<int, int> p_array[3];
    // p_array[0] = {1, 2};
    // p_array[1] = {3, 4};
    // p_array[2] = {4, 5};
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << p_array[i].first << " " << p_array[i].second << endl;
    // }
 unordered_map<int,string>m;

  m[1]="abc";
  m[5]="cdc";
  m[3]="acd";
  m[6]="a";
  m[2]="cde";

  auto it=m.find(7)

    return 0;
}