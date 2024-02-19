#include <bits/stdc++.h>
#include <vector/vector.h>
using namespace std;

int main() {

    std::cout << "Hello, World!" << std::endl;
    m_std::m_vector<int> vv(3);
    vv.push_back(5);
    vv.push_back(4);
    vv.show();
    vv.push_back(8);
    vv.push_back(0);
    vv.push_back(1);
    vv.show();
    vv.push_back(0);
    vv.push_back(1);
    vv.show();
//    Solution solution;
        vector<int>nums1={0,0,3,0,0,0,0,0,0};
        std::cout<<"nums1.capacity()"<<nums1.capacity()<<std::endl;
    std::cout<<"nums1.size()"<<nums1.size()<<std::endl;
//    vector<int>nums2={-1,1,1,1,2,3};
//    solution.merge(nums1,3,nums2,6);
    m_std::m_vector<int> tt={0,0,3,0,0,0,0,0,0};
    std::cout<<"tt.capacity()"<<tt.capacity()<<std::endl;
    std::cout<<"tt.size()"<<tt.size()<<std::endl;
    tt.push_back(3);
    std::cout<<"tt.capacity()"<<tt.capacity()<<std::endl;
    std::cout<<"tt.size()"<<tt.size()<<std::endl;
    tt.show();

    return 0;
}
