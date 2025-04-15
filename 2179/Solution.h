//
// Created by stefan on 1/21/25.
//

#ifndef SOLUTION_H
#define SOLUTION_H

using namespace std;

class Solution {
public:
    long long goodTriplets(vector<int> &nums1, vector<int> &nums2) {
        long long n = nums1.size();
        vector<int> positions1(n);
        vector<int> positions2(n);

        for (int i = 0; i < n; ++i) {
            positions1[nums1[i]] = i;
            positions2[nums2[i]] = i;
        }

        long long goodTripletCount = 0;


        for (int i = 1; i < n - 1; ++i) {
            int middleNum = nums1[i];

            if (positions1[middleNum] < positions2[middleNum]) {
                if (positions1[middleNum] < n - positions2[middleNum] - 1) {
                    goodTripletCount += countGoodTripletsForGivenMiddleNum(
                        middleNum, i, nums1, positions2);
                } else {
                    goodTripletCount += countGoodTripletsForGivenMiddleNumR(
                        middleNum, positions2[middleNum], nums2, positions1);
                }
            } else {
                if (positions2[middleNum] < n - positions1[middleNum] - 1) {
                    goodTripletCount += countGoodTripletsForGivenMiddleNum(
                        middleNum, positions2[middleNum], nums2, positions1);
                } else {
                    goodTripletCount += countGoodTripletsForGivenMiddleNumR(
                        middleNum, i,nums1, positions2);
                }
            }
        }

        return goodTripletCount;
    }

    int countGoodTripletsForGivenMiddleNum(int middleNum, int middlePos1, const vector<int> &nums1,
                                            const vector<int> &positions2) {
        int possibleLeftNumsCount = middlePos1;
        int possibleRightNumsCount = nums1.size() - positions2[middleNum] - 1;
        for (int i = middlePos1 - 1; i >= 0; --i) {
            if (positions2[nums1[i]] > positions2[middleNum]) {
                --possibleRightNumsCount;
                --possibleLeftNumsCount;
            }
        }
        return possibleLeftNumsCount * possibleRightNumsCount;
    }

    int countGoodTripletsForGivenMiddleNumR(int middleNum, int middlePos1, const vector<int> &nums1,
                                             const vector<int> &positions2) {
        int possibleLeftNumsCount = positions2[middleNum];
        int possibleRightNumsCount = nums1.size() - middlePos1 - 1;
        for (int i = middlePos1 + 1; i < nums1.size(); ++i) {
            if (positions2[nums1[i]] < positions2[middleNum]) {
                --possibleLeftNumsCount;
                --possibleRightNumsCount;
            }
        }
        return possibleLeftNumsCount * possibleRightNumsCount;
    }
};


#endif //SOLUTION_H
