/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
   vector<int> lamVec(6), outputVec = { 99 };
   list<int> copylist = { 100 };
   
   int i = 1;
   
   for_each(lamVec.begin(), lamVec.end(), [&i](int &idx){ idx = i++;});
   for_each(lamVec.begin(), lamVec.end(), [](int idx){ cout << idx << endl;});
   copy (lamVec.begin(), lamVec.end(), back_inserter(outputVec));
   copy (lamVec.begin(), lamVec.end(), insert_iterator<vector<int>>(outputVec, outputVec.begin()));
   copy (lamVec.begin(), lamVec.end(), inserter(outputVec,outputVec.begin()));
   
    copy (lamVec.begin(), lamVec.end(), front_inserter(copylist));
    
   for_each(outputVec.begin(), outputVec.end(), [](int idx){ cout << idx << endl;});
   
    for_each(copylist.begin(), copylist.end(), [](int idx){ cout << idx << endl;});

    return 0;
}
