class Solution {
public:
    double Median(vector<int>& solution) {
        int size = solution.size();
        double median = (size%2) ? solution[size/2]:((solution[size/2-1]) + solution[(size/2)])/2.0 ;
        return median;
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <int> solution(nums1);
        float median;
        if(nums1.size() == 0) return Median(nums2);
        if(nums2.size() == 0) return Median(nums1);
        vector<int>::iterator itr = nums2.begin(), solItr = solution.begin();
        // solution.insert(solution.end(), nums2.begin(), nums2.end());
        // sort(solution.begin(), solution.end());
        for (auto itr = nums2.begin(); itr!=nums2.end() && solItr!=solution.end(); itr++) {
            //cout << "MARK6" << endl;
            while(*itr>=*solItr) {
                //cout << "MARK5" << endl;
                solItr++;
                if(solItr==solution.end()) break;
            }
            //cout << "MARK4" << endl;
            if(solItr == solution.end()) { 
                //cout << "MARK3" << endl;
                solution.insert(solution.end(), itr, nums2.end());
                break;
            } else {
                //cout << "MARK2" << " " << *itr << endl;
                solItr = solution.insert(solItr, *itr);
            }
            //cout << "MARK" << endl;
        }
        // for (auto i = solution.begin(); i!=solution.end(); i++) {
        //     cout << *i << endl;
        // };
        return Median(solution);
    }
};