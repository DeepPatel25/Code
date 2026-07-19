/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        for(int i = 0; i < mountainArr.length(); i++) {
            if(mountainArr.get(i) == target) {
                return i;
            }
        }

        return -1;
    }
};