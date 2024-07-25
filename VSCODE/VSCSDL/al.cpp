/*
 * @Author: dulred dulred@qq.com
 * @Date: 2024-07-20 18:52:43
 * @LastEditors: dulred dulred@qq.com
 * @LastEditTime: 2024-07-25 00:11:29
 * @FilePath: \VSCSDL\my_test.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int candy(vector<int>& ratings) {
        int len = ratings.size();
        int res = len;
        int i = 1;
        while (i < len)
        {
            if (ratings[i-1] > ratings [i])
            {
                res+=1;
                if (i+1 != len)
                {
                    if (ratings[i]>ratings[i+1])
                    {
                        res+=1;
                    }
                    
                }
                return res+=1;
            }
            
            // int count = 0;
            // int j = i;
            // while (j < len)
            // {
            //     cout << "sss";
                
            //     j++;
            // }
            ++i;
        }
        return res;
    }
};

int main (int, char*[])
{
    vector<int> cc = {1,0,2};
    Solution* solution = new Solution();
    int len = solution->candy(cc);
    cout << len <<endl;
    delete solution;
    return 0;

}